#
# Generated By: dol2asm
#

M220_TARGET := $(BUILD_DIR)/rel/d/a/e/d_a_e_pm.plf
M220_LDSCRIPT := $(BUILD_DIR)/rel/d/a/e/d_a_e_pm.lcf
M220_MAP := $(BUILD_DIR)/rel/d/a/e/d_a_e_pm.map

M220_CPP_FILES := \
	rel/executor.cpp \
	rel/global_destructor_chain.cpp \
	rel/d/a/e/d_a_e_pm/d_a_e_pm.cpp \

M220_O_FILES := \
	$(BUILD_DIR)/rel/executor.o \
	$(BUILD_DIR)/rel/global_destructor_chain.o \
	$(BUILD_DIR)/rel/d/a/e/d_a_e_pm/d_a_e_pm.o \

M220_LIBS := \

M220_CFLAGS := \
	-sdata 0 \
	-sdata2 0 \

M220_LDFLAGS := \
	-nodefaults \
	-fp hard \
	-proc gekko \
	-linkmode moreram \
	-sdata 0 \
	-sdata2 0 \
	-m _prolog \
	-lcf $(M220_LDSCRIPT) \
	-unused -map $(M220_MAP) \
	-w off \

$(M220_TARGET): $(M220_O_FILES) $(M220_LIBS)
	@echo [220] creating $(M220_TARGET)
	@echo $(M220_LIBS) $(M220_O_FILES) > build/M220_ofiles
	@python3 tools/lcf.py rel 220 --output $(M220_LDSCRIPT)
	@$(LD) -opt_partial -strip_partial $(M220_LDFLAGS) -o $(M220_TARGET) @build/M220_ofiles

$(BUILD_DIR)/rel/d/a/e/d_a_e_pm/%.o: rel/d/a/e/d_a_e_pm/%.cpp
	@echo [220] building $@
	@mkdir -p $(@D)
	@iconv -f UTF-8 -t CP932 < $< > $@.iconv.cpp
	@$(CC) $(CFLAGS) $(M220_CFLAGS) -c -o $@ $@.iconv.cpp


