#
# Generated By: dol2asm
#

M483_TARGET := $(BUILD_DIR)/rel/d/a/obj/d_a_obj_ihasi.plf
M483_LDSCRIPT := $(BUILD_DIR)/rel/d/a/obj/d_a_obj_ihasi.lcf
M483_MAP := $(BUILD_DIR)/rel/d/a/obj/d_a_obj_ihasi.map

M483_CPP_FILES := \
	rel/executor.cpp \
	rel/d/a/obj/d_a_obj_ihasi/d_a_obj_ihasi.cpp \

M483_O_FILES := \
	$(BUILD_DIR)/rel/executor.o \
	$(BUILD_DIR)/rel/d/a/obj/d_a_obj_ihasi/d_a_obj_ihasi.o \

M483_LIBS := \

M483_CFLAGS := \
	-sdata 0 \
	-sdata2 0 \

M483_LDFLAGS := \
	-nodefaults \
	-fp hard \
	-proc gekko \
	-linkmode moreram \
	-sdata 0 \
	-sdata2 0 \
	-m _prolog \
	-lcf $(M483_LDSCRIPT) \
	-unused -map $(M483_MAP) \
	-w off \

$(M483_TARGET): $(M483_O_FILES) $(M483_LIBS)
	@echo [483] creating $(M483_TARGET)
	@echo $(M483_LIBS) $(M483_O_FILES) > build/M483_ofiles
	@python3 tools/lcf.py rel 483 --output $(M483_LDSCRIPT)
	@$(LD) -opt_partial -strip_partial $(M483_LDFLAGS) -o $(M483_TARGET) @build/M483_ofiles

$(BUILD_DIR)/rel/d/a/obj/d_a_obj_ihasi/%.o: rel/d/a/obj/d_a_obj_ihasi/%.cpp
	@echo [483] building $@
	@mkdir -p $(@D)
	@iconv -f UTF-8 -t CP932 < $< > $@.iconv.cpp
	@$(CC) $(CFLAGS) $(M483_CFLAGS) -c -o $@ $@.iconv.cpp


