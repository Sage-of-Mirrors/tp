//
// Generated By: dol2asm
// Translation Unit: d_a_obj_wflag
//

#include "rel/d/a/obj/d_a_obj_wflag/d_a_obj_wflag.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct wf_tail_s {
    /* 80D37720 */ ~wf_tail_s();
    /* 80D377F0 */ wf_tail_s();
};

struct request_of_phase_process_class {};

struct obj_wflag_class {};

struct mDoMtx_stack_c {
    /* 8000CD9C */ void transM(f32, f32, f32);

    static u8 now[48];
};

struct J3DMaterialTable {};

struct J3DAnmTexPattern {};

struct mDoExt_btpAnm {
    /* 8000D54C */ void init(J3DMaterialTable*, J3DAnmTexPattern*, int, int, f32, s16, s16);
    /* 8000D5E8 */ void entry(J3DMaterialTable*, s16);
};

struct J3DAnmTextureSRTKey {};

struct mDoExt_btkAnm {
    /* 8000D63C */ void init(J3DMaterialTable*, J3DAnmTextureSRTKey*, int, int, f32, s16, s16);
    /* 8000D6D8 */ void entry(J3DMaterialTable*, f32);
};

struct mDoExt_baseAnm {
    /* 8000D428 */ void play();
};

struct mDoExt_McaMorfCallBack2_c {};

struct mDoExt_McaMorfCallBack1_c {};

struct Vec {};

struct J3DAnmTransform {};

struct J3DModelData {};

struct mDoExt_McaMorf {
    /* 8000FC4C */ mDoExt_McaMorf(J3DModelData*, mDoExt_McaMorfCallBack1_c*,
                                  mDoExt_McaMorfCallBack2_c*, J3DAnmTransform*, int, f32, int, int,
                                  int, void*, u32, u32);
    /* 800105C8 */ void play(Vec*, u32, s8);
    /* 80010680 */ void entryDL();
    /* 800106AC */ void modelCalc();
};

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
};

struct dKy_tevstr_c {};

struct cXyz {
    /* 80266AE4 */ void operator+(Vec const&) const;
    /* 80D36F54 */ ~cXyz();
    /* 80D37880 */ cXyz();
};

struct dScnKy_env_light_c {
    /* 801A37C4 */ void settingTevStruct(int, cXyz*, dKy_tevstr_c*);
    /* 801A4DA0 */ void setLightTevColorType_MAJI(J3DModelData*, dKy_tevstr_c*);
};

struct dRes_info_c {};

struct dRes_control_c {
    /* 8003C2EC */ void getRes(char const*, s32, dRes_info_c*, int);
};

struct csXyz {
    /* 80D377B4 */ ~csXyz();
    /* 80D3787C */ csXyz();
};

struct JMath {
    static u8 sincosTable_[65536];
};

struct J3DModel {};

struct J3DFrameCtrl {
    /* 803283FC */ void init(s16);
    /* 80D375EC */ ~J3DFrameCtrl();
};

//
// Forward References:
//

extern "C" static void daObj_Wflag_Draw__FP15obj_wflag_class();
extern "C" static void tail_control__FP10fopAc_ac_cP9wf_tail_s();
extern "C" void __dt__4cXyzFv();
extern "C" static void tail_mtxset__FP9wf_tail_s();
extern "C" static void daObj_Wflag_Execute__FP15obj_wflag_class();
extern "C" static bool daObj_Wflag_IsDelete__FP15obj_wflag_class();
extern "C" static void daObj_Wflag_Delete__FP15obj_wflag_class();
extern "C" static void useHeapInit__FP10fopAc_ac_c();
extern "C" void __dt__12J3DFrameCtrlFv();
extern "C" static void daObj_Wflag_Create__FP10fopAc_ac_c();
extern "C" void __dt__9wf_tail_sFv();
extern "C" void __dt__5csXyzFv();
extern "C" void __ct__9wf_tail_sFv();
extern "C" void __ct__5csXyzFv();
extern "C" void __ct__4cXyzFv();
extern "C" extern char const* const d_a_obj_wflag__stringBase0;

