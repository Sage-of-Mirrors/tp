#
# Generated By: dol2asm
#

M609_TARGET := $(BUILD_DIR)/rel/d/a/obj/d_a_obj_rw.plf
M609_LDSCRIPT := $(BUILD_DIR)/rel/d/a/obj/d_a_obj_rw.lcf
M609_MAP := $(BUILD_DIR)/rel/d/a/obj/d_a_obj_rw.map

M609_CPP_FILES := \
	rel/executor.cpp \
	rel/global_destructor_chain.cpp \
	rel/d/a/obj/d_a_obj_rw/d_a_obj_rw.cpp \

M609_O_FILES := \
	$(BUILD_DIR)/rel/executor.o \
	$(BUILD_DIR)/rel/global_destructor_chain.o \
	$(BUILD_DIR)/rel/d/a/obj/d_a_obj_rw/d_a_obj_rw.o \

M609_LIBS := \

M609_CFLAGS := \
	-sdata 0 \
	-sdata2 0 \

M609_LDFLAGS := \
	-nodefaults \
	-fp hard \
	-proc gekko \
	-linkmode moreram \
	-sdata 0 \
	-sdata2 0 \
	-m _prolog \
	-lcf $(M609_LDSCRIPT) \
	-unused -map $(M609_MAP) \
	-w off \

$(M609_TARGET): $(M609_O_FILES) $(M609_LIBS)
	@echo [609] creating $(M609_TARGET)
	@echo $(M609_LIBS) $(M609_O_FILES) > build/M609_ofiles
	@python3 tools/lcf.py rel 609 --output $(M609_LDSCRIPT)
	@$(LD) -opt_partial -strip_partial $(M609_LDFLAGS) -o $(M609_TARGET) @build/M609_ofiles

$(BUILD_DIR)/rel/d/a/obj/d_a_obj_rw/%.o: rel/d/a/obj/d_a_obj_rw/%.cpp
	@echo [609] building $@
	@mkdir -p $(@D)
	@iconv -f UTF-8 -t CP932 < $< > $@.iconv.cpp
	@$(CC) $(CFLAGS) $(M609_CFLAGS) -c -o $@ $@.iconv.cpp


