#
# Generated By: dol2asm
#

M695_TARGET := $(BUILD_DIR)/rel/d/a/obj/d_a_obj_zcloth.plf
M695_LDSCRIPT := $(BUILD_DIR)/rel/d/a/obj/d_a_obj_zcloth.lcf
M695_MAP := $(BUILD_DIR)/rel/d/a/obj/d_a_obj_zcloth.map

M695_CPP_FILES := \
	rel/executor.cpp \
	rel/d/a/obj/d_a_obj_zcloth/d_a_obj_zcloth.cpp \

M695_O_FILES := \
	$(BUILD_DIR)/rel/executor.o \
	$(BUILD_DIR)/rel/d/a/obj/d_a_obj_zcloth/d_a_obj_zcloth.o \

M695_LIBS := \

M695_CFLAGS := \
	-sdata 0 \
	-sdata2 0 \

M695_LDFLAGS := \
	-nodefaults \
	-fp hard \
	-proc gekko \
	-linkmode moreram \
	-sdata 0 \
	-sdata2 0 \
	-m _prolog \
	-lcf $(M695_LDSCRIPT) \
	-unused -map $(M695_MAP) \
	-w off \

$(M695_TARGET): $(M695_O_FILES) $(M695_LIBS)
	@echo [695] creating $(M695_TARGET)
	@echo $(M695_LIBS) $(M695_O_FILES) > build/M695_ofiles
	@python3 tools/lcf.py rel 695 --output $(M695_LDSCRIPT)
	@$(LD) -opt_partial -strip_partial $(M695_LDFLAGS) -o $(M695_TARGET) @build/M695_ofiles

$(BUILD_DIR)/rel/d/a/obj/d_a_obj_zcloth/%.o: rel/d/a/obj/d_a_obj_zcloth/%.cpp
	@echo [695] building $@
	@mkdir -p $(@D)
	@iconv -f UTF-8 -t CP932 < $< > $@.iconv.cpp
	@$(CC) $(CFLAGS) $(M695_CFLAGS) -c -o $@ $@.iconv.cpp


