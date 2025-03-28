//
// Generated By: dol2asm
// Translation Unit: d_a_obj_lv1Candle00
//

#include "rel/d/a/obj/d_a_obj_lv1Candle00/d_a_obj_lv1Candle00.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct request_of_phase_process_class {};

struct mDoMtx_stack_c {
    static u8 now[48];
};

struct mDoHIO_entry_c {
    /* 80C55D38 */ ~mDoHIO_entry_c();
};

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
};

struct daLv1Cdl00_c {
    /* 80C55D80 */ void setBaseMtx();
    /* 80C55E08 */ void CreateHeap();
    /* 80C55E74 */ void create();
    /* 80C561A0 */ void createHeapCallBack(fopAc_ac_c*);
    /* 80C561C0 */ void lightInit();
    /* 80C56268 */ void setLight();
    /* 80C562A0 */ void cutLight();
    /* 80C562D8 */ void pointLightProc();
    /* 80C56388 */ void Execute();
    /* 80C567EC */ void Draw();
    /* 80C56890 */ void Delete();

    static u8 const mCcDObjInfo[48];
    static u8 mCcDCyl[68];
};

struct daLv1Cdl00_HIO_c {
    /* 80C55D0C */ daLv1Cdl00_HIO_c();
    /* 80C56970 */ ~daLv1Cdl00_HIO_c();
};

struct dSv_info_c {
    /* 80035200 */ void onSwitch(int, int);
    /* 800352B0 */ void offSwitch(int, int);
    /* 80035360 */ void isSwitch(int, int) const;
};

struct dKy_tevstr_c {};

struct J3DModelData {};

struct cXyz {};

struct dScnKy_env_light_c {
    /* 801A37C4 */ void settingTevStruct(int, cXyz*, dKy_tevstr_c*);
    /* 801A4DA0 */ void setLightTevColorType_MAJI(J3DModelData*, dKy_tevstr_c*);
};

struct dRes_info_c {};

struct dRes_control_c {
    /* 8003C2EC */ void getRes(char const*, s32, dRes_info_c*, int);
};

struct _GXColor {};

struct dPa_control_c {
    /* 8004D1B8 */ void setSimple(u16, cXyz const*, dKy_tevstr_c const*, u8, _GXColor const&,
                                  _GXColor const&, int, f32);
};

struct dCcD_Stts {
    /* 80083860 */ void Init(int, int, fopAc_ac_c*);
};

struct dCcD_SrcCyl {};

struct dCcD_GStts {
    /* 80083760 */ dCcD_GStts();
};

struct dCcD_GObjInf {
    /* 80083A28 */ dCcD_GObjInf();
    /* 80084460 */ void ChkTgHit();
    /* 800844F8 */ void GetTgHitObj();
    /* 80084548 */ void GetTgHitGObj();
    /* 8008457C */ void GetTgHitObjSe();
    /* 800845B0 */ void getHitSeID(u8, int);
};

struct dCcD_Cyl {
    /* 800848B4 */ void Set(dCcD_SrcCyl const&);
};

struct cM3dGCyl {
    /* 8026F1DC */ void SetC(cXyz const&);
    /* 8026F1F8 */ void SetH(f32);
    /* 8026F200 */ void SetR(f32);
    /* 80C56110 */ ~cM3dGCyl();
};

struct cM3dGAab {
    /* 80C56158 */ ~cM3dGAab();
};

struct cCcD_Obj {
    /* 80263A48 */ void GetAc();
};

struct cCcS {
    /* 80264BA8 */ void Set(cCcD_Obj*);
};

struct Z2SoundObjSimple {
    /* 802BE844 */ Z2SoundObjSimple();
};

struct Z2SoundObjBase {
    /* 802BDFF8 */ void deleteObject();
    /* 802BE4A4 */ void startCollisionSE(u32, u32, Z2SoundObjBase*);
};

struct JAISoundID {};

struct Vec {};

struct Z2SeMgr {
    /* 802AB984 */ void seStart(JAISoundID, Vec const*, u32, s8, f32, f32, f32, f32, u8);
    /* 802AC50C */ void seStartLevel(JAISoundID, Vec const*, u32, s8, f32, f32, f32, f32, u8);
};

