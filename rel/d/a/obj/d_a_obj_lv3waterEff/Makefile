#
# Generated By: dol2asm
#

M522_TARGET := $(BUILD_DIR)/rel/d/a/obj/d_a_obj_lv3waterEff.plf
M522_LDSCRIPT := $(BUILD_DIR)/rel/d/a/obj/d_a_obj_lv3waterEff.lcf
M522_MAP := $(BUILD_DIR)/rel/d/a/obj/d_a_obj_lv3waterEff.map

M522_CPP_FILES := \
	rel/executor.cpp \
	rel/d/a/obj/d_a_obj_lv3waterEff/d_a_obj_lv3waterEff.cpp \

M522_O_FILES := \
	$(BUILD_DIR)/rel/executor.o \
	$(BUILD_DIR)/rel/d/a/obj/d_a_obj_lv3waterEff/d_a_obj_lv3waterEff.o \

M522_LIBS := \

M522_CFLAGS := \
	-sdata 0 \
	-sdata2 0 \

M522_LDFLAGS := \
	-nodefaults \
	-fp hard \
	-proc gekko \
	-linkmode moreram \
	-sdata 0 \
	-sdata2 0 \
	-m _prolog \
	-lcf $(M522_LDSCRIPT) \
	-unused -map $(M522_MAP) \
	-w off \

$(M522_TARGET): $(M522_O_FILES) $(M522_LIBS)
	@echo [522] creating $(M522_TARGET)
	@echo $(M522_LIBS) $(M522_O_FILES) > build/M522_ofiles
	@python3 tools/lcf.py rel 522 --output $(M522_LDSCRIPT)
	@$(LD) -opt_partial -strip_partial $(M522_LDFLAGS) -o $(M522_TARGET) @build/M522_ofiles

$(BUILD_DIR)/rel/d/a/obj/d_a_obj_lv3waterEff/%.o: rel/d/a/obj/d_a_obj_lv3waterEff/%.cpp
	@echo [522] building $@
	@mkdir -p $(@D)
	@iconv -f UTF-8 -t CP932 < $< > $@.iconv.cpp
	@$(CC) $(CFLAGS) $(M522_CFLAGS) -c -o $@ $@.iconv.cpp


