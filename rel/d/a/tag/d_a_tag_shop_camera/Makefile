#
# Generated By: dol2asm
#

M741_TARGET := $(BUILD_DIR)/rel/d/a/tag/d_a_tag_shop_camera.plf
M741_LDSCRIPT := $(BUILD_DIR)/rel/d/a/tag/d_a_tag_shop_camera.lcf
M741_MAP := $(BUILD_DIR)/rel/d/a/tag/d_a_tag_shop_camera.map

M741_CPP_FILES := \
	rel/executor.cpp \
	rel/d/a/tag/d_a_tag_shop_camera/d_a_tag_shop_camera.cpp \

M741_O_FILES := \
	$(BUILD_DIR)/rel/executor.o \
	$(BUILD_DIR)/rel/d/a/tag/d_a_tag_shop_camera/d_a_tag_shop_camera.o \

M741_LIBS := \

M741_CFLAGS := \
	-sdata 0 \
	-sdata2 0 \

M741_LDFLAGS := \
	-nodefaults \
	-fp hard \
	-proc gekko \
	-linkmode moreram \
	-sdata 0 \
	-sdata2 0 \
	-m _prolog \
	-lcf $(M741_LDSCRIPT) \
	-unused -map $(M741_MAP) \
	-w off \

$(M741_TARGET): $(M741_O_FILES) $(M741_LIBS)
	@echo [741] creating $(M741_TARGET)
	@echo $(M741_LIBS) $(M741_O_FILES) > build/M741_ofiles
	@python3 tools/lcf.py rel 741 --output $(M741_LDSCRIPT)
	@$(LD) -opt_partial -strip_partial $(M741_LDFLAGS) -o $(M741_TARGET) @build/M741_ofiles

$(BUILD_DIR)/rel/d/a/tag/d_a_tag_shop_camera/%.o: rel/d/a/tag/d_a_tag_shop_camera/%.cpp
	@echo [741] building $@
	@mkdir -p $(@D)
	@iconv -f UTF-8 -t CP932 < $< > $@.iconv.cpp
	@$(CC) $(CFLAGS) $(M741_CFLAGS) -c -o $@ $@.iconv.cpp


