#
# Generated By: dol2asm
#

M692_TARGET := $(BUILD_DIR)/rel/d/a/obj/d_a_obj_wsword.plf
M692_LDSCRIPT := $(BUILD_DIR)/rel/d/a/obj/d_a_obj_wsword.lcf
M692_MAP := $(BUILD_DIR)/rel/d/a/obj/d_a_obj_wsword.map

M692_CPP_FILES := \
	rel/executor.cpp \
	rel/d/a/obj/d_a_obj_wsword/d_a_obj_wsword.cpp \

M692_O_FILES := \
	$(BUILD_DIR)/rel/executor.o \
	$(BUILD_DIR)/rel/d/a/obj/d_a_obj_wsword/d_a_obj_wsword.o \

M692_LIBS := \

M692_CFLAGS := \
	-sdata 0 \
	-sdata2 0 \

M692_LDFLAGS := \
	-nodefaults \
	-fp hard \
	-proc gekko \
	-linkmode moreram \
	-sdata 0 \
	-sdata2 0 \
	-m _prolog \
	-lcf $(M692_LDSCRIPT) \
	-unused -map $(M692_MAP) \
	-w off \

$(M692_TARGET): $(M692_O_FILES) $(M692_LIBS)
	@echo [692] creating $(M692_TARGET)
	@echo $(M692_LIBS) $(M692_O_FILES) > build/M692_ofiles
	@python3 tools/lcf.py rel 692 --output $(M692_LDSCRIPT)
	@$(LD) -opt_partial -strip_partial $(M692_LDFLAGS) -o $(M692_TARGET) @build/M692_ofiles

$(BUILD_DIR)/rel/d/a/obj/d_a_obj_wsword/%.o: rel/d/a/obj/d_a_obj_wsword/%.cpp
	@echo [692] building $@
	@mkdir -p $(@D)
	@iconv -f UTF-8 -t CP932 < $< > $@.iconv.cpp
	@$(CC) $(CFLAGS) $(M692_CFLAGS) -c -o $@ $@.iconv.cpp


