#
# Generated By: dol2asm
#

M104_TARGET := $(BUILD_DIR)/rel/d/a/obj/d_a_obj_lv2candle.plf
M104_LDSCRIPT := $(BUILD_DIR)/rel/d/a/obj/d_a_obj_lv2candle.lcf
M104_MAP := $(BUILD_DIR)/rel/d/a/obj/d_a_obj_lv2candle.map

M104_CPP_FILES := \
	rel/executor.cpp \
	rel/global_destructor_chain.cpp \
	rel/d/a/obj/d_a_obj_lv2candle/d_a_obj_lv2Candle.cpp \

M104_O_FILES := \
	$(BUILD_DIR)/rel/executor.o \
	$(BUILD_DIR)/rel/global_destructor_chain.o \
	$(BUILD_DIR)/rel/d/a/obj/d_a_obj_lv2candle/d_a_obj_lv2Candle.o \

M104_LIBS := \

M104_CFLAGS := \
	-sdata 0 \
	-sdata2 0 \

M104_LDFLAGS := \
	-nodefaults \
	-fp hard \
	-proc gekko \
	-linkmode moreram \
	-sdata 0 \
	-sdata2 0 \
	-m _prolog \
	-lcf $(M104_LDSCRIPT) \
	-unused -map $(M104_MAP) \
	-w off \

$(M104_TARGET): $(M104_O_FILES) $(M104_LIBS)
	@echo [104] creating $(M104_TARGET)
	@echo $(M104_LIBS) $(M104_O_FILES) > build/M104_ofiles
	@python3 tools/lcf.py rel 104 --output $(M104_LDSCRIPT)
	@$(LD) -opt_partial -strip_partial $(M104_LDFLAGS) -o $(M104_TARGET) @build/M104_ofiles

$(BUILD_DIR)/rel/d/a/obj/d_a_obj_lv2candle/%.o: rel/d/a/obj/d_a_obj_lv2candle/%.cpp
	@echo [104] building $@
	@mkdir -p $(@D)
	@iconv -f UTF-8 -t CP932 < $< > $@.iconv.cpp
	@$(CC) $(CFLAGS) $(M104_CFLAGS) -c -o $@ $@.iconv.cpp


