#
# Generated By: dol2asm
#

M270_TARGET := $(BUILD_DIR)/rel/d/a/kytag/d_a_kytag07.plf
M270_LDSCRIPT := $(BUILD_DIR)/rel/d/a/kytag/d_a_kytag07.lcf
M270_MAP := $(BUILD_DIR)/rel/d/a/kytag/d_a_kytag07.map

M270_CPP_FILES := \
	rel/executor.cpp \
	rel/d/a/kytag/d_a_kytag07/d_a_kytag07.cpp \

M270_O_FILES := \
	$(BUILD_DIR)/rel/executor.o \
	$(BUILD_DIR)/rel/d/a/kytag/d_a_kytag07/d_a_kytag07.o \

M270_LIBS := \

M270_CFLAGS := \
	-sdata 0 \
	-sdata2 0 \

M270_LDFLAGS := \
	-nodefaults \
	-fp hard \
	-proc gekko \
	-linkmode moreram \
	-sdata 0 \
	-sdata2 0 \
	-m _prolog \
	-lcf $(M270_LDSCRIPT) \
	-unused -map $(M270_MAP) \
	-w off \

$(M270_TARGET): $(M270_O_FILES) $(M270_LIBS)
	@echo [270] creating $(M270_TARGET)
	@echo $(M270_LIBS) $(M270_O_FILES) > build/M270_ofiles
	@python3 tools/lcf.py rel 270 --output $(M270_LDSCRIPT)
	@$(LD) -opt_partial -strip_partial $(M270_LDFLAGS) -o $(M270_TARGET) @build/M270_ofiles

$(BUILD_DIR)/rel/d/a/kytag/d_a_kytag07/%.o: rel/d/a/kytag/d_a_kytag07/%.cpp
	@echo [270] building $@
	@mkdir -p $(@D)
	@iconv -f UTF-8 -t CP932 < $< > $@.iconv.cpp
	@$(CC) $(CFLAGS) $(M270_CFLAGS) -c -o $@ $@.iconv.cpp


