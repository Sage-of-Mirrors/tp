#
# Generated By: dol2asm
#

M324_TARGET := $(BUILD_DIR)/rel/d/a/npc/d_a_npc_kasi_kyu.plf
M324_LDSCRIPT := $(BUILD_DIR)/rel/d/a/npc/d_a_npc_kasi_kyu.lcf
M324_MAP := $(BUILD_DIR)/rel/d/a/npc/d_a_npc_kasi_kyu.map

M324_CPP_FILES := \
	rel/executor.cpp \
	rel/global_destructor_chain.cpp \
	rel/d/a/npc/d_a_npc_kasi_kyu/d_a_npc_kasi_kyu.cpp \

M324_O_FILES := \
	$(BUILD_DIR)/rel/executor.o \
	$(BUILD_DIR)/rel/global_destructor_chain.o \
	$(BUILD_DIR)/rel/d/a/npc/d_a_npc_kasi_kyu/d_a_npc_kasi_kyu.o \

M324_LIBS := \

M324_CFLAGS := \
	-sdata 0 \
	-sdata2 0 \

M324_LDFLAGS := \
	-nodefaults \
	-fp hard \
	-proc gekko \
	-linkmode moreram \
	-sdata 0 \
	-sdata2 0 \
	-m _prolog \
	-lcf $(M324_LDSCRIPT) \
	-unused -map $(M324_MAP) \
	-w off \

$(M324_TARGET): $(M324_O_FILES) $(M324_LIBS)
	@echo [324] creating $(M324_TARGET)
	@echo $(M324_LIBS) $(M324_O_FILES) > build/M324_ofiles
	@python3 tools/lcf.py rel 324 --output $(M324_LDSCRIPT)
	@$(LD) -opt_partial -strip_partial $(M324_LDFLAGS) -o $(M324_TARGET) @build/M324_ofiles

$(BUILD_DIR)/rel/d/a/npc/d_a_npc_kasi_kyu/%.o: rel/d/a/npc/d_a_npc_kasi_kyu/%.cpp
	@echo [324] building $@
	@mkdir -p $(@D)
	@iconv -f UTF-8 -t CP932 < $< > $@.iconv.cpp
	@$(CC) $(CFLAGS) $(M324_CFLAGS) -c -o $@ $@.iconv.cpp


