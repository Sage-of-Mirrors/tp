#
# Generated By: dol2asm
#

M114_TARGET := $(BUILD_DIR)/rel/d/a/obj/d_a_obj_swpropeller.plf
M114_LDSCRIPT := $(BUILD_DIR)/rel/d/a/obj/d_a_obj_swpropeller.lcf
M114_MAP := $(BUILD_DIR)/rel/d/a/obj/d_a_obj_swpropeller.map

M114_CPP_FILES := \
	rel/executor.cpp \
	rel/d/a/obj/d_a_obj_swpropeller/d_a_obj_swpropeller.cpp \

M114_O_FILES := \
	$(BUILD_DIR)/rel/executor.o \
	$(BUILD_DIR)/rel/d/a/obj/d_a_obj_swpropeller/d_a_obj_swpropeller.o \

M114_LIBS := \

M114_CFLAGS := \
	-sdata 0 \
	-sdata2 0 \

M114_LDFLAGS := \
	-nodefaults \
	-fp hard \
	-proc gekko \
	-linkmode moreram \
	-sdata 0 \
	-sdata2 0 \
	-m _prolog \
	-lcf $(M114_LDSCRIPT) \
	-unused -map $(M114_MAP) \
	-w off \

$(M114_TARGET): $(M114_O_FILES) $(M114_LIBS)
	@echo [114] creating $(M114_TARGET)
	@echo $(M114_LIBS) $(M114_O_FILES) > build/M114_ofiles
	@python3 tools/lcf.py rel 114 --output $(M114_LDSCRIPT)
	@$(LD) -opt_partial -strip_partial $(M114_LDFLAGS) -o $(M114_TARGET) @build/M114_ofiles

$(BUILD_DIR)/rel/d/a/obj/d_a_obj_swpropeller/%.o: rel/d/a/obj/d_a_obj_swpropeller/%.cpp
	@echo [114] building $@
	@mkdir -p $(@D)
	@iconv -f UTF-8 -t CP932 < $< > $@.iconv.cpp
	@$(CC) $(CFLAGS) $(M114_CFLAGS) -c -o $@ $@.iconv.cpp


