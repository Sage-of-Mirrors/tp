#
# Generated By: dol2asm
#

LIBSCOMPONENT_A_CPP_FILES := \
	libs/SSystem/SComponent/c_malloc.cpp \
	libs/SSystem/SComponent/c_API.cpp \
	libs/SSystem/SComponent/c_API_controller_pad.cpp \
	libs/SSystem/SComponent/c_API_graphic.cpp \
	libs/SSystem/SComponent/c_cc_d.cpp \
	libs/SSystem/SComponent/c_cc_s.cpp \
	libs/SSystem/SComponent/c_counter.cpp \
	libs/SSystem/SComponent/c_list.cpp \
	libs/SSystem/SComponent/c_list_iter.cpp \
	libs/SSystem/SComponent/c_node.cpp \
	libs/SSystem/SComponent/c_node_iter.cpp \
	libs/SSystem/SComponent/c_tree.cpp \
	libs/SSystem/SComponent/c_tree_iter.cpp \
	libs/SSystem/SComponent/c_phase.cpp \
	libs/SSystem/SComponent/c_request.cpp \
	libs/SSystem/SComponent/c_tag.cpp \
	libs/SSystem/SComponent/c_tag_iter.cpp \
	libs/SSystem/SComponent/c_xyz.cpp \
	libs/SSystem/SComponent/c_sxyz.cpp \
	libs/SSystem/SComponent/c_math.cpp \
	libs/SSystem/SComponent/c_bg_s_chk.cpp \
	libs/SSystem/SComponent/c_bg_s_gnd_chk.cpp \
	libs/SSystem/SComponent/c_bg_s_lin_chk.cpp \
	libs/SSystem/SComponent/c_bg_s_shdw_draw.cpp \
	libs/SSystem/SComponent/c_bg_s_poly_info.cpp \
	libs/SSystem/SComponent/c_bg_w.cpp \
	libs/SSystem/SComponent/c_m2d.cpp \
	libs/SSystem/SComponent/c_m3d.cpp \
	libs/SSystem/SComponent/c_m3d_g_aab.cpp \
	libs/SSystem/SComponent/c_m3d_g_cir.cpp \
	libs/SSystem/SComponent/c_m3d_g_cps.cpp \
	libs/SSystem/SComponent/c_m3d_g_cyl.cpp \
	libs/SSystem/SComponent/c_m3d_g_lin.cpp \
	libs/SSystem/SComponent/c_m3d_g_pla.cpp \
	libs/SSystem/SComponent/c_m3d_g_sph.cpp \
	libs/SSystem/SComponent/c_m3d_g_tri.cpp \
	libs/SSystem/SComponent/c_lib.cpp \
	libs/SSystem/SComponent/c_angle.cpp \

LIBSCOMPONENT_A_O_FILES := \
	$(BUILD_DIR)/libs/SSystem/SComponent/c_malloc.o \
	$(BUILD_DIR)/libs/SSystem/SComponent/c_API.o \
	$(BUILD_DIR)/libs/SSystem/SComponent/c_API_controller_pad.o \
	$(BUILD_DIR)/libs/SSystem/SComponent/c_API_graphic.o \
	$(BUILD_DIR)/libs/SSystem/SComponent/c_cc_d.o \
	$(BUILD_DIR)/libs/SSystem/SComponent/c_cc_s.o \
	$(BUILD_DIR)/libs/SSystem/SComponent/c_counter.o \
	$(BUILD_DIR)/libs/SSystem/SComponent/c_list.o \
	$(BUILD_DIR)/libs/SSystem/SComponent/c_list_iter.o \
	$(BUILD_DIR)/libs/SSystem/SComponent/c_node.o \
	$(BUILD_DIR)/libs/SSystem/SComponent/c_node_iter.o \
	$(BUILD_DIR)/libs/SSystem/SComponent/c_tree.o \
	$(BUILD_DIR)/libs/SSystem/SComponent/c_tree_iter.o \
	$(BUILD_DIR)/libs/SSystem/SComponent/c_phase.o \
	$(BUILD_DIR)/libs/SSystem/SComponent/c_request.o \
	$(BUILD_DIR)/libs/SSystem/SComponent/c_tag.o \
	$(BUILD_DIR)/libs/SSystem/SComponent/c_tag_iter.o \
	$(BUILD_DIR)/libs/SSystem/SComponent/c_xyz.o \
	$(BUILD_DIR)/libs/SSystem/SComponent/c_sxyz.o \
	$(BUILD_DIR)/libs/SSystem/SComponent/c_math.o \
	$(BUILD_DIR)/libs/SSystem/SComponent/c_bg_s_chk.o \
	$(BUILD_DIR)/libs/SSystem/SComponent/c_bg_s_gnd_chk.o \
	$(BUILD_DIR)/libs/SSystem/SComponent/c_bg_s_lin_chk.o \
	$(BUILD_DIR)/libs/SSystem/SComponent/c_bg_s_shdw_draw.o \
	$(BUILD_DIR)/libs/SSystem/SComponent/c_bg_s_poly_info.o \
	$(BUILD_DIR)/libs/SSystem/SComponent/c_bg_w.o \
	$(BUILD_DIR)/libs/SSystem/SComponent/c_m2d.o \
	$(BUILD_DIR)/libs/SSystem/SComponent/c_m3d.o \
	$(BUILD_DIR)/libs/SSystem/SComponent/c_m3d_g_aab.o \
	$(BUILD_DIR)/libs/SSystem/SComponent/c_m3d_g_cir.o \
	$(BUILD_DIR)/libs/SSystem/SComponent/c_m3d_g_cps.o \
	$(BUILD_DIR)/libs/SSystem/SComponent/c_m3d_g_cyl.o \
	$(BUILD_DIR)/libs/SSystem/SComponent/c_m3d_g_lin.o \
	$(BUILD_DIR)/libs/SSystem/SComponent/c_m3d_g_pla.o \
	$(BUILD_DIR)/libs/SSystem/SComponent/c_m3d_g_sph.o \
	$(BUILD_DIR)/libs/SSystem/SComponent/c_m3d_g_tri.o \
	$(BUILD_DIR)/libs/SSystem/SComponent/c_lib.o \
	$(BUILD_DIR)/libs/SSystem/SComponent/c_angle.o \

LIBSCOMPONENT_A_CFLAGS := \

LIBSCOMPONENT_A_LDFLAGS := \
	-nodefaults \
	-fp hard \
	-proc gekko \
	-linkmode moreram \

$(BUILD_DIR)/libSComponent.a: $(LIBSCOMPONENT_A_O_FILES)
	@echo linking... $(BUILD_DIR)/libSComponent.a
	@echo $(LIBSCOMPONENT_A_O_FILES) > build/LIBSCOMPONENT_A_ofiles
	@$(LD) -xm l $(LIBSCOMPONENT_A_LDFLAGS) -o $(BUILD_DIR)/libSComponent.a @build/LIBSCOMPONENT_A_ofiles

$(BUILD_DIR)/libs/SSystem/SComponent/%.o: libs/SSystem/SComponent/%.cpp
	@mkdir -p $(@D)
	@echo building... $<
	@iconv -f UTF-8 -t CP932 < $< > $@.iconv.cpp
	@$(CC) $(CFLAGS) $(LIBSCOMPONENT_A_CFLAGS) -c -o $@ $@.iconv.cpp

