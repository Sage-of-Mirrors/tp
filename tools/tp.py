"""

tp.py - Various tools used for the zeldaret/tp project

progress: Calculates decompilation progress. By assuming that the code was generated by 'dol2asm'
and that all non-code sections are fully decompiled. The script calculate the amount of bytes
that are left to decompile (all code in the .s files). 

pull-request: Helps people make sure that everything is OK before making pull-requests. 
The script does three things: remove unused asm files, rebuild the full project, and 
clang-format every file. 

"""

import click
import sys
import os
import rich
import logging
import subprocess
import time
import hashlib
import json
import git
import libdol
import librel
import libarc
import yaz0
import struct
import io

from pathlib import Path
from rich.logging import RichHandler
from rich.console import Console
from rich.progress import Progress
from rich.text import Text
from rich.table import Table
from dataclasses import dataclass, field
from typing import Dict

import multiprocessing as mp

VERSION = "1.0"
CONSOLE = Console()

logging.basicConfig(
    level="NOTSET",
    format="%(message)s",
    datefmt="[%X]",
    handlers=[RichHandler(console=CONSOLE, rich_tracebacks=True)]
)

LOG = logging.getLogger("rich")
LOG.setLevel(logging.INFO)

loggers = [logging.getLogger(name) for name in logging.root.manager.loggerDict]
for logger in loggers:
    logger.setLevel(logging.INFO)

DEFAULT_GAME_PATH = Path("game")
DEFAULT_BUILD_PATH = Path("build/dolzel2")

@click.group()
@click.version_option(VERSION)
def tp():
    """ Tools to help the decompilation of "The Legend of Zelda: Twilight Princess" """
    pass

@tp.command(name="progress")
@click.option('--debug/--no-debug')
@click.option('--matching/--no-matching', default=True, is_flag=True)
@click.option('--print-rels', default=False, is_flag=True)
@click.option('--format', '-f', default="FANCY", type=click.Choice(['FANCY', 'CSV', 'JSON-SHIELD'], case_sensitive=False))
def progress(debug, matching, format, print_rels):
    """ Calculate decompilation progress """

    if debug:
        LOG.setLevel(logging.DEBUG)

    if format == "FANCY":
        text = Text("--- Progress")
        text.stylize("bold magenta")
        CONSOLE.print(text)

    calculate_progress(matching, format, print_rels)

@tp.command(name="check")
@click.option('--debug/--no-debug')
@click.option('--game-path', default=DEFAULT_GAME_PATH, required=True)
@click.option('--build-path', default=DEFAULT_BUILD_PATH, required=True)
def check(debug, game_path, build_path):
    """ Compare SHA1 Checksums """

    if debug:
        LOG.setLevel(logging.DEBUG)

    text = Text("--- Check")
    text.stylize("bold magenta")
    CONSOLE.print(text)

    try:
        check_sha1(game_path, build_path)
        text = Text("    OK")
        text.stylize("bold green")
        CONSOLE.print(text)
    except CheckException as e:
        LOG.error(e)
        text = Text("    ERR")
        text.stylize("bold red")
        CONSOLE.print(text)
        sys.exit(1)

@dataclass
class ProgressSection:
    name: str
    addr: int 
    size: int
    decompiled: int

    @property
    def percentage(self):
        return 100 * (self.decompiled / self.size)

@dataclass
class ProgressGroup:
    name: str
    size: int
    decompiled: int
    sections: Dict[str, ProgressSection] = field(default_factory=dict)

    @property
    def percentage(self):
        return 100 * (self.decompiled / self.size)

def calculate_rel_progress(matching, format):
    asm_files = find_used_asm_files(not matching, use_progress_bar=(format == "FANCY"))

    results = []
    rel_paths = get_files_with_ext(Path("build/dolzel2/rel/"), ".rel")
    for rel_path in rel_paths:
        with rel_path.open("rb") as file:
            data = file.read()

        name = rel_path.name.replace(".rel", "")
        size = len(data)
        rel_asm_files = [ file for file in asm_files if f"/{name}/" in str(file)]
        ranges = find_function_ranges(rel_asm_files)

        decompiled = size
        for range in ranges:
            decompiled -= (range[1] - range[0])

        results.append(ProgressGroup(name, size, decompiled, {}))

    return results

