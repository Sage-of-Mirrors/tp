#
# Generated By: dol2asm
#

M276_TARGET := $(BUILD_DIR)/rel/d/a/kytag/d_a_kytag16.plf
M276_LDSCRIPT := $(BUILD_DIR)/rel/d/a/kytag/d_a_kytag16.lcf
M276_MAP := $(BUILD_DIR)/rel/d/a/kytag/d_a_kytag16.map

M276_CPP_FILES := \
	rel/executor.cpp \
	rel/d/a/kytag/d_a_kytag16/d_a_kytag16.cpp \

M276_O_FILES := \
	$(BUILD_DIR)/rel/executor.o \
	$(BUILD_DIR)/rel/d/a/kytag/d_a_kytag16/d_a_kytag16.o \

M276_LIBS := \

M276_CFLAGS := \
	-sdata 0 \
	-sdata2 0 \

M276_LDFLAGS := \
	-nodefaults \
	-fp hard \
	-proc gekko \
	-linkmode moreram \
	-sdata 0 \
	-sdata2 0 \
	-m _prolog \
	-lcf $(M276_LDSCRIPT) \
	-unused -map $(M276_MAP) \
	-w off \

$(M276_TARGET): $(M276_O_FILES) $(M276_LIBS)
	@echo [276] creating $(M276_TARGET)
	@echo $(M276_LIBS) $(M276_O_FILES) > build/M276_ofiles
	@python3 tools/lcf.py rel 276 --output $(M276_LDSCRIPT)
	@$(LD) -opt_partial -strip_partial $(M276_LDFLAGS) -o $(M276_TARGET) @build/M276_ofiles

$(BUILD_DIR)/rel/d/a/kytag/d_a_kytag16/%.o: rel/d/a/kytag/d_a_kytag16/%.cpp
	@echo [276] building $@
	@mkdir -p $(@D)
	@iconv -f UTF-8 -t CP932 < $< > $@.iconv.cpp
	@$(CC) $(CFLAGS) $(M276_CFLAGS) -c -o $@ $@.iconv.cpp


