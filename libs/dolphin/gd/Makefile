#
# Generated By: dol2asm
#

LIBGD_A_CPP_FILES := \
	libs/dolphin/gd/GDBase.cpp \
	libs/dolphin/gd/GDGeometry.cpp \

LIBGD_A_O_FILES := \
	$(BUILD_DIR)/libs/dolphin/gd/GDBase.o \
	$(BUILD_DIR)/libs/dolphin/gd/GDGeometry.o \

LIBGD_A_CFLAGS := \

LIBGD_A_LDFLAGS := \
	-nodefaults \
	-fp hard \
	-proc gekko \
	-linkmode moreram \

$(BUILD_DIR)/libgd.a: $(LIBGD_A_O_FILES)
	@echo linking... $(BUILD_DIR)/libgd.a
	@echo $(LIBGD_A_O_FILES) > build/LIBGD_A_ofiles
	@$(LD) -xm l $(LIBGD_A_LDFLAGS) -o $(BUILD_DIR)/libgd.a @build/LIBGD_A_ofiles

$(BUILD_DIR)/libs/dolphin/gd/%.o: libs/dolphin/gd/%.cpp
	@mkdir -p $(@D)
	@echo building... $<
	@iconv -f UTF-8 -t CP932 < $< > $@.iconv.cpp
	@$(CC) $(CFLAGS) $(LIBGD_A_CFLAGS) -c -o $@ $@.iconv.cpp

