#
# Generated By: dol2asm
#

M38_TARGET := $(BUILD_DIR)/rel/d/a/tag/d_a_tag_msg.plf
M38_LDSCRIPT := $(BUILD_DIR)/rel/d/a/tag/d_a_tag_msg.lcf
M38_MAP := $(BUILD_DIR)/rel/d/a/tag/d_a_tag_msg.map

M38_CPP_FILES := \
	rel/executor.cpp \
	rel/d/a/tag/d_a_tag_msg/d_a_tag_msg.cpp \

M38_O_FILES := \
	$(BUILD_DIR)/rel/executor.o \
	$(BUILD_DIR)/rel/d/a/tag/d_a_tag_msg/d_a_tag_msg.o \

M38_LIBS := \

M38_CFLAGS := \
	-sdata 0 \
	-sdata2 0 \

M38_LDFLAGS := \
	-nodefaults \
	-fp hard \
	-proc gekko \
	-linkmode moreram \
	-sdata 0 \
	-sdata2 0 \
	-m _prolog \
	-lcf $(M38_LDSCRIPT) \
	-unused -map $(M38_MAP) \
	-w off \

$(M38_TARGET): $(M38_O_FILES) $(M38_LIBS)
	@echo [ 38] creating $(M38_TARGET)
	@echo $(M38_LIBS) $(M38_O_FILES) > build/M38_ofiles
	@python3 tools/lcf.py rel 38 --output $(M38_LDSCRIPT)
	@$(LD) -opt_partial -strip_partial $(M38_LDFLAGS) -o $(M38_TARGET) @build/M38_ofiles

$(BUILD_DIR)/rel/d/a/tag/d_a_tag_msg/%.o: rel/d/a/tag/d_a_tag_msg/%.cpp
	@echo [ 38] building $@
	@mkdir -p $(@D)
	@iconv -f UTF-8 -t CP932 < $< > $@.iconv.cpp
	@$(CC) $(CFLAGS) $(M38_CFLAGS) -c -o $@ $@.iconv.cpp


