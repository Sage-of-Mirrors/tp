#
# Generated By: dol2asm
#

M670_TARGET := $(BUILD_DIR)/rel/d/a/obj/d_a_obj_treesh.plf
M670_LDSCRIPT := $(BUILD_DIR)/rel/d/a/obj/d_a_obj_treesh.lcf
M670_MAP := $(BUILD_DIR)/rel/d/a/obj/d_a_obj_treesh.map

M670_CPP_FILES := \
	rel/executor.cpp \
	rel/global_destructor_chain.cpp \
	rel/d/a/obj/d_a_obj_treesh/d_a_obj_treesh.cpp \

M670_O_FILES := \
	$(BUILD_DIR)/rel/executor.o \
	$(BUILD_DIR)/rel/global_destructor_chain.o \
	$(BUILD_DIR)/rel/d/a/obj/d_a_obj_treesh/d_a_obj_treesh.o \

M670_LIBS := \

M670_CFLAGS := \
	-sdata 0 \
	-sdata2 0 \

M670_LDFLAGS := \
	-nodefaults \
	-fp hard \
	-proc gekko \
	-linkmode moreram \
	-sdata 0 \
	-sdata2 0 \
	-m _prolog \
	-lcf $(M670_LDSCRIPT) \
	-unused -map $(M670_MAP) \
	-w off \

$(M670_TARGET): $(M670_O_FILES) $(M670_LIBS)
	@echo [670] creating $(M670_TARGET)
	@echo $(M670_LIBS) $(M670_O_FILES) > build/M670_ofiles
	@python3 tools/lcf.py rel 670 --output $(M670_LDSCRIPT)
	@$(LD) -opt_partial -strip_partial $(M670_LDFLAGS) -o $(M670_TARGET) @build/M670_ofiles

$(BUILD_DIR)/rel/d/a/obj/d_a_obj_treesh/%.o: rel/d/a/obj/d_a_obj_treesh/%.cpp
	@echo [670] building $@
	@mkdir -p $(@D)
	@iconv -f UTF-8 -t CP932 < $< > $@.iconv.cpp
	@$(CC) $(CFLAGS) $(M670_CFLAGS) -c -o $@ $@.iconv.cpp


