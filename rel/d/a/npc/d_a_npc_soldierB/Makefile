#
# Generated By: dol2asm
#

M366_TARGET := $(BUILD_DIR)/rel/d/a/npc/d_a_npc_soldierB.plf
M366_LDSCRIPT := $(BUILD_DIR)/rel/d/a/npc/d_a_npc_soldierB.lcf
M366_MAP := $(BUILD_DIR)/rel/d/a/npc/d_a_npc_soldierB.map

M366_CPP_FILES := \
	rel/executor.cpp \
	rel/global_destructor_chain.cpp \
	rel/d/a/npc/d_a_npc_soldierB/d_a_npc_soldierB.cpp \

M366_O_FILES := \
	$(BUILD_DIR)/rel/executor.o \
	$(BUILD_DIR)/rel/global_destructor_chain.o \
	$(BUILD_DIR)/rel/d/a/npc/d_a_npc_soldierB/d_a_npc_soldierB.o \

M366_LIBS := \

M366_CFLAGS := \
	-sdata 0 \
	-sdata2 0 \

M366_LDFLAGS := \
	-nodefaults \
	-fp hard \
	-proc gekko \
	-linkmode moreram \
	-sdata 0 \
	-sdata2 0 \
	-m _prolog \
	-lcf $(M366_LDSCRIPT) \
	-unused -map $(M366_MAP) \
	-w off \

$(M366_TARGET): $(M366_O_FILES) $(M366_LIBS)
	@echo [366] creating $(M366_TARGET)
	@echo $(M366_LIBS) $(M366_O_FILES) > build/M366_ofiles
	@python3 tools/lcf.py rel 366 --output $(M366_LDSCRIPT)
	@$(LD) -opt_partial -strip_partial $(M366_LDFLAGS) -o $(M366_TARGET) @build/M366_ofiles

$(BUILD_DIR)/rel/d/a/npc/d_a_npc_soldierB/%.o: rel/d/a/npc/d_a_npc_soldierB/%.cpp
	@echo [366] building $@
	@mkdir -p $(@D)
	@iconv -f UTF-8 -t CP932 < $< > $@.iconv.cpp
	@$(CC) $(CFLAGS) $(M366_CFLAGS) -c -o $@ $@.iconv.cpp