//
// External References:
//

extern "C" void mDoMtx_XrotS__FPA4_fs();
extern "C" void mDoMtx_XrotM__FPA4_fs();
extern "C" void mDoMtx_YrotS__FPA4_fs();
extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void mDoMtx_ZrotM__FPA4_fs();
extern "C" void transM__14mDoMtx_stack_cFfff();
extern "C" void play__14mDoExt_baseAnmFv();
extern "C" void init__13mDoExt_btpAnmFP16J3DMaterialTableP16J3DAnmTexPatterniifss();
extern "C" void entry__13mDoExt_btpAnmFP16J3DMaterialTables();
extern "C" void init__13mDoExt_btkAnmFP16J3DMaterialTableP19J3DAnmTextureSRTKeyiifss();
extern "C" void entry__13mDoExt_btkAnmFP16J3DMaterialTablef();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void
__ct__14mDoExt_McaMorfFP12J3DModelDataP25mDoExt_McaMorfCallBack1_cP25mDoExt_McaMorfCallBack2_cP15J3DAnmTransformifiiiPvUlUl();
extern "C" void play__14mDoExt_McaMorfFP3VecUlSc();
extern "C" void entryDL__14mDoExt_McaMorfFv();
extern "C" void modelCalc__14mDoExt_McaMorfFv();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAcIt_Judge__FPFPvPv_PvPv();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fpcSch_JudgeByID__FPvPv();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void __pl__4cXyzCFRC3Vec();
extern "C" void cM_atan2s__Fff();
extern "C" void cM_rndF__Ff();
extern "C" void MtxTrans__FfffUc();
extern "C" void MtxPosition__FP4cXyzP4cXyz();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void init__12J3DFrameCtrlFs();
extern "C" void PSMTXCopy();
extern "C" void PSMTXTrans();
extern "C" void __destroy_arr();
extern "C" void __construct_array();
extern "C" void _savegpr_19();
extern "C" void _savegpr_24();
extern "C" void _savegpr_26();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _restgpr_19();
extern "C" void _restgpr_24();
extern "C" void _restgpr_26();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" u8 sincosTable___5JMath[65536];
extern "C" extern void* calc_mtx[1 + 1 /* padding */];

//
// Declarations:
//

/* 80D36B98-80D36CA0 000078 0108+00 1/0 0/0 0/0 .text daObj_Wflag_Draw__FP15obj_wflag_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObj_Wflag_Draw(obj_wflag_class* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_wflag/d_a_obj_wflag/daObj_Wflag_Draw__FP15obj_wflag_class.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D3788C-80D37890 000000 0004+00 2/2 0/0 0/0 .rodata          @3883 */
SECTION_RODATA static u8 const lit_3883[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x80D3788C, &lit_3883);

/* 80D37890-80D37894 000004 0004+00 0/1 0/0 0/0 .rodata          @3884 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3884 = 20.0f;
COMPILER_STRIP_GATE(0x80D37890, &lit_3884);
#pragma pop

/* 80D37894-80D37898 000008 0004+00 0/1 0/0 0/0 .rodata          @3885 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3885 = 10.0f;
COMPILER_STRIP_GATE(0x80D37894, &lit_3885);
#pragma pop

/* 80D37898-80D3789C 00000C 0004+00 0/1 0/0 0/0 .rodata          @3886 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3886 = 2.0f;
COMPILER_STRIP_GATE(0x80D37898, &lit_3886);
#pragma pop

/* 80D3789C-80D378A0 000010 0004+00 0/1 0/0 0/0 .rodata          @3887 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3887 = 3.0f / 10.0f;
COMPILER_STRIP_GATE(0x80D3789C, &lit_3887);
#pragma pop

/* 80D378A0-80D378A4 000014 0004+00 0/1 0/0 0/0 .rodata          @3888 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3888 = -20.0f;
COMPILER_STRIP_GATE(0x80D378A0, &lit_3888);
#pragma pop

/* 80D378CC-80D37918 000000 004C+00 1/1 0/0 0/0 .data            pd$3822 */
SECTION_DATA static u8 pd[76] = {
    0x3F, 0x80, 0x00, 0x00, 0x3F, 0x66, 0x66, 0x66, 0x3F, 0x4C, 0xCC, 0xCD, 0x3F, 0x33, 0x33, 0x33,
    0x3F, 0x19, 0x99, 0x9A, 0x3F, 0x00, 0x00, 0x00, 0x3E, 0xCC, 0xCC, 0xCD, 0x3E, 0x99, 0x99, 0x9A,
    0x3E, 0x4C, 0xCC, 0xCD, 0x3E, 0x4C, 0xCC, 0xCD, 0x3E, 0x4C, 0xCC, 0xCD, 0x3E, 0x4C, 0xCC, 0xCD,
    0x3E, 0x4C, 0xCC, 0xCD, 0x3E, 0x4C, 0xCC, 0xCD, 0x3E, 0x4C, 0xCC, 0xCD, 0x3E, 0x4C, 0xCC, 0xCD,
    0x3E, 0x4C, 0xCC, 0xCD, 0x3E, 0x4C, 0xCC, 0xCD, 0x3E, 0x4C, 0xCC, 0xCD,
};

