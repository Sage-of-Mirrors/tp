#
# Generated By: dol2asm
#

M102_TARGET := $(BUILD_DIR)/rel/d/a/obj/d_a_obj_ktonfire.plf
M102_LDSCRIPT := $(BUILD_DIR)/rel/d/a/obj/d_a_obj_ktonfire.lcf
M102_MAP := $(BUILD_DIR)/rel/d/a/obj/d_a_obj_ktonfire.map

M102_CPP_FILES := \
	rel/executor.cpp \
	rel/global_destructor_chain.cpp \
	rel/d/a/obj/d_a_obj_ktonfire/d_a_obj_ktOnFire.cpp \

M102_O_FILES := \
	$(BUILD_DIR)/rel/executor.o \
	$(BUILD_DIR)/rel/global_destructor_chain.o \
	$(BUILD_DIR)/rel/d/a/obj/d_a_obj_ktonfire/d_a_obj_ktOnFire.o \

M102_LIBS := \

M102_CFLAGS := \
	-sdata 0 \
	-sdata2 0 \

M102_LDFLAGS := \
	-nodefaults \
	-fp hard \
	-proc gekko \
	-linkmode moreram \
	-sdata 0 \
	-sdata2 0 \
	-m _prolog \
	-lcf $(M102_LDSCRIPT) \
	-unused -map $(M102_MAP) \
	-w off \

$(M102_TARGET): $(M102_O_FILES) $(M102_LIBS)
	@echo [102] creating $(M102_TARGET)
	@echo $(M102_LIBS) $(M102_O_FILES) > build/M102_ofiles
	@python3 tools/lcf.py rel 102 --output $(M102_LDSCRIPT)
	@$(LD) -opt_partial -strip_partial $(M102_LDFLAGS) -o $(M102_TARGET) @build/M102_ofiles

$(BUILD_DIR)/rel/d/a/obj/d_a_obj_ktonfire/%.o: rel/d/a/obj/d_a_obj_ktonfire/%.cpp
	@echo [102] building $@
	@mkdir -p $(@D)
	@iconv -f UTF-8 -t CP932 < $< > $@.iconv.cpp
	@$(CC) $(CFLAGS) $(M102_CFLAGS) -c -o $@ $@.iconv.cpp