def calculate_dol_progress(matching, format):
    # read .dol file
    dol_path = Path("build/dolzel2/main.dol")
    if not dol_path.exists():
        LOG.error(f"Unable to read '{dol_path}'")
        sys.exit(1)

    with dol_path.open("rb") as file:
        data = file.read()
        dol = libdol.read(data)

    # get section sizes
    total_size = len(data)
    format_size = 0x100

    # assume everything is decompiled
    sections = dict([
        (section.name, ProgressSection(section.name, section.addr, section.aligned_size, section.aligned_size))
        for section in dol.sections
        if section.data
    ])


    init = dol.get_named_section(".init")
    assert init
    init_decompiled_size = init.size

    text = dol.get_named_section(".text")
    assert text
    text_decompiled_size = text.size

    # find all _used_ asm files
    asm_files = find_used_asm_files(not matching, use_progress_bar=(format == "FANCY"))

    # calculate the range each asm file occupies
    ranges = find_function_ranges(asm_files)

    LOG.debug(f"init {init.addr:08X}-{init.addr + init.size:08X}")
    LOG.debug(f"text {text.addr:08X}-{text.addr + text.size:08X}")

    # substract the size of each asm function
    for function_range in ranges:
        if function_range[0] >= init.addr and function_range[1] < init.addr + init.size:
            sections[".init"].decompiled -= (function_range[1] - function_range[0])
        elif function_range[0] >= text.addr and function_range[1] < text.addr + text.size:
            sections[".text"].decompiled-= (function_range[1] - function_range[0])

    total_decompiled_size = format_size + sum([section.decompiled for section in sections.values()])
    return ProgressGroup("main.dol", total_size, total_decompiled_size, sections)

def calculate_progress(matching, format, print_rels):
    if not matching:
        LOG.error("non-matching progress is not support yet.")
        sys.exit(1)

    dol_progress = calculate_dol_progress(matching, format)
    rels_progress = calculate_rel_progress(matching, format)

    rel_size = 0
    rel_decompiled = 0
    for rel in rels_progress:
        rel_size += rel.size
        rel_decompiled += rel.decompiled

    total_size = dol_progress.size + rel_size
    decompiled_size = dol_progress.decompiled + rel_decompiled


    if format == "FANCY":
        table = Table(title="main.dol")
        table.add_column("Section", justify="right",
                         style="cyan", no_wrap=True)
        table.add_column("Percentage", style="green")
        table.add_column("Decompiled (bytes)",
                         justify="right", style="bright_yellow")
        table.add_column("Total (bytes)", justify="right",
                         style="bright_magenta")

        for name, section in dol_progress.sections.items():
            table.add_row(name, f"{section.percentage:10.6f}%", f"{section.decompiled}", f"{section.size}")

        table.add_row("", "", "", "")
        table.add_row("total", f"{dol_progress.percentage:10.6f}%", f"{dol_progress.decompiled}", f"{dol_progress.size}")
        CONSOLE.print(table)

        table = Table(title="RELs")
        table.add_column("Section", justify="right",
                        style="cyan", no_wrap=True)
        table.add_column("Percentage", style="green")
        table.add_column("Decompiled (bytes)",
                        justify="right", style="bright_yellow")
        table.add_column("Total (bytes)", justify="right",
                        style="bright_magenta")


        if print_rels:
            for rel in rels_progress:
                table.add_row(rel.name, f"{rel.percentage:10.6f}%", f"{rel.decompiled}", f"{rel.size}")

            table.add_row("", "", "", "")
            table.add_row("total", f"{100 * (rel_decompiled / rel_size):10.6f}%", f"{rel_decompiled}", f"{rel_size}")
            CONSOLE.print(table)

        table = Table(title="Total")
        table.add_column("Section", justify="right",
                        style="cyan", no_wrap=True)
        table.add_column("Percentage", style="green")
        table.add_column("Decompiled (bytes)",
                        justify="right", style="bright_yellow")
        table.add_column("Total (bytes)", justify="right",
                        style="bright_magenta")

        table.add_row("main.dol", f"{dol_progress.percentage:10.6f}%", f"{dol_progress.decompiled}", f"{dol_progress.size}")
        table.add_row("RELs", f"{100 * (rel_decompiled / rel_size):10.6f}%", f"{rel_decompiled}", f"{rel_size}")

        table.add_row("", "", "", "")
        table.add_row("total", f"{100 * (decompiled_size / total_size):10.6f}%", f"{decompiled_size}", f"{total_size}")
        CONSOLE.print(table)
    elif format == "CSV":
        version = 1
        git_object = git.Repo().head.object
        timestamp = str(git_object.committed_date)
        git_hash = git_object.hexsha

        data = [
            str(version), timestamp, git_hash,
            str(dol_progress.decompiled), str(dol_progress.size),
            str(rel_decompiled), str(rel_size),
            str(decompiled_size), str(total_size),

        ]
        print(",".join(data))
    elif format == "JSON-SHIELD":
        # https://shields.io/endpoint
        print(json.dumps({
            "schemaVersion": 1,
            "label": "progress",
            "message": f"{100 * (decompiled_size / total_size):.3g}%",
            "color": 'yellow',
        }))
    else:
        print(dol_progress.percentage)
        print(100 * (rel_decompiled / rel_size))
        print(100 * (decompiled_size / total_size))
        LOG.error("unknown format: '{format}'")

