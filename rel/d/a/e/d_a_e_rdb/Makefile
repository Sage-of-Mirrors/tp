#
# Generated By: dol2asm
#

M224_TARGET := $(BUILD_DIR)/rel/d/a/e/d_a_e_rdb.plf
M224_LDSCRIPT := $(BUILD_DIR)/rel/d/a/e/d_a_e_rdb.lcf
M224_MAP := $(BUILD_DIR)/rel/d/a/e/d_a_e_rdb.map

M224_CPP_FILES := \
	rel/executor.cpp \
	rel/global_destructor_chain.cpp \
	rel/d/a/e/d_a_e_rdb/d_a_e_rdb.cpp \

M224_O_FILES := \
	$(BUILD_DIR)/rel/executor.o \
	$(BUILD_DIR)/rel/global_destructor_chain.o \
	$(BUILD_DIR)/rel/d/a/e/d_a_e_rdb/d_a_e_rdb.o \

M224_LIBS := \

M224_CFLAGS := \
	-sdata 0 \
	-sdata2 0 \

M224_LDFLAGS := \
	-nodefaults \
	-fp hard \
	-proc gekko \
	-linkmode moreram \
	-sdata 0 \
	-sdata2 0 \
	-m _prolog \
	-lcf $(M224_LDSCRIPT) \
	-unused -map $(M224_MAP) \
	-w off \

$(M224_TARGET): $(M224_O_FILES) $(M224_LIBS)
	@echo [224] creating $(M224_TARGET)
	@echo $(M224_LIBS) $(M224_O_FILES) > build/M224_ofiles
	@python3 tools/lcf.py rel 224 --output $(M224_LDSCRIPT)
	@$(LD) -opt_partial -strip_partial $(M224_LDFLAGS) -o $(M224_TARGET) @build/M224_ofiles

$(BUILD_DIR)/rel/d/a/e/d_a_e_rdb/%.o: rel/d/a/e/d_a_e_rdb/%.cpp
	@echo [224] building $@
	@mkdir -p $(@D)
	@iconv -f UTF-8 -t CP932 < $< > $@.iconv.cpp
	@$(CC) $(CFLAGS) $(M224_CFLAGS) -c -o $@ $@.iconv.cpp