/* 80D36CA0-80D36F54 000180 02B4+00 1/1 0/0 0/0 .text tail_control__FP10fopAc_ac_cP9wf_tail_s */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void tail_control(fopAc_ac_c* param_0, wf_tail_s* param_1) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_wflag/d_a_obj_wflag/tail_control__FP10fopAc_ac_cP9wf_tail_s.s"
}
#pragma pop

/* 80D36F54-80D36F90 000434 003C+00 2/2 0/0 0/0 .text            __dt__4cXyzFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cXyz::~cXyz() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_wflag/d_a_obj_wflag/__dt__4cXyzFv.s"
}
#pragma pop

/* 80D36F90-80D37058 000470 00C8+00 1/1 0/0 0/0 .text            tail_mtxset__FP9wf_tail_s */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void tail_mtxset(wf_tail_s* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_wflag/d_a_obj_wflag/tail_mtxset__FP9wf_tail_s.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D378A4-80D378A8 000018 0004+00 0/1 0/0 0/0 .rodata          @3987 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3987 = 5.0f;
COMPILER_STRIP_GATE(0x80D378A4, &lit_3987);
#pragma pop

/* 80D378A8-80D378AC 00001C 0004+00 0/1 0/0 0/0 .rodata          @3988 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3988 = 133.0f;
COMPILER_STRIP_GATE(0x80D378A8, &lit_3988);
#pragma pop

/* 80D378AC-80D378B0 000020 0004+00 0/1 0/0 0/0 .rodata          @3989 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3989 = 248.0f;
COMPILER_STRIP_GATE(0x80D378AC, &lit_3989);
#pragma pop

/* 80D378B0-80D378B4 000024 0004+00 0/1 0/0 0/0 .rodata          @3990 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3990 = 143.0f;
COMPILER_STRIP_GATE(0x80D378B0, &lit_3990);
#pragma pop

/* 80D378B4-80D378B8 000028 0004+00 0/1 0/0 0/0 .rodata          @3991 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3991 = 418.0f;
COMPILER_STRIP_GATE(0x80D378B4, &lit_3991);
#pragma pop

/* 80D37058-80D372D0 000538 0278+00 2/1 0/0 0/0 .text daObj_Wflag_Execute__FP15obj_wflag_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObj_Wflag_Execute(obj_wflag_class* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_wflag/d_a_obj_wflag/daObj_Wflag_Execute__FP15obj_wflag_class.s"
}
#pragma pop

/* 80D372D0-80D372D8 0007B0 0008+00 1/0 0/0 0/0 .text daObj_Wflag_IsDelete__FP15obj_wflag_class */
static bool daObj_Wflag_IsDelete(obj_wflag_class* param_0) {
    return true;
}

/* ############################################################################################## */
/* 80D378C0-80D378C0 000034 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80D378C0 = "Obj_wflag";
#pragma pop

/* 80D372D8-80D37308 0007B8 0030+00 1/0 0/0 0/0 .text daObj_Wflag_Delete__FP15obj_wflag_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObj_Wflag_Delete(obj_wflag_class* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_wflag/d_a_obj_wflag/daObj_Wflag_Delete__FP15obj_wflag_class.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D378B8-80D378BC 00002C 0004+00 1/1 0/0 0/0 .rodata          @4094 */
SECTION_RODATA static f32 const lit_4094 = 1.0f;
COMPILER_STRIP_GATE(0x80D378B8, &lit_4094);

/* 80D37918-80D37938 -00001 0020+00 1/0 0/0 0/0 .data            l_daObj_Wflag_Method */
SECTION_DATA static void* l_daObj_Wflag_Method[8] = {
    (void*)daObj_Wflag_Create__FP10fopAc_ac_c,
    (void*)daObj_Wflag_Delete__FP15obj_wflag_class,
    (void*)daObj_Wflag_Execute__FP15obj_wflag_class,
    (void*)daObj_Wflag_IsDelete__FP15obj_wflag_class,
    (void*)daObj_Wflag_Draw__FP15obj_wflag_class,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80D37938-80D37968 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_OBJ_WFLAG */
SECTION_DATA extern void* g_profile_OBJ_WFLAG[12] = {
    (void*)0xFFFFFFFD, (void*)0x0007FFFD,
    (void*)0x01190000, (void*)&g_fpcLf_Method,
    (void*)0x0000083C, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x00350000, (void*)&l_daObj_Wflag_Method,
    (void*)0x00040000, (void*)0x000E0000,
};

/* 80D37968-80D37974 00009C 000C+00 2/2 0/0 0/0 .data            __vt__12J3DFrameCtrl */
SECTION_DATA extern void* __vt__12J3DFrameCtrl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12J3DFrameCtrlFv,
};

/* 80D37308-80D375EC 0007E8 02E4+00 1/1 0/0 0/0 .text            useHeapInit__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void useHeapInit(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_wflag/d_a_obj_wflag/useHeapInit__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80D375EC-80D37634 000ACC 0048+00 1/0 0/0 0/0 .text            __dt__12J3DFrameCtrlFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J3DFrameCtrl::~J3DFrameCtrl() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_wflag/d_a_obj_wflag/__dt__12J3DFrameCtrlFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D378BC-80D378C0 000030 0004+00 1/1 0/0 0/0 .rodata          @4131 */
SECTION_RODATA static f32 const lit_4131 = 65536.0f;
COMPILER_STRIP_GATE(0x80D378BC, &lit_4131);

/* 80D37634-80D37720 000B14 00EC+00 1/0 0/0 0/0 .text            daObj_Wflag_Create__FP10fopAc_ac_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObj_Wflag_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_wflag/d_a_obj_wflag/daObj_Wflag_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80D37720-80D377B4 000C00 0094+00 1/1 0/0 0/0 .text            __dt__9wf_tail_sFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm wf_tail_s::~wf_tail_s() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_wflag/d_a_obj_wflag/__dt__9wf_tail_sFv.s"
}
#pragma pop

/* 80D377B4-80D377F0 000C94 003C+00 2/2 0/0 0/0 .text            __dt__5csXyzFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm csXyz::~csXyz() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_wflag/d_a_obj_wflag/__dt__5csXyzFv.s"
}
#pragma pop

/* 80D377F0-80D3787C 000CD0 008C+00 1/1 0/0 0/0 .text            __ct__9wf_tail_sFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm wf_tail_s::wf_tail_s() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_wflag/d_a_obj_wflag/__ct__9wf_tail_sFv.s"
}
#pragma pop

/* 80D3787C-80D37880 000D5C 0004+00 1/1 0/0 0/0 .text            __ct__5csXyzFv */
csXyz::csXyz() {
    /* empty function */
}

/* 80D37880-80D37884 000D60 0004+00 1/1 0/0 0/0 .text            __ct__4cXyzFv */
cXyz::cXyz() {
    /* empty function */
}

/* 80D378C0-80D378C0 000034 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
