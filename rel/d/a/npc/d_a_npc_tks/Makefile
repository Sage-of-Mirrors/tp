#
# Generated By: dol2asm
#

M373_TARGET := $(BUILD_DIR)/rel/d/a/npc/d_a_npc_tks.plf
M373_LDSCRIPT := $(BUILD_DIR)/rel/d/a/npc/d_a_npc_tks.lcf
M373_MAP := $(BUILD_DIR)/rel/d/a/npc/d_a_npc_tks.map

M373_CPP_FILES := \
	rel/executor.cpp \
	rel/global_destructor_chain.cpp \
	rel/d/a/npc/d_a_npc_tks/d_a_npc_tks.cpp \

M373_O_FILES := \
	$(BUILD_DIR)/rel/executor.o \
	$(BUILD_DIR)/rel/global_destructor_chain.o \
	$(BUILD_DIR)/rel/d/a/npc/d_a_npc_tks/d_a_npc_tks.o \

M373_LIBS := \

M373_CFLAGS := \
	-sdata 0 \
	-sdata2 0 \

M373_LDFLAGS := \
	-nodefaults \
	-fp hard \
	-proc gekko \
	-linkmode moreram \
	-sdata 0 \
	-sdata2 0 \
	-m _prolog \
	-lcf $(M373_LDSCRIPT) \
	-unused -map $(M373_MAP) \
	-w off \

$(M373_TARGET): $(M373_O_FILES) $(M373_LIBS)
	@echo [373] creating $(M373_TARGET)
	@echo $(M373_LIBS) $(M373_O_FILES) > build/M373_ofiles
	@python3 tools/lcf.py rel 373 --output $(M373_LDSCRIPT)
	@$(LD) -opt_partial -strip_partial $(M373_LDFLAGS) -o $(M373_TARGET) @build/M373_ofiles

$(BUILD_DIR)/rel/d/a/npc/d_a_npc_tks/%.o: rel/d/a/npc/d_a_npc_tks/%.cpp
	@echo [373] building $@
	@mkdir -p $(@D)
	@iconv -f UTF-8 -t CP932 < $< > $@.iconv.cpp
	@$(CC) $(CFLAGS) $(M373_CFLAGS) -c -o $@ $@.iconv.cpp