def find_function_ranges(asm_files):
    function_ranges = []
    for asm in asm_files:
        with asm.open('r') as file:
            first = None
            last = None
            for line in file.readlines():
                line_start = line.find("/* ")
                line_end = line.find(" */", 3)

                if line_start < 0 or line_end < 0:
                    continue

                line_values = line[line_start+3:line_end].split(" ")
                assert len(line_values) == 6
                addr = int(line_values[0], 16)
                if not first:
                    first = addr
                last = addr + 4

            function_ranges.append((first, last))

    return function_ranges

@tp.command(name="pull-request")
@click.option('--debug/--no-debug')
@click.option('--thread-count', '-j', 'thread_count', help="This option is passed forward to all 'make' commands.", default=4)
@click.option('--game-path', default=DEFAULT_GAME_PATH, required=True)
@click.option('--build-path', default=DEFAULT_BUILD_PATH, required=True)
def pull_request(debug, thread_count, game_path, build_path):
    """ Verify that everything is OK before pull-request """

    if debug:
        LOG.setLevel(logging.DEBUG)

    text = Text("Pull-Request Checklist:")
    text.stylize("bold")
    CONSOLE.print(text)

    #
    text = Text("--- Removing Unused '.s' Files")
    text.stylize("bold magenta")
    CONSOLE.print(text)

    unused_files, error_files = find_unused_asm_files(False)

    for unused_file in unused_files:
        unused_file.unlink()
        CONSOLE.print(f"removed '{unused_file}'")

    text = Text("    OK")
    text.stylize("bold green")
    CONSOLE.print(text)

    #
    text = Text("--- Full Rebuild")
    text.stylize("bold magenta")
    CONSOLE.print(text)

    if rebuild(thread_count):
        text = Text("    OK")
        text.stylize("bold green")
        CONSOLE.print(text)
    else:
        text = Text("    ERR")
        text.stylize("bold red")
        CONSOLE.print(text)
        sys.exit(1)

    #
    text = Text("--- Check")
    text.stylize("bold magenta")
    CONSOLE.print(text)

    try:
        check_sha1(game_path, build_path)
        text = Text("    OK")
        text.stylize("bold green")
        CONSOLE.print(text)
    except CheckException as e:
        LOG.error(e)
        text = Text("    ERR")
        text.stylize("bold red")
        CONSOLE.print(text)
        sys.exit(1)

    #
    text = Text("--- Clang-Format")
    text.stylize("bold magenta")
    CONSOLE.print(text)

    if clang_format(thread_count):
        text = Text("    OK")
        text.stylize("bold green")
        CONSOLE.print(text)
    else:
        text = Text("    ERR")
        text.stylize("bold red")
        CONSOLE.print(text)
        sys.exit(1)

    #
    text = Text("--- Calculate Progress")
    text.stylize("bold magenta")
    CONSOLE.print(text)

    calculate_progress(True, "FANCY")


def find_all_asm_files():
    """ Recursivly find all files in the 'asm/' folder """

    files = set()
    errors = set()

    def recursive(parent):
        paths = sorted(
            parent.iterdir(),
            key=lambda path: (path.is_file(), path.name.lower()),
        )
        for path in paths:
            if path.name.startswith("."):
                continue
            if path.is_dir():
                recursive(path)
            else:
                if path.suffix == '.s':
                    files.add(path)
                else:
                    errors.add(path)

    root = Path("./asm/")
    assert root.exists()

    recursive(root)

    LOG.debug(
        f"find_all_asm_files: found {len(files)} .s files and {len(errors)} bad files")
    return files, errors


def find_unused_asm_files(non_matching):
    """ Search for unused asm function files. """

    asm_files, error_files = find_all_asm_files()
    included_asm_files = find_used_asm_files(non_matching)

    unused_asm_files = asm_files - included_asm_files
    LOG.debug(
        f"find_unused_asm_files: found {len(unused_asm_files)} unused .s files")

    return unused_asm_files, error_files


