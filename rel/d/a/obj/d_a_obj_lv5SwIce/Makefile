#
# Generated By: dol2asm
#

M541_TARGET := $(BUILD_DIR)/rel/d/a/obj/d_a_obj_lv5SwIce.plf
M541_LDSCRIPT := $(BUILD_DIR)/rel/d/a/obj/d_a_obj_lv5SwIce.lcf
M541_MAP := $(BUILD_DIR)/rel/d/a/obj/d_a_obj_lv5SwIce.map

M541_CPP_FILES := \
	rel/executor.cpp \
	rel/global_destructor_chain.cpp \
	rel/d/a/obj/d_a_obj_lv5SwIce/d_a_obj_lv5SwIce.cpp \

M541_O_FILES := \
	$(BUILD_DIR)/rel/executor.o \
	$(BUILD_DIR)/rel/global_destructor_chain.o \
	$(BUILD_DIR)/rel/d/a/obj/d_a_obj_lv5SwIce/d_a_obj_lv5SwIce.o \

M541_LIBS := \

M541_CFLAGS := \
	-sdata 0 \
	-sdata2 0 \

M541_LDFLAGS := \
	-nodefaults \
	-fp hard \
	-proc gekko \
	-linkmode moreram \
	-sdata 0 \
	-sdata2 0 \
	-m _prolog \
	-lcf $(M541_LDSCRIPT) \
	-unused -map $(M541_MAP) \
	-w off \

$(M541_TARGET): $(M541_O_FILES) $(M541_LIBS)
	@echo [541] creating $(M541_TARGET)
	@echo $(M541_LIBS) $(M541_O_FILES) > build/M541_ofiles
	@python3 tools/lcf.py rel 541 --output $(M541_LDSCRIPT)
	@$(LD) -opt_partial -strip_partial $(M541_LDFLAGS) -o $(M541_TARGET) @build/M541_ofiles

$(BUILD_DIR)/rel/d/a/obj/d_a_obj_lv5SwIce/%.o: rel/d/a/obj/d_a_obj_lv5SwIce/%.cpp
	@echo [541] building $@
	@mkdir -p $(@D)
	@iconv -f UTF-8 -t CP932 < $< > $@.iconv.cpp
	@$(CC) $(CFLAGS) $(M541_CFLAGS) -c -o $@ $@.iconv.cpp


