#
# Generated By: dol2asm
#

M471_TARGET := $(BUILD_DIR)/rel/d/a/obj/d_a_obj_hakai_ftr.plf
M471_LDSCRIPT := $(BUILD_DIR)/rel/d/a/obj/d_a_obj_hakai_ftr.lcf
M471_MAP := $(BUILD_DIR)/rel/d/a/obj/d_a_obj_hakai_ftr.map

M471_CPP_FILES := \
	rel/executor.cpp \
	rel/d/a/obj/d_a_obj_hakai_ftr/d_a_obj_hakai_ftr.cpp \

M471_O_FILES := \
	$(BUILD_DIR)/rel/executor.o \
	$(BUILD_DIR)/rel/d/a/obj/d_a_obj_hakai_ftr/d_a_obj_hakai_ftr.o \

M471_LIBS := \

M471_CFLAGS := \
	-sdata 0 \
	-sdata2 0 \

M471_LDFLAGS := \
	-nodefaults \
	-fp hard \
	-proc gekko \
	-linkmode moreram \
	-sdata 0 \
	-sdata2 0 \
	-m _prolog \
	-lcf $(M471_LDSCRIPT) \
	-unused -map $(M471_MAP) \
	-w off \

$(M471_TARGET): $(M471_O_FILES) $(M471_LIBS)
	@echo [471] creating $(M471_TARGET)
	@echo $(M471_LIBS) $(M471_O_FILES) > build/M471_ofiles
	@python3 tools/lcf.py rel 471 --output $(M471_LDSCRIPT)
	@$(LD) -opt_partial -strip_partial $(M471_LDFLAGS) -o $(M471_TARGET) @build/M471_ofiles

$(BUILD_DIR)/rel/d/a/obj/d_a_obj_hakai_ftr/%.o: rel/d/a/obj/d_a_obj_hakai_ftr/%.cpp
	@echo [471] building $@
	@mkdir -p $(@D)
	@iconv -f UTF-8 -t CP932 < $< > $@.iconv.cpp
	@$(CC) $(CFLAGS) $(M471_CFLAGS) -c -o $@ $@.iconv.cpp