def find_all_header_files():
    """ Recursivly find all files in the 'include/' folder """

    files = set()

    def recursive(parent):
        paths = sorted(
            parent.iterdir(),
            key=lambda path: (path.is_file(), path.name.lower()),
        )
        for path in paths:
            # Remove hidden files
            if path.name.startswith("."):
                continue
            if path.is_dir():
                recursive(path)
            else:
                if path.suffix == '.h':
                    files.add(path)

    root = Path("./include/")
    assert root.exists()
    recursive(root)

    LOG.debug(f"find_all_header_files: found {len(files)} .h files")
    return files


def find_all_cpp_files():
    """ Recursivly find all files in the 'cpp/' folder """

    files = set()

    def recursive(parent):
        paths = sorted(
            parent.iterdir(),
            key=lambda path: (path.is_file(), path.name.lower()),
        )
        for path in paths:
            # Remove hidden files
            if path.name.startswith("."):
                continue
            if path.is_dir():
                recursive(path)
            else:
                if path.suffix == '.cpp':
                    files.add(path)

    src_root = Path("./src/")
    libs_root = Path("./libs/")
    rel_root = Path("./rel/")
    assert src_root.exists()
    assert libs_root.exists()
    assert rel_root.exists()

    recursive(src_root)
    recursive(libs_root)
    recursive(rel_root)

    LOG.debug(f"find_all_cpp_files: found {len(files)} .cpp files")
    return files


def find_includes(lines, non_matching, ext=".s"):
    includes = set()
    for line in lines:
        key = '#include "'
        start = line.find(key)
        if start < 0:
            continue

        start += len(key)
        end = line.find('"', start)
        if end < 0:
            continue

        include_path = line[start:end]
        if include_path.endswith(ext):
            includes.add(Path(include_path))

    return includes


def find_used_asm_files(non_matching, use_progress_bar=True):

    cpp_files = find_all_cpp_files()
    includes = set()

    if use_progress_bar:
        with Progress(console=CONSOLE, transient=True, refresh_per_second=1) as progress:
            task = progress.add_task(f"preprocessing...", total=len(cpp_files))

            for cpp_file in cpp_files:
                with cpp_file.open("r") as file:
                    includes.update(find_includes(file.readlines(), non_matching))

                progress.update(task, advance=1)
    else:
        for cpp_file in cpp_files:
            with cpp_file.open("r") as file:
                includes.update(find_includes(file.readlines(), non_matching))

    # TODO: NON_MATCHING
    LOG.debug(f"find_used_asm_files: found {len(includes)} included .s files")

    return includes


def clang_format_impl(file):
    cmd = ["clang-format", "-i", str(file)]
    cf = subprocess.run(args=cmd, stdout=subprocess.PIPE,
                        stderr=subprocess.PIPE)


def clang_format(thread_count):

    cpp_files = find_all_cpp_files()
    h_files = find_all_header_files()
    files = cpp_files | h_files

    with mp.Pool(processes=2 * thread_count) as pool:
        result = pool.map_async(clang_format_impl, files)
        jobs_left = len(files)
        with Progress(console=CONSOLE, transient=True, refresh_per_second=5) as progress:
            task = progress.add_task(f"clang-formating...", total=len(files))

            while result._number_left > 0:
                left = result._number_left * result._chunksize
                change = jobs_left - left
                jobs_left = left
                progress.update(
                    task, description=f"clang-formating... ({left} left)", advance=change)
                time.sleep(1/5)

            progress.update(task, advance=jobs_left)

    return True

def rebuild(thread_count):
    LOG.debug("make clean")
    with Progress(console=CONSOLE, transient=True, refresh_per_second=5) as progress:
        task = progress.add_task(f"make clean", total=1000, start=False)

        cmd = ["make", f"-j{thread_count}", "clean"]
        result = subprocess.run(args=cmd, stdout=subprocess.PIPE,
                       stderr=subprocess.PIPE)
        LOG.debug("make clean complete")
        if result.returncode != 0:
            return False

    LOG.debug("make main.dol")
    with Progress(console=CONSOLE, transient=True, refresh_per_second=5) as progress:
        task = progress.add_task(f"make", total=1000, start=False)

        cmd = ["make", f"-j{thread_count}", "build/dolzel2/main.dol"]
        result = subprocess.run(args=cmd, stdout=subprocess.PIPE,
                       stderr=subprocess.PIPE)
        LOG.debug("make main.dol complete")
        if result.returncode != 0:
            return False

    LOG.debug("make RELs")
    with Progress(console=CONSOLE, transient=True, refresh_per_second=5) as progress:
        task = progress.add_task(f"make rels", total=1000, start=False)

        cmd = ["make", f"-j{thread_count}", "rels"]
        result = subprocess.run(args=cmd, stdout=subprocess.PIPE,
                       stderr=subprocess.PIPE)
        LOG.debug("make RELs complete")
        if result.returncode != 0:
            return False

    return True