struct Z2AudioMgr {
    static u8 mAudioMgrPtr[4 + 4 /* padding */];
};

struct LIGHT_INFLUENCE {};

struct J3DModel {};

//
// Forward References:
//

extern "C" void __ct__16daLv1Cdl00_HIO_cFv();
extern "C" void __dt__14mDoHIO_entry_cFv();
extern "C" void setBaseMtx__12daLv1Cdl00_cFv();
extern "C" void CreateHeap__12daLv1Cdl00_cFv();
extern "C" void create__12daLv1Cdl00_cFv();
extern "C" void __dt__8cM3dGCylFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void createHeapCallBack__12daLv1Cdl00_cFP10fopAc_ac_c();
extern "C" void lightInit__12daLv1Cdl00_cFv();
extern "C" void setLight__12daLv1Cdl00_cFv();
extern "C" void cutLight__12daLv1Cdl00_cFv();
extern "C" void pointLightProc__12daLv1Cdl00_cFv();
extern "C" void Execute__12daLv1Cdl00_cFv();
extern "C" void Draw__12daLv1Cdl00_cFv();
extern "C" void Delete__12daLv1Cdl00_cFv();
extern "C" static void daLv1Cdl00_Draw__FP12daLv1Cdl00_c();
extern "C" static void daLv1Cdl00_Execute__FP12daLv1Cdl00_c();
extern "C" static void daLv1Cdl00_Delete__FP12daLv1Cdl00_c();
extern "C" static void daLv1Cdl00_Create__FP10fopAc_ac_c();
extern "C" void __dt__16daLv1Cdl00_HIO_cFv();
extern "C" void __sinit_d_a_obj_lv1Candle00_cpp();
extern "C" u8 const mCcDObjInfo__12daLv1Cdl00_c[48];
extern "C" extern char const* const d_a_obj_lv1Candle00__stringBase0;
extern "C" u8 mCcDCyl__12daLv1Cdl00_c[68];

//
// External References:
//

extern "C" void mDoMtx_ZXYrotM__FPA4_fsss();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_setCullSizeBox2__FP10fopAc_ac_cP12J3DModelData();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void onSwitch__10dSv_info_cFii();
extern "C" void offSwitch__10dSv_info_cFii();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void setSimple__13dPa_control_cFUsPC4cXyzPC12dKy_tevstr_cUcRC8_GXColorRC8_GXColorif();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void ChkTgHit__12dCcD_GObjInfFv();
extern "C" void GetTgHitObj__12dCcD_GObjInfFv();
extern "C" void GetTgHitGObj__12dCcD_GObjInfFv();
extern "C" void GetTgHitObjSe__12dCcD_GObjInfFv();
extern "C" void getHitSeID__12dCcD_GObjInfFUci();
extern "C" void Set__8dCcD_CylFRC11dCcD_SrcCyl();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void dKy_plight_set__FP15LIGHT_INFLUENCE();
extern "C" void dKy_plight_cut__FP15LIGHT_INFLUENCE();
extern "C" void dKy_BossLight_set__FP4cXyzP8_GXColorfUc();
extern "C" void GetAc__8cCcD_ObjFv();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void SetC__8cM3dGCylFRC4cXyz();
extern "C" void SetH__8cM3dGCylFf();
extern "C" void SetR__8cM3dGCylFf();
extern "C" void cLib_addCalc__FPfffff();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void seStartLevel__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void deleteObject__14Z2SoundObjBaseFv();
extern "C" void startCollisionSE__14Z2SoundObjBaseFUlUlP14Z2SoundObjBase();
extern "C" void __ct__16Z2SoundObjSimpleFv();
extern "C" void __dl__FPv();
extern "C" void PSMTXCopy();
extern "C" void PSMTXTrans();
extern "C" void _savegpr_29();
extern "C" void _restgpr_29();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern void* __vt__8dCcD_Cyl[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_CylAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 j3dSys[284];
extern "C" extern u32 g_whiteColor;
extern "C" u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];
extern "C" void __register_global_object();

//
// Declarations:
//

