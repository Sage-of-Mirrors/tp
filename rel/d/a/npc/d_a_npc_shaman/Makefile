#
# Generated By: dol2asm
#

M360_TARGET := $(BUILD_DIR)/rel/d/a/npc/d_a_npc_shaman.plf
M360_LDSCRIPT := $(BUILD_DIR)/rel/d/a/npc/d_a_npc_shaman.lcf
M360_MAP := $(BUILD_DIR)/rel/d/a/npc/d_a_npc_shaman.map

M360_CPP_FILES := \
	rel/executor.cpp \
	rel/global_destructor_chain.cpp \
	rel/d/a/npc/d_a_npc_shaman/d_a_npc_shaman.cpp \

M360_O_FILES := \
	$(BUILD_DIR)/rel/executor.o \
	$(BUILD_DIR)/rel/global_destructor_chain.o \
	$(BUILD_DIR)/rel/d/a/npc/d_a_npc_shaman/d_a_npc_shaman.o \

M360_LIBS := \

M360_CFLAGS := \
	-sdata 0 \
	-sdata2 0 \

M360_LDFLAGS := \
	-nodefaults \
	-fp hard \
	-proc gekko \
	-linkmode moreram \
	-sdata 0 \
	-sdata2 0 \
	-m _prolog \
	-lcf $(M360_LDSCRIPT) \
	-unused -map $(M360_MAP) \
	-w off \

$(M360_TARGET): $(M360_O_FILES) $(M360_LIBS)
	@echo [360] creating $(M360_TARGET)
	@echo $(M360_LIBS) $(M360_O_FILES) > build/M360_ofiles
	@python3 tools/lcf.py rel 360 --output $(M360_LDSCRIPT)
	@$(LD) -opt_partial -strip_partial $(M360_LDFLAGS) -o $(M360_TARGET) @build/M360_ofiles

$(BUILD_DIR)/rel/d/a/npc/d_a_npc_shaman/%.o: rel/d/a/npc/d_a_npc_shaman/%.cpp
	@echo [360] building $@
	@mkdir -p $(@D)
	@iconv -f UTF-8 -t CP932 < $< > $@.iconv.cpp
	@$(CC) $(CFLAGS) $(M360_CFLAGS) -c -o $@ $@.iconv.cpp