def sha1_from_data(data):
    sha1 = hashlib.sha1()
    sha1.update(data)

    return sha1.hexdigest().upper()

def get_files_with_ext(path, ext):
    return [x for x in path.glob(f"**/*{ext}") if x.is_file()]

class CheckException(Exception):
    ...

def check_sha1(game_path, build_path):
        
    dol_path = game_path.joinpath("main.dol")
    if not dol_path.exists():
        raise CheckException(f"File not found: '{dol_path}'")

    rel_path = game_path.joinpath("rel/Final/Release")
    if not rel_path.exists():
        raise CheckException(f"Path not found: '{rel_path}'")

    rels_path = get_files_with_ext(rel_path, ".rel")
    rels_archive_path = game_path.joinpath("RELS.arc")
    if not rels_archive_path.exists():
        raise CheckException(f"File not found: '{rels_archive_path}'")

    LOG.debug(f"DOL Path: '{dol_path}'")
    LOG.debug(f"RELs Path: '{rel_path}' (found {len(rels_path)} RELs)")
    LOG.debug(f"RELs Archive Path: '{rels_archive_path}'")

    EXPECTED = {}
    with dol_path.open('rb') as file:
        data = file.read()
        EXPECTED[0] = (str(dol_path), sha1_from_data(data),sha1_from_data(data),)

    for rel_filepath in rels_path:
        with rel_filepath.open('rb') as file:
            data = bytearray(file.read())
            yaz0_data = data
            if struct.unpack('>I', data[:4])[0] == 0x59617A30:
                data = yaz0.decompress(io.BytesIO(data))

            rel = librel.read(data)
            EXPECTED[rel.index] = (str(rel_filepath), sha1_from_data(yaz0_data),sha1_from_data(data),)

    with rels_archive_path.open('rb') as file:
        rarc = libarc.read(file.read())
        for depth, file in rarc.files_and_folders:
            if not isinstance(file, libarc.File):
                continue

            if file.name.endswith(".rel"):
                data = file.data
                yaz0_data = data
                if struct.unpack('>I', data[:4])[0] == 0x59617A30:
                    data = yaz0.decompress(io.BytesIO(data))

                xxx_path = Path('build').joinpath(file.name)
                with xxx_path.open('wb') as write_file:
                    write_file.write(data)

                rel = librel.read(data)
                EXPECTED[rel.index] = (file.name, sha1_from_data(yaz0_data),sha1_from_data(data),)

    if not build_path.exists():
        raise CheckException(f"Path not found: '{build_path}'")

    build_dol_path = build_path.joinpath("main.dol")
    if not build_dol_path.exists():
        raise CheckException(f"File not found: '{build_dol_path}'")

    build_rels_path = get_files_with_ext(build_path, ".rel")

    CURRENT = {}
    with build_dol_path.open('rb') as file:
        data = file.read()
        CURRENT[0] = (str(build_dol_path), sha1_from_data(data),sha1_from_data(data),)

    for rel_filepath in build_rels_path:
        with rel_filepath.open('rb') as file:
            data = bytearray(file.read())
            yaz0_data = data
            if struct.unpack('>I', data[:4])[0] == 0x59617A30:
                data = yaz0.decompress(io.BytesIO(data))
            
            rel = librel.read(data)
            CURRENT[rel.index] = (str(rel_filepath), sha1_from_data(yaz0_data),sha1_from_data(data),)

    expected_keys = set(EXPECTED.keys())
    current_keys = set(CURRENT.keys())
    match = expected_keys - current_keys
    if len(match) > 0:
        raise CheckException(f"Missing RELs (expected: {len(expected_keys)}, found: {len(current_keys)})")

    errors = 0
    for key in expected_keys:
        if key in current_keys:
            expected = EXPECTED[key]
            current = CURRENT[key]
            if current[2] != expected[2]:
                errors += 1
                LOG.error(f"{current[2]} {expected[2]} {current[0]} ({expected[0]})")

    if errors > 0:
        raise CheckException("NO MATCH!")

    return True


if __name__ == "__main__":
    tp()