/* ############################################################################################## */
/* 80C56AC0-80C56B04 000000 0044+00 2/2 0/0 0/0 .data            mCcDCyl__12daLv1Cdl00_c */
SECTION_DATA u8 daLv1Cdl00_c::mCcDCyl[68] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80C56B04-80C56B24 -00001 0020+00 1/0 0/0 0/0 .data            l_daLv1Cdl00_Method */
SECTION_DATA static void* l_daLv1Cdl00_Method[8] = {
    (void*)daLv1Cdl00_Create__FP10fopAc_ac_c,
    (void*)daLv1Cdl00_Delete__FP12daLv1Cdl00_c,
    (void*)daLv1Cdl00_Execute__FP12daLv1Cdl00_c,
    (void*)NULL,
    (void*)daLv1Cdl00_Draw__FP12daLv1Cdl00_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80C56B24-80C56B54 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_Obj_Lv1Cdl00 */
SECTION_DATA extern void* g_profile_Obj_Lv1Cdl00[12] = {
    (void*)0xFFFFFFFD, (void*)0x0003FFFD,
    (void*)0x00390000, (void*)&g_fpcLf_Method,
    (void*)0x00000754, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x01EE0000, (void*)&l_daLv1Cdl00_Method,
    (void*)0x00060000, (void*)0x000E0000,
};

/* 80C56B54-80C56B60 000094 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGCyl */
SECTION_DATA extern void* __vt__8cM3dGCyl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGCylFv,
};

/* 80C56B60-80C56B6C 0000A0 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGAab */
SECTION_DATA extern void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 80C56B6C-80C56B78 0000AC 000C+00 2/2 0/0 0/0 .data            __vt__16daLv1Cdl00_HIO_c */
SECTION_DATA extern void* __vt__16daLv1Cdl00_HIO_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__16daLv1Cdl00_HIO_cFv,
};

/* 80C56B78-80C56B84 0000B8 000C+00 3/3 0/0 0/0 .data            __vt__14mDoHIO_entry_c */
SECTION_DATA extern void* __vt__14mDoHIO_entry_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__14mDoHIO_entry_cFv,
};

/* 80C55D0C-80C55D38 0000EC 002C+00 1/1 0/0 0/0 .text            __ct__16daLv1Cdl00_HIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daLv1Cdl00_HIO_c::daLv1Cdl00_HIO_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv1Candle00/d_a_obj_lv1Candle00/__ct__16daLv1Cdl00_HIO_cFv.s"
}
#pragma pop

/* 80C55D38-80C55D80 000118 0048+00 1/0 0/0 0/0 .text            __dt__14mDoHIO_entry_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm mDoHIO_entry_c::~mDoHIO_entry_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv1Candle00/d_a_obj_lv1Candle00/__dt__14mDoHIO_entry_cFv.s"
}
#pragma pop

/* 80C55D80-80C55E08 000160 0088+00 2/2 0/0 0/0 .text            setBaseMtx__12daLv1Cdl00_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daLv1Cdl00_c::setBaseMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv1Candle00/d_a_obj_lv1Candle00/setBaseMtx__12daLv1Cdl00_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C56AB4-80C56AB4 000064 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80C56AB4 = "lv1cdl00";
#pragma pop

/* 80C55E08-80C55E74 0001E8 006C+00 1/1 0/0 0/0 .text            CreateHeap__12daLv1Cdl00_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daLv1Cdl00_c::CreateHeap() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv1Candle00/d_a_obj_lv1Candle00/CreateHeap__12daLv1Cdl00_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C56A50-80C56A80 000000 0030+00 4/4 0/0 0/0 .rodata          mCcDObjInfo__12daLv1Cdl00_c */
SECTION_RODATA u8 const daLv1Cdl00_c::mCcDObjInfo[48] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x13,
    0xD8, 0xFB, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x79, 0x01, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x0A, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80C56A50, &daLv1Cdl00_c::mCcDObjInfo);

/* 80C56A80-80C56A84 000030 0004+00 1/1 0/0 0/0 .rodata          @3753 */
SECTION_RODATA static f32 const lit_3753 = 120.0f;
COMPILER_STRIP_GATE(0x80C56A80, &lit_3753);

