#
# Generated By: dol2asm
#

LIBSSTANDARD_A_CPP_FILES := \
	libs/SSystem/SStandard/s_basic.cpp \

LIBSSTANDARD_A_O_FILES := \
	$(BUILD_DIR)/libs/SSystem/SStandard/s_basic.o \

LIBSSTANDARD_A_CFLAGS := \

LIBSSTANDARD_A_LDFLAGS := \
	-nodefaults \
	-fp hard \
	-proc gekko \
	-linkmode moreram \

$(BUILD_DIR)/libSStandard.a: $(LIBSSTANDARD_A_O_FILES)
	@echo linking... $(BUILD_DIR)/libSStandard.a
	@echo $(LIBSSTANDARD_A_O_FILES) > build/LIBSSTANDARD_A_ofiles
	@$(LD) -xm l $(LIBSSTANDARD_A_LDFLAGS) -o $(BUILD_DIR)/libSStandard.a @build/LIBSSTANDARD_A_ofiles

$(BUILD_DIR)/libs/SSystem/SStandard/%.o: libs/SSystem/SStandard/%.cpp
	@mkdir -p $(@D)
	@echo building... $<
	@iconv -f UTF-8 -t CP932 < $< > $@.iconv.cpp
	@$(CC) $(CFLAGS) $(LIBSSTANDARD_A_CFLAGS) -c -o $@ $@.iconv.cpp

