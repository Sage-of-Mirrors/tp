#
# Generated By: dol2asm
#

M685_TARGET := $(BUILD_DIR)/rel/d/a/obj/d_a_obj_web1.plf
M685_LDSCRIPT := $(BUILD_DIR)/rel/d/a/obj/d_a_obj_web1.lcf
M685_MAP := $(BUILD_DIR)/rel/d/a/obj/d_a_obj_web1.map

M685_CPP_FILES := \
	rel/executor.cpp \
	rel/global_destructor_chain.cpp \
	rel/d/a/obj/d_a_obj_web1/d_a_obj_web1.cpp \

M685_O_FILES := \
	$(BUILD_DIR)/rel/executor.o \
	$(BUILD_DIR)/rel/global_destructor_chain.o \
	$(BUILD_DIR)/rel/d/a/obj/d_a_obj_web1/d_a_obj_web1.o \

M685_LIBS := \

M685_CFLAGS := \
	-sdata 0 \
	-sdata2 0 \

M685_LDFLAGS := \
	-nodefaults \
	-fp hard \
	-proc gekko \
	-linkmode moreram \
	-sdata 0 \
	-sdata2 0 \
	-m _prolog \
	-lcf $(M685_LDSCRIPT) \
	-unused -map $(M685_MAP) \
	-w off \

$(M685_TARGET): $(M685_O_FILES) $(M685_LIBS)
	@echo [685] creating $(M685_TARGET)
	@echo $(M685_LIBS) $(M685_O_FILES) > build/M685_ofiles
	@python3 tools/lcf.py rel 685 --output $(M685_LDSCRIPT)
	@$(LD) -opt_partial -strip_partial $(M685_LDFLAGS) -o $(M685_TARGET) @build/M685_ofiles

$(BUILD_DIR)/rel/d/a/obj/d_a_obj_web1/%.o: rel/d/a/obj/d_a_obj_web1/%.cpp
	@echo [685] building $@
	@mkdir -p $(@D)
	@iconv -f UTF-8 -t CP932 < $< > $@.iconv.cpp
	@$(CC) $(CFLAGS) $(M685_CFLAGS) -c -o $@ $@.iconv.cpp