/* 80C55E74-80C56110 000254 029C+00 1/1 0/0 0/0 .text            create__12daLv1Cdl00_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daLv1Cdl00_c::create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv1Candle00/d_a_obj_lv1Candle00/create__12daLv1Cdl00_cFv.s"
}
#pragma pop

/* 80C56110-80C56158 0004F0 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGCylFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGCyl::~cM3dGCyl() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv1Candle00/d_a_obj_lv1Candle00/__dt__8cM3dGCylFv.s"
}
#pragma pop

/* 80C56158-80C561A0 000538 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGAabFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGAab::~cM3dGAab() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv1Candle00/d_a_obj_lv1Candle00/__dt__8cM3dGAabFv.s"
}
#pragma pop

/* 80C561A0-80C561C0 000580 0020+00 1/1 0/0 0/0 .text
 * createHeapCallBack__12daLv1Cdl00_cFP10fopAc_ac_c             */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daLv1Cdl00_c::createHeapCallBack(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv1Candle00/d_a_obj_lv1Candle00/createHeapCallBack__12daLv1Cdl00_cFP10fopAc_ac_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C56A84-80C56A88 000034 0004+00 0/1 0/0 0/0 .rodata          @3847 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3847 = 10.0f;
COMPILER_STRIP_GATE(0x80C56A84, &lit_3847);
#pragma pop

/* 80C56A88-80C56A8C 000038 0004+00 0/1 0/0 0/0 .rodata          @3848 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3848 = 500.0f;
COMPILER_STRIP_GATE(0x80C56A88, &lit_3848);
#pragma pop

/* 80C56A8C-80C56A90 00003C 0004+00 0/3 0/0 0/0 .rodata          @3849 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3849 = 1.0f;
COMPILER_STRIP_GATE(0x80C56A8C, &lit_3849);
#pragma pop

/* 80C56A90-80C56A94 000040 0004+00 0/3 0/0 0/0 .rodata          @3850 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3850[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x80C56A90, &lit_3850);
#pragma pop

/* 80C561C0-80C56268 0005A0 00A8+00 1/1 0/0 0/0 .text            lightInit__12daLv1Cdl00_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daLv1Cdl00_c::lightInit() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv1Candle00/d_a_obj_lv1Candle00/lightInit__12daLv1Cdl00_cFv.s"
}
#pragma pop

/* 80C56268-80C562A0 000648 0038+00 2/2 0/0 0/0 .text            setLight__12daLv1Cdl00_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daLv1Cdl00_c::setLight() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv1Candle00/d_a_obj_lv1Candle00/setLight__12daLv1Cdl00_cFv.s"
}
#pragma pop

/* 80C562A0-80C562D8 000680 0038+00 1/1 0/0 0/0 .text            cutLight__12daLv1Cdl00_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daLv1Cdl00_c::cutLight() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv1Candle00/d_a_obj_lv1Candle00/cutLight__12daLv1Cdl00_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C56A94-80C56A98 000044 0004+00 0/1 0/0 0/0 .rodata          @3872 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3872 = 0xBC6642FF;
COMPILER_STRIP_GATE(0x80C56A94, &lit_3872);
#pragma pop

/* 80C56A98-80C56A9C 000048 0004+00 0/1 0/0 0/0 .rodata          @3880 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3880 = 0.5f;
COMPILER_STRIP_GATE(0x80C56A98, &lit_3880);
#pragma pop

/* 80C56A9C-80C56AA0 00004C 0004+00 0/1 0/0 0/0 .rodata          @3881 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3881 = 1.0f / 10.0f;
COMPILER_STRIP_GATE(0x80C56A9C, &lit_3881);
#pragma pop

/* 80C56AA0-80C56AA4 000050 0004+00 0/1 0/0 0/0 .rodata          @3882 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3882 = 0x38D1B717;
COMPILER_STRIP_GATE(0x80C56AA0, &lit_3882);
#pragma pop

/* 80C56AA4-80C56AA8 000054 0004+00 0/1 0/0 0/0 .rodata          @3883 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3883 = 0x358637BD;
COMPILER_STRIP_GATE(0x80C56AA4, &lit_3883);
#pragma pop

/* 80C562D8-80C56388 0006B8 00B0+00 1/1 0/0 0/0 .text            pointLightProc__12daLv1Cdl00_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daLv1Cdl00_c::pointLightProc() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv1Candle00/d_a_obj_lv1Candle00/pointLightProc__12daLv1Cdl00_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C56AA8-80C56AAC 000058 0004+00 0/1 0/0 0/0 .rodata          @4006 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4006 = -1.0f;
COMPILER_STRIP_GATE(0x80C56AA8, &lit_4006);
#pragma pop

/* 80C56AAC-80C56AB0 00005C 0004+00 0/1 0/0 0/0 .rodata          @4007 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4007 = 25.0f;
COMPILER_STRIP_GATE(0x80C56AAC, &lit_4007);
#pragma pop

/* 80C56AB0-80C56AB4 000060 0004+00 0/1 0/0 0/0 .rodata          @4008 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4008 = 130.0f;
COMPILER_STRIP_GATE(0x80C56AB0, &lit_4008);
#pragma pop

/* 80C56388-80C567EC 000768 0464+00 1/1 0/0 0/0 .text            Execute__12daLv1Cdl00_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daLv1Cdl00_c::Execute() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv1Candle00/d_a_obj_lv1Candle00/Execute__12daLv1Cdl00_cFv.s"
}
#pragma pop

/* 80C567EC-80C56890 000BCC 00A4+00 1/1 0/0 0/0 .text            Draw__12daLv1Cdl00_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daLv1Cdl00_c::Draw() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv1Candle00/d_a_obj_lv1Candle00/Draw__12daLv1Cdl00_cFv.s"
}
#pragma pop

/* 80C56890-80C568F0 000C70 0060+00 1/1 0/0 0/0 .text            Delete__12daLv1Cdl00_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daLv1Cdl00_c::Delete() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv1Candle00/d_a_obj_lv1Candle00/Delete__12daLv1Cdl00_cFv.s"
}
#pragma pop

/* 80C568F0-80C56910 000CD0 0020+00 1/0 0/0 0/0 .text            daLv1Cdl00_Draw__FP12daLv1Cdl00_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daLv1Cdl00_Draw(daLv1Cdl00_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv1Candle00/d_a_obj_lv1Candle00/daLv1Cdl00_Draw__FP12daLv1Cdl00_c.s"
}
#pragma pop

/* 80C56910-80C56930 000CF0 0020+00 1/0 0/0 0/0 .text daLv1Cdl00_Execute__FP12daLv1Cdl00_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daLv1Cdl00_Execute(daLv1Cdl00_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv1Candle00/d_a_obj_lv1Candle00/daLv1Cdl00_Execute__FP12daLv1Cdl00_c.s"
}
#pragma pop

/* 80C56930-80C56950 000D10 0020+00 1/0 0/0 0/0 .text            daLv1Cdl00_Delete__FP12daLv1Cdl00_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daLv1Cdl00_Delete(daLv1Cdl00_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv1Candle00/d_a_obj_lv1Candle00/daLv1Cdl00_Delete__FP12daLv1Cdl00_c.s"
}
#pragma pop

/* 80C56950-80C56970 000D30 0020+00 1/0 0/0 0/0 .text            daLv1Cdl00_Create__FP10fopAc_ac_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daLv1Cdl00_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv1Candle00/d_a_obj_lv1Candle00/daLv1Cdl00_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80C56970-80C569CC 000D50 005C+00 2/1 0/0 0/0 .text            __dt__16daLv1Cdl00_HIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daLv1Cdl00_HIO_c::~daLv1Cdl00_HIO_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv1Candle00/d_a_obj_lv1Candle00/__dt__16daLv1Cdl00_HIO_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80C56B90-80C56B9C 000008 000C+00 1/1 0/0 0/0 .bss             @3620 */
static u8 lit_3620[12];

/* 80C56B9C-80C56BA4 000014 0008+00 1/1 0/0 0/0 .bss             l_HIO */
static u8 l_HIO[8];

/* 80C569CC-80C56A3C 000DAC 0070+00 0/0 1/0 0/0 .text            __sinit_d_a_obj_lv1Candle00_cpp */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __sinit_d_a_obj_lv1Candle00_cpp() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_lv1Candle00/d_a_obj_lv1Candle00/__sinit_d_a_obj_lv1Candle00_cpp.s"
}
#pragma pop

#pragma push
#pragma force_active on
REGISTER_CTORS(0x80C569CC, __sinit_d_a_obj_lv1Candle00_cpp);
#pragma pop

/* 80C56AB4-80C56AB4 000064 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
