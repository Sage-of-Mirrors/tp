#
# Generated By: dol2asm
#

M132_TARGET := $(BUILD_DIR)/rel/d/a/tag/d_a_tag_spring.plf
M132_LDSCRIPT := $(BUILD_DIR)/rel/d/a/tag/d_a_tag_spring.lcf
M132_MAP := $(BUILD_DIR)/rel/d/a/tag/d_a_tag_spring.map

M132_CPP_FILES := \
	rel/executor.cpp \
	rel/d/a/tag/d_a_tag_spring/d_a_tag_spring.cpp \

M132_O_FILES := \
	$(BUILD_DIR)/rel/executor.o \
	$(BUILD_DIR)/rel/d/a/tag/d_a_tag_spring/d_a_tag_spring.o \

M132_LIBS := \

M132_CFLAGS := \
	-sdata 0 \
	-sdata2 0 \

M132_LDFLAGS := \
	-nodefaults \
	-fp hard \
	-proc gekko \
	-linkmode moreram \
	-sdata 0 \
	-sdata2 0 \
	-m _prolog \
	-lcf $(M132_LDSCRIPT) \
	-unused -map $(M132_MAP) \
	-w off \

$(M132_TARGET): $(M132_O_FILES) $(M132_LIBS)
	@echo [132] creating $(M132_TARGET)
	@echo $(M132_LIBS) $(M132_O_FILES) > build/M132_ofiles
	@python3 tools/lcf.py rel 132 --output $(M132_LDSCRIPT)
	@$(LD) -opt_partial -strip_partial $(M132_LDFLAGS) -o $(M132_TARGET) @build/M132_ofiles

$(BUILD_DIR)/rel/d/a/tag/d_a_tag_spring/%.o: rel/d/a/tag/d_a_tag_spring/%.cpp
	@echo [132] building $@
	@mkdir -p $(@D)
	@iconv -f UTF-8 -t CP932 < $< > $@.iconv.cpp
	@$(CC) $(CFLAGS) $(M132_CFLAGS) -c -o $@ $@.iconv.cpp


