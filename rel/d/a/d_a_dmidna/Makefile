#
# Generated By: dol2asm
#

M5_TARGET := $(BUILD_DIR)/rel/d/a/d_a_dmidna.plf
M5_LDSCRIPT := $(BUILD_DIR)/rel/d/a/d_a_dmidna.lcf
M5_MAP := $(BUILD_DIR)/rel/d/a/d_a_dmidna.map

M5_CPP_FILES := \
	rel/executor.cpp \
	rel/d/a/d_a_dmidna/d_a_dmidna.cpp \

M5_O_FILES := \
	$(BUILD_DIR)/rel/executor.o \
	$(BUILD_DIR)/rel/d/a/d_a_dmidna/d_a_dmidna.o \

M5_LIBS := \

M5_CFLAGS := \
	-sdata 0 \
	-sdata2 0 \

M5_LDFLAGS := \
	-nodefaults \
	-fp hard \
	-proc gekko \
	-linkmode moreram \
	-sdata 0 \
	-sdata2 0 \
	-m _prolog \
	-lcf $(M5_LDSCRIPT) \
	-unused -map $(M5_MAP) \
	-w off \

$(M5_TARGET): $(M5_O_FILES) $(M5_LIBS)
	@echo [  5] creating $(M5_TARGET)
	@echo $(M5_LIBS) $(M5_O_FILES) > build/M5_ofiles
	@python3 tools/lcf.py rel 5 --output $(M5_LDSCRIPT)
	@$(LD) -opt_partial -strip_partial $(M5_LDFLAGS) -o $(M5_TARGET) @build/M5_ofiles

$(BUILD_DIR)/rel/d/a/d_a_dmidna/%.o: rel/d/a/d_a_dmidna/%.cpp
	@echo [  5] building $@
	@mkdir -p $(@D)
	@iconv -f UTF-8 -t CP932 < $< > $@.iconv.cpp
	@$(CC) $(CFLAGS) $(M5_CFLAGS) -c -o $@ $@.iconv.cpp


