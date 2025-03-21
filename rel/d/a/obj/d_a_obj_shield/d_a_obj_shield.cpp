//
// Generated By: dol2asm
// Translation Unit: d_a_obj_shield
//

#include "rel/d/a/obj/d_a_obj_shield/d_a_obj_shield.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct request_of_phase_process_class {};

struct mDoMtx_stack_c {
    /* 8000CD9C */ void transM(f32, f32, f32);

    static u8 now[48];
};

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
};

struct cXyz {
    /* 80266B84 */ void operator*(f32) const;
};

struct fopAcM_gc_c {
    /* 8001DCBC */ void gndCheck(cXyz const*);

    static f32 mGroundY;
};

struct daPy_py_c {
    /* 8015F4F0 */ void setLookPos(cXyz*);
};

struct daItemShield_c {
    /* 80CD6D9C */ void initBaseMtx();
    /* 80CD6DD8 */ void setBaseMtx();
    /* 80CD7094 */ void Create();
    /* 80CD724C */ bool __CreateHeap();
    /* 80CD7254 */ void create();
    /* 80CD75EC */ void bg_check();
    /* 80CD7734 */ void action_proc_call();
    /* 80CD77F0 */ void actionInit();
    /* 80CD7828 */ void actionWaitInit();
    /* 80CD7890 */ void actionWait();
    /* 80CD7C68 */ void initActionOrderGetDemo();
    /* 80CD7D04 */ void actionOrderGetDemo();
    /* 80CD7D80 */ void actionGetDemo();
    /* 80CD7E00 */ void event_proc_call();
    /* 80CD7EBC */ void actionWaitCamDemo();
    /* 80CD7F20 */ void actionOrderCamDemo();
    /* 80CD7F88 */ void actionCamDemo();
    /* 80CD7FE4 */ void actionCamDemoEnd();
    /* 80CD7FE8 */ void execute();
    /* 80CD80EC */ void draw();
    /* 80CD8140 */ void _delete();
};

struct daItemBase_c {
    /* 80037A64 */ void hide();
    /* 80037A74 */ void show();
    /* 80037ACC */ void chkDraw();
    /* 80144724 */ void DeleteBase(char const*);
    /* 8014474C */ bool clothCreate();
    /* 80144B94 */ void DrawBase();
    /* 80144C30 */ void RotateYBase();
    /* 80144C7C */ void setListStart();
    /* 80144CC4 */ void settingBeforeDraw();
    /* 80144D18 */ void setTevStr();
    /* 80144D70 */ void setShadow();
    /* 80144EDC */ void animEntry();
    /* 80145144 */ void chkFlag(int);
    /* 80145164 */ void getTevFrm();
    /* 80145180 */ void getBtpFrm();
    /* 8014519C */ void getShadowSize();
    /* 801451B4 */ void getCollisionH();
    /* 801451D0 */ void getCollisionR();
};

struct dSv_info_c {
    /* 80035200 */ void onSwitch(int, int);
    /* 80035360 */ void isSwitch(int, int) const;
};

struct dItem_data {
    static void* field_item_res[1020];
    static u8 item_info[1020 + 4 /* padding */];
};

struct dEvt_control_c {
    /* 80042468 */ void reset();
};

struct dEvent_manager_c {
    /* 80047758 */ void getEventIdx(fopAc_ac_c*, char const*, u8);
    /* 80047A78 */ void endCheck(s16);
    /* 80047ADC */ void endCheckOld(char const*);
};

struct dCcD_Stts {
    /* 80083860 */ void Init(int, int, fopAc_ac_c*);
};

struct dCcD_SrcCyl {};

struct dCcD_GStts {
    /* 80083760 */ dCcD_GStts();
    /* 80CD74B0 */ ~dCcD_GStts();
};

struct dCcD_GObjInf {
    /* 80083A28 */ dCcD_GObjInf();
    /* 80084658 */ void ChkCoHit();
};

struct dCcD_GAtTgCoCommonBase {
    /* 80083688 */ void GetAc();
};

struct dCcD_Cyl {
    /* 800848B4 */ void Set(dCcD_SrcCyl const&);
};

struct dBgS_PolyPassChk {
    /* 80078E68 */ void SetObj();
};

struct dBgS_ObjAcch {
    /* 80CD757C */ ~dBgS_ObjAcch();
};

struct dBgS_AcchCir {
    /* 80075EAC */ dBgS_AcchCir();
    /* 80075F58 */ void SetWall(f32, f32);
    /* 80CD750C */ ~dBgS_AcchCir();
};

struct csXyz {};

struct dBgS {};

struct dBgS_Acch {
    /* 80075F94 */ ~dBgS_Acch();
    /* 800760A0 */ dBgS_Acch();
    /* 80076248 */ void Set(cXyz*, cXyz*, fopAc_ac_c*, int, dBgS_AcchCir*, cXyz*, csXyz*, csXyz*);
    /* 80076AAC */ void CrrPos(dBgS&);
};

struct cM3dGPla {
    /* 80CD6D54 */ ~cM3dGPla();
};

struct cM3dGCyl {
    /* 8026F1DC */ void SetC(cXyz const&);
    /* 8026F1F8 */ void SetH(f32);
    /* 8026F200 */ void SetR(f32);
    /* 80CD7420 */ ~cM3dGCyl();
};

struct cM3dGCir {
    /* 8026EF18 */ ~cM3dGCir();
};

struct cM3dGAab {
    /* 80CD7468 */ ~cM3dGAab();
};

struct cCcD_Obj {};

struct cCcS {
    /* 80264BA8 */ void Set(cCcD_Obj*);
};

struct cCcD_GStts {
    /* 80CD81F8 */ ~cCcD_GStts();
};

struct cBgS_PolyInfo {
    /* 802680B0 */ ~cBgS_PolyInfo();
};

struct cBgS {
    /* 80074744 */ void GetTriPla(cBgS_PolyInfo const&, cM3dGPla*) const;
};

struct JAISoundID {};

struct Vec {};

struct Z2SeMgr {
    /* 802AB984 */ void seStart(JAISoundID, Vec const*, u32, s8, f32, f32, f32, f32, u8);
};

struct Z2AudioMgr {
    static u8 mAudioMgrPtr[4 + 4 /* padding */];
};

struct JMath {
    static u8 sincosTable_[65536];
};

//
// Forward References:
//

extern "C" static void Reflect__FP4cXyzRC13cBgS_PolyInfof();
extern "C" void __dt__8cM3dGPlaFv();
extern "C" void initBaseMtx__14daItemShield_cFv();
extern "C" void setBaseMtx__14daItemShield_cFv();
extern "C" void Create__14daItemShield_cFv();
extern "C" bool __CreateHeap__14daItemShield_cFv();
extern "C" void create__14daItemShield_cFv();
extern "C" void __dt__8cM3dGCylFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void __dt__10dCcD_GSttsFv();
extern "C" void __dt__12dBgS_AcchCirFv();
extern "C" void __dt__12dBgS_ObjAcchFv();
extern "C" void bg_check__14daItemShield_cFv();
extern "C" void action_proc_call__14daItemShield_cFv();
extern "C" void actionInit__14daItemShield_cFv();
extern "C" void actionWaitInit__14daItemShield_cFv();
extern "C" void actionWait__14daItemShield_cFv();
extern "C" void initActionOrderGetDemo__14daItemShield_cFv();
extern "C" void actionOrderGetDemo__14daItemShield_cFv();
extern "C" void actionGetDemo__14daItemShield_cFv();
extern "C" void event_proc_call__14daItemShield_cFv();
extern "C" void actionWaitCamDemo__14daItemShield_cFv();
extern "C" void actionOrderCamDemo__14daItemShield_cFv();
extern "C" void actionCamDemo__14daItemShield_cFv();
extern "C" void actionCamDemoEnd__14daItemShield_cFv();
extern "C" void execute__14daItemShield_cFv();
extern "C" void draw__14daItemShield_cFv();
extern "C" void _delete__14daItemShield_cFv();
extern "C" static void daItemShield_Draw__FP14daItemShield_c();
extern "C" static void daItemShield_Execute__FP14daItemShield_c();
extern "C" static void daItemShield_Delete__FP14daItemShield_c();
extern "C" static void daItemShield_Create__FP10fopAc_ac_c();
extern "C" void __dt__10cCcD_GSttsFv();
extern "C" void func_80CD8240(void* _this, u8*);
extern "C" static void func_80CD825C();
extern "C" static void func_80CD8264();
extern "C" extern char const* const d_a_obj_shield__stringBase0;

//
// External References:
//

extern "C" void mDoMtx_ZXYrotM__FPA4_fsss();
extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void transM__14mDoMtx_stack_cFfff();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAcM_delete__FP10fopAc_ac_c();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_posMoveF__FP10fopAc_ac_cPC4cXyz();
extern "C" void fopAcM_searchActorDistance__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fopAcM_orderOtherEventId__FP10fopAc_ac_csUcUsUsUs();
extern "C" void fopAcM_orderItemEvent__FP10fopAc_ac_cUsUs();
extern "C" void fopAcM_createItemForTrBoxDemo__FPC4cXyziiiPC5csXyzPC4cXyz();
extern "C" void gndCheck__11fopAcM_gc_cFPC4cXyz();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void onSwitch__10dSv_info_cFii();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void hide__12daItemBase_cFv();
extern "C" void show__12daItemBase_cFv();
extern "C" void chkDraw__12daItemBase_cFv();
extern "C" void CheckFieldItemCreateHeap__FP10fopAc_ac_c();
extern "C" void reset__14dEvt_control_cFv();
extern "C" void setPtI_Id__14dEvt_control_cFUi();
extern "C" void getEventIdx__16dEvent_manager_cFP10fopAc_ac_cPCcUc();
extern "C" void endCheck__16dEvent_manager_cFs();
extern "C" void endCheckOld__16dEvent_manager_cFPCc();
extern "C" void GetTriPla__4cBgSCFRC13cBgS_PolyInfoP8cM3dGPla();
extern "C" void __ct__12dBgS_AcchCirFv();
extern "C" void SetWall__12dBgS_AcchCirFff();
extern "C" void __dt__9dBgS_AcchFv();
extern "C" void __ct__9dBgS_AcchFv();
extern "C" void Set__9dBgS_AcchFP4cXyzP4cXyzP10fopAc_ac_ciP12dBgS_AcchCirP4cXyzP5csXyzP5csXyz();
extern "C" void CrrPos__9dBgS_AcchFR4dBgS();
extern "C" void SetObj__16dBgS_PolyPassChkFv();
extern "C" void GetAc__22dCcD_GAtTgCoCommonBaseFv();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void ChkCoHit__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_CylFRC11dCcD_SrcCyl();
extern "C" void DeleteBase__12daItemBase_cFPCc();
extern "C" bool clothCreate__12daItemBase_cFv();
extern "C" void DrawBase__12daItemBase_cFv();
extern "C" void RotateYBase__12daItemBase_cFv();
extern "C" void setListStart__12daItemBase_cFv();
extern "C" void settingBeforeDraw__12daItemBase_cFv();
extern "C" void setTevStr__12daItemBase_cFv();
extern "C" void setShadow__12daItemBase_cFv();
extern "C" void animEntry__12daItemBase_cFv();
extern "C" void chkFlag__12daItemBase_cFi();
extern "C" void getTevFrm__12daItemBase_cFv();
extern "C" void getBtpFrm__12daItemBase_cFv();
extern "C" void getShadowSize__12daItemBase_cFv();
extern "C" void getCollisionH__12daItemBase_cFv();
extern "C" void getCollisionR__12daItemBase_cFv();
extern "C" void setLookPos__9daPy_py_cFP4cXyz();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void __ml__4cXyzCFf();
extern "C" void cM_atan2s__Fff();
extern "C" void __dt__13cBgS_PolyInfoFv();
extern "C" void __dt__8cM3dGCirFv();
extern "C" void SetC__8cM3dGCylFRC4cXyz();
extern "C" void SetH__8cM3dGCylFf();
extern "C" void SetR__8cM3dGCylFf();
extern "C" void cLib_addCalcAngleS__FPsssss();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void __dl__FPv();
extern "C" void PSMTXCopy();
extern "C" void PSMTXTrans();
extern "C" void PSVECSquareMag();
extern "C" void C_VECReflect();
extern "C" void PSVECSquareDistance();
extern "C" void __ptmf_scall();
extern "C" void _savegpr_29();
extern "C" void _restgpr_29();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern void* __vt__8dCcD_Cyl[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" void* field_item_res__10dItem_data[1020];
extern "C" u8 item_info__10dItem_data[1020 + 4 /* padding */];
extern "C" extern void* __vt__12daItemBase_c[17 + 1 /* padding */];
extern "C" extern void* __vt__12cCcD_CylAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" u8 sincosTable___5JMath[65536];
extern "C" extern u32 __float_nan;
extern "C" f32 mGroundY__11fopAcM_gc_c;
extern "C" u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];
extern "C" extern u8 struct_80CD8520[4];

//
// Declarations:
//

/* ############################################################################################## */
/* 80CD8274-80CD82B8 000000 0044+00 5/5 0/0 0/0 .rodata          l_cyl_src */
SECTION_RODATA static u8 const l_cyl_src[68] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00, 0x59,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x41, 0xA0, 0x00, 0x00, 0x42, 0x20, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80CD8274, &l_cyl_src);

/* 80CD82B8-80CD82BC 000044 0004+00 0/4 0/0 0/0 .rodata          @3856 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3856[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x80CD82B8, &lit_3856);
#pragma pop

/* 80CD82BC-80CD82C4 000048 0008+00 0/2 0/0 0/0 .rodata          @3857 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3857[8] = {
    0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80CD82BC, &lit_3857);
#pragma pop

/* 80CD82C4-80CD82CC 000050 0008+00 0/2 0/0 0/0 .rodata          @3858 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3858[8] = {
    0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80CD82C4, &lit_3858);
#pragma pop

/* 80CD82CC-80CD82D4 000058 0008+00 0/2 0/0 0/0 .rodata          @3859 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3859[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80CD82CC, &lit_3859);
#pragma pop

/* 80CD833C-80CD8348 000000 000C+00 2/2 0/0 0/0 .data            cNullVec__6Z2Calc */
SECTION_DATA static u8 cNullVec__6Z2Calc[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80CD8348-80CD835C 00000C 0004+10 0/0 0/0 0/0 .data            @1787 */
#pragma push
#pragma force_active on
SECTION_DATA static u32 lit_1787[1 + 4 /* padding */] = {
    0x02000201,
    /* padding */
    0x40080000,
    0x00000000,
    0x3FE00000,
    0x00000000,
};
#pragma pop

/* 80CD835C-80CD8368 -00001 000C+00 0/1 0/0 0/0 .data            @4189 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_4189[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)actionInit__14daItemShield_cFv,
};
#pragma pop

/* 80CD8368-80CD8374 -00001 000C+00 0/1 0/0 0/0 .data            @4190 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_4190[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)actionWait__14daItemShield_cFv,
};
#pragma pop

/* 80CD8374-80CD8380 -00001 000C+00 0/1 0/0 0/0 .data            @4191 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_4191[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)actionOrderGetDemo__14daItemShield_cFv,
};
#pragma pop

/* 80CD8380-80CD838C -00001 000C+00 0/1 0/0 0/0 .data            @4192 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_4192[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)actionGetDemo__14daItemShield_cFv,
};
#pragma pop

/* 80CD838C-80CD83BC 000050 0030+00 0/1 0/0 0/0 .data            l_actionFunc$4188 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 l_actionFunc[48] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
#pragma pop

/* 80CD83BC-80CD83C8 -00001 000C+00 0/1 0/0 0/0 .data            @4383 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_4383[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)actionWaitCamDemo__14daItemShield_cFv,
};
#pragma pop

/* 80CD83C8-80CD83D4 -00001 000C+00 0/1 0/0 0/0 .data            @4384 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_4384[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)actionOrderCamDemo__14daItemShield_cFv,
};
#pragma pop

/* 80CD83D4-80CD83E0 -00001 000C+00 0/1 0/0 0/0 .data            @4385 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_4385[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)actionCamDemo__14daItemShield_cFv,
};
#pragma pop

/* 80CD83E0-80CD83EC -00001 000C+00 0/1 0/0 0/0 .data            @4386 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_4386[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)actionCamDemoEnd__14daItemShield_cFv,
};
#pragma pop

/* 80CD83EC-80CD841C 0000B0 0030+00 0/1 0/0 0/0 .data            l_func$4382 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 l_func[48] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
#pragma pop

/* 80CD841C-80CD843C -00001 0020+00 1/0 0/0 0/0 .data            l_daItemShield_Method */
SECTION_DATA static void* l_daItemShield_Method[8] = {
    (void*)daItemShield_Create__FP10fopAc_ac_c,
    (void*)daItemShield_Delete__FP14daItemShield_c,
    (void*)daItemShield_Execute__FP14daItemShield_c,
    (void*)NULL,
    (void*)daItemShield_Draw__FP14daItemShield_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80CD843C-80CD846C -00001 0030+00 0/0 0/0 1/0 .data            g_profile_Obj_Shield */
SECTION_DATA extern void* g_profile_Obj_Shield[12] = {
    (void*)0xFFFFFFFD, (void*)0x0007FFFD,
    (void*)0x021C0000, (void*)&g_fpcLf_Method,
    (void*)0x00000958, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x00F00000, (void*)&l_daItemShield_Method,
    (void*)0x00040100, (void*)0x000E0000,
};

/* 80CD846C-80CD8478 000130 000C+00 1/1 0/0 0/0 .data            __vt__12dBgS_AcchCir */
SECTION_DATA extern void* __vt__12dBgS_AcchCir[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_AcchCirFv,
};

/* 80CD8478-80CD8484 00013C 000C+00 2/2 0/0 0/0 .data            __vt__10cCcD_GStts */
SECTION_DATA extern void* __vt__10cCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10cCcD_GSttsFv,
};

/* 80CD8484-80CD8490 000148 000C+00 1/1 0/0 0/0 .data            __vt__10dCcD_GStts */
SECTION_DATA extern void* __vt__10dCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10dCcD_GSttsFv,
};

/* 80CD8490-80CD849C 000154 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGCyl */
SECTION_DATA extern void* __vt__8cM3dGCyl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGCylFv,
};

/* 80CD849C-80CD84A8 000160 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGAab */
SECTION_DATA extern void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 80CD84A8-80CD84CC 00016C 0024+00 2/2 0/0 0/0 .data            __vt__12dBgS_ObjAcch */
SECTION_DATA extern void* __vt__12dBgS_ObjAcch[9] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_ObjAcchFv,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80CD8264,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80CD825C,
};

/* 80CD84CC-80CD8510 000190 0044+00 1/1 0/0 0/0 .data            __vt__14daItemShield_c */
SECTION_DATA extern void* __vt__14daItemShield_c[17] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)DrawBase__12daItemBase_cFv,
    (void*)setListStart__12daItemBase_cFv,
    (void*)settingBeforeDraw__12daItemBase_cFv,
    (void*)setTevStr__12daItemBase_cFv,
    (void*)setShadow__12daItemBase_cFv,
    (void*)animEntry__12daItemBase_cFv,
    (void*)RotateYBase__12daItemBase_cFv,
    (void*)clothCreate__12daItemBase_cFv,
    (void*)__CreateHeap__14daItemShield_cFv,
    (void*)chkFlag__12daItemBase_cFi,
    (void*)getTevFrm__12daItemBase_cFv,
    (void*)getBtpFrm__12daItemBase_cFv,
    (void*)getShadowSize__12daItemBase_cFv,
    (void*)getCollisionH__12daItemBase_cFv,
    (void*)getCollisionR__12daItemBase_cFv,
};

/* 80CD8510-80CD851C 0001D4 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGPla */
SECTION_DATA extern void* __vt__8cM3dGPla[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGPlaFv,
};

/* 80CD6A58-80CD6D54 000078 02FC+00 1/1 0/0 0/0 .text            Reflect__FP4cXyzRC13cBgS_PolyInfof
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void Reflect(cXyz* param_0, cBgS_PolyInfo const& param_1, f32 param_2) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_shield/d_a_obj_shield/Reflect__FP4cXyzRC13cBgS_PolyInfof.s"
}
#pragma pop

/* 80CD6D54-80CD6D9C 000374 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGPlaFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGPla::~cM3dGPla() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_shield/d_a_obj_shield/__dt__8cM3dGPlaFv.s"
}
#pragma pop

/* 80CD6D9C-80CD6DD8 0003BC 003C+00 1/1 0/0 0/0 .text            initBaseMtx__14daItemShield_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daItemShield_c::initBaseMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_shield/d_a_obj_shield/initBaseMtx__14daItemShield_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80CD82D4-80CD82DC 000060 0004+04 0/1 0/0 0/0 .rodata          @3953 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3953[1 + 1 /* padding */] = {
    22.0f / 25.0f,
    /* padding */
    0.0f,
};
COMPILER_STRIP_GATE(0x80CD82D4, &lit_3953);
#pragma pop

/* 80CD82DC-80CD82E4 000068 0008+00 0/1 0/0 0/0 .rodata          @3954 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3954[8] = {
    0x40, 0x69, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80CD82DC, &lit_3954);
#pragma pop

/* 80CD82E4-80CD82E8 000070 0004+00 0/1 0/0 0/0 .rodata          @3955 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3955 = -20.0f;
COMPILER_STRIP_GATE(0x80CD82E4, &lit_3955);
#pragma pop

/* 80CD82E8-80CD82EC 000074 0004+00 0/1 0/0 0/0 .rodata          @3956 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3956 = -15.0f;
COMPILER_STRIP_GATE(0x80CD82E8, &lit_3956);
#pragma pop

/* 80CD82EC-80CD82F0 000078 0004+00 0/1 0/0 0/0 .rodata          @3957 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3957 = 20.0f;
COMPILER_STRIP_GATE(0x80CD82EC, &lit_3957);
#pragma pop

/* 80CD82F0-80CD82F4 00007C 0004+00 0/1 0/0 0/0 .rodata          @3958 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3958 = 15.0f;
COMPILER_STRIP_GATE(0x80CD82F0, &lit_3958);
#pragma pop

/* 80CD82F4-80CD82FC 000080 0008+00 0/1 0/0 0/0 .rodata          @3960 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3960[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80CD82F4, &lit_3960);
#pragma pop

/* 80CD6DD8-80CD7094 0003F8 02BC+00 2/2 0/0 0/0 .text            setBaseMtx__14daItemShield_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daItemShield_c::setBaseMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_shield/d_a_obj_shield/setBaseMtx__14daItemShield_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80CD82FC-80CD8300 000088 0004+00 0/1 0/0 0/0 .rodata          @4003 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4003 = 30.0f;
COMPILER_STRIP_GATE(0x80CD82FC, &lit_4003);
#pragma pop

/* 80CD8300-80CD8304 00008C 0004+00 0/2 0/0 0/0 .rodata          @4004 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4004 = -4.0f;
COMPILER_STRIP_GATE(0x80CD8300, &lit_4004);
#pragma pop

/* 80CD8304-80CD830C 000090 0008+00 0/1 0/0 0/0 .rodata          @4006 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4006[8] = {
    0x43, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80CD8304, &lit_4006);
#pragma pop

/* 80CD7094-80CD724C 0006B4 01B8+00 1/1 0/0 0/0 .text            Create__14daItemShield_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daItemShield_c::Create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_shield/d_a_obj_shield/Create__14daItemShield_cFv.s"
}
#pragma pop

/* 80CD724C-80CD7254 00086C 0008+00 1/0 0/0 0/0 .text            __CreateHeap__14daItemShield_cFv */
bool daItemShield_c::__CreateHeap() {
    return true;
}

/* 80CD7254-80CD7420 000874 01CC+00 1/1 0/0 0/0 .text            create__14daItemShield_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daItemShield_c::create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_shield/d_a_obj_shield/func_80CD7254.s"
}
#pragma pop

/* 80CD7420-80CD7468 000A40 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGCylFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGCyl::~cM3dGCyl() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_shield/d_a_obj_shield/__dt__8cM3dGCylFv.s"
}
#pragma pop

/* 80CD7468-80CD74B0 000A88 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGAabFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGAab::~cM3dGAab() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_shield/d_a_obj_shield/__dt__8cM3dGAabFv.s"
}
#pragma pop

/* 80CD74B0-80CD750C 000AD0 005C+00 1/0 0/0 0/0 .text            __dt__10dCcD_GSttsFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dCcD_GStts::~dCcD_GStts() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_shield/d_a_obj_shield/__dt__10dCcD_GSttsFv.s"
}
#pragma pop

/* 80CD750C-80CD757C 000B2C 0070+00 1/0 0/0 0/0 .text            __dt__12dBgS_AcchCirFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dBgS_AcchCir::~dBgS_AcchCir() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_shield/d_a_obj_shield/__dt__12dBgS_AcchCirFv.s"
}
#pragma pop

/* 80CD757C-80CD75EC 000B9C 0070+00 3/2 0/0 0/0 .text            __dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dBgS_ObjAcch::~dBgS_ObjAcch() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_shield/d_a_obj_shield/__dt__12dBgS_ObjAcchFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80CD830C-80CD8310 000098 0004+00 0/1 0/0 0/0 .rodata          @4180 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4180 = 5.0f;
COMPILER_STRIP_GATE(0x80CD830C, &lit_4180);
#pragma pop

/* 80CD8310-80CD8314 00009C 0004+00 0/2 0/0 0/0 .rodata          @4181 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4181 = 1.0f;
COMPILER_STRIP_GATE(0x80CD8310, &lit_4181);
#pragma pop

/* 80CD8314-80CD8318 0000A0 0004+00 0/1 0/0 0/0 .rodata          @4182 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4182 = 7.0f / 10.0f;
COMPILER_STRIP_GATE(0x80CD8314, &lit_4182);
#pragma pop

/* 80CD8318-80CD831C 0000A4 0004+00 0/1 0/0 0/0 .rodata          @4183 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4183 = 3.0f;
COMPILER_STRIP_GATE(0x80CD8318, &lit_4183);
#pragma pop

/* 80CD831C-80CD8320 0000A8 0004+00 0/2 0/0 0/0 .rodata          @4184 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4184 = -1.0f;
COMPILER_STRIP_GATE(0x80CD831C, &lit_4184);
#pragma pop

/* 80CD75EC-80CD7734 000C0C 0148+00 1/1 0/0 0/0 .text            bg_check__14daItemShield_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daItemShield_c::bg_check() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_shield/d_a_obj_shield/bg_check__14daItemShield_cFv.s"
}
#pragma pop

/* 80CD7734-80CD77F0 000D54 00BC+00 1/1 0/0 0/0 .text action_proc_call__14daItemShield_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daItemShield_c::action_proc_call() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_shield/d_a_obj_shield/action_proc_call__14daItemShield_cFv.s"
}
#pragma pop

/* 80CD77F0-80CD7828 000E10 0038+00 1/0 0/0 0/0 .text            actionInit__14daItemShield_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daItemShield_c::actionInit() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_shield/d_a_obj_shield/actionInit__14daItemShield_cFv.s"
}
#pragma pop

/* 80CD7828-80CD7890 000E48 0068+00 2/2 0/0 0/0 .text            actionWaitInit__14daItemShield_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daItemShield_c::actionWaitInit() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_shield/d_a_obj_shield/actionWaitInit__14daItemShield_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80CD8320-80CD8324 0000AC 0004+00 1/2 0/0 0/0 .rodata          @4335 */
SECTION_RODATA static f32 const lit_4335 = 500.0f;
COMPILER_STRIP_GATE(0x80CD8320, &lit_4335);

/* 80CD8324-80CD8328 0000B0 0004+00 0/1 0/0 0/0 .rodata          @4336 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4336 = -25.0f;
COMPILER_STRIP_GATE(0x80CD8324, &lit_4336);
#pragma pop

/* 80CD8328-80CD832C 0000B4 0004+00 0/1 0/0 0/0 .rodata          @4337 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4337 = 9.0f / 10.0f;
COMPILER_STRIP_GATE(0x80CD8328, &lit_4337);
#pragma pop

/* 80CD7890-80CD7C68 000EB0 03D8+00 1/0 0/0 0/0 .text            actionWait__14daItemShield_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daItemShield_c::actionWait() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_shield/d_a_obj_shield/actionWait__14daItemShield_cFv.s"
}
#pragma pop

/* 80CD7C68-80CD7D04 001288 009C+00 1/1 0/0 0/0 .text initActionOrderGetDemo__14daItemShield_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daItemShield_c::initActionOrderGetDemo() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_shield/d_a_obj_shield/initActionOrderGetDemo__14daItemShield_cFv.s"
}
#pragma pop

/* 80CD7D04-80CD7D80 001324 007C+00 1/0 0/0 0/0 .text actionOrderGetDemo__14daItemShield_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daItemShield_c::actionOrderGetDemo() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_shield/d_a_obj_shield/actionOrderGetDemo__14daItemShield_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80CD832C-80CD832C 0000B8 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80CD832C = "DEFAULT_GETITEM";
#pragma pop

/* 80CD7D80-80CD7E00 0013A0 0080+00 1/0 0/0 0/0 .text            actionGetDemo__14daItemShield_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daItemShield_c::actionGetDemo() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_shield/d_a_obj_shield/actionGetDemo__14daItemShield_cFv.s"
}
#pragma pop

/* 80CD7E00-80CD7EBC 001420 00BC+00 1/1 0/0 0/0 .text            event_proc_call__14daItemShield_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daItemShield_c::event_proc_call() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_shield/d_a_obj_shield/event_proc_call__14daItemShield_cFv.s"
}
#pragma pop

/* 80CD7EBC-80CD7F20 0014DC 0064+00 1/0 0/0 0/0 .text actionWaitCamDemo__14daItemShield_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daItemShield_c::actionWaitCamDemo() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_shield/d_a_obj_shield/actionWaitCamDemo__14daItemShield_cFv.s"
}
#pragma pop

/* 80CD7F20-80CD7F88 001540 0068+00 1/0 0/0 0/0 .text actionOrderCamDemo__14daItemShield_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daItemShield_c::actionOrderCamDemo() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_shield/d_a_obj_shield/actionOrderCamDemo__14daItemShield_cFv.s"
}
#pragma pop

/* 80CD7F88-80CD7FE4 0015A8 005C+00 1/0 0/0 0/0 .text            actionCamDemo__14daItemShield_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daItemShield_c::actionCamDemo() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_shield/d_a_obj_shield/actionCamDemo__14daItemShield_cFv.s"
}
#pragma pop

/* 80CD7FE4-80CD7FE8 001604 0004+00 1/0 0/0 0/0 .text actionCamDemoEnd__14daItemShield_cFv */
void daItemShield_c::actionCamDemoEnd() {
    /* empty function */
}

/* 80CD7FE8-80CD80EC 001608 0104+00 1/1 0/0 0/0 .text            execute__14daItemShield_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daItemShield_c::execute() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_shield/d_a_obj_shield/execute__14daItemShield_cFv.s"
}
#pragma pop

/* 80CD80EC-80CD8140 00170C 0054+00 1/1 0/0 0/0 .text            draw__14daItemShield_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daItemShield_c::draw() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_shield/d_a_obj_shield/draw__14daItemShield_cFv.s"
}
#pragma pop

/* 80CD8140-80CD8178 001760 0038+00 1/1 0/0 0/0 .text            _delete__14daItemShield_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daItemShield_c::_delete() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_shield/d_a_obj_shield/_delete__14daItemShield_cFv.s"
}
#pragma pop

/* 80CD8178-80CD8198 001798 0020+00 1/0 0/0 0/0 .text daItemShield_Draw__FP14daItemShield_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daItemShield_Draw(daItemShield_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_shield/d_a_obj_shield/daItemShield_Draw__FP14daItemShield_c.s"
}
#pragma pop

/* 80CD8198-80CD81B8 0017B8 0020+00 1/0 0/0 0/0 .text daItemShield_Execute__FP14daItemShield_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daItemShield_Execute(daItemShield_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_shield/d_a_obj_shield/daItemShield_Execute__FP14daItemShield_c.s"
}
#pragma pop

/* 80CD81B8-80CD81D8 0017D8 0020+00 1/0 0/0 0/0 .text daItemShield_Delete__FP14daItemShield_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daItemShield_Delete(daItemShield_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_shield/d_a_obj_shield/daItemShield_Delete__FP14daItemShield_c.s"
}
#pragma pop

/* 80CD81D8-80CD81F8 0017F8 0020+00 1/0 0/0 0/0 .text            daItemShield_Create__FP10fopAc_ac_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daItemShield_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_shield/d_a_obj_shield/daItemShield_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80CD81F8-80CD8240 001818 0048+00 1/0 0/0 0/0 .text            __dt__10cCcD_GSttsFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cCcD_GStts::~cCcD_GStts() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_shield/d_a_obj_shield/__dt__10cCcD_GSttsFv.s"
}
#pragma pop

/* 80CD8240-80CD825C 001860 001C+00 1/1 0/0 0/0 .text            cLib_calcTimer<Uc>__FPUc */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void func_80CD8240(void* _this, u8* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_shield/d_a_obj_shield/func_80CD8240.s"
}
#pragma pop

/* 80CD825C-80CD8264 00187C 0008+00 1/0 0/0 0/0 .text            @36@__dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_80CD825C() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_shield/d_a_obj_shield/func_80CD825C.s"
}
#pragma pop

/* 80CD8264-80CD826C 001884 0008+00 1/0 0/0 0/0 .text            @20@__dt__12dBgS_ObjAcchFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_80CD8264() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_shield/d_a_obj_shield/func_80CD8264.s"
}
#pragma pop

/* 80CD832C-80CD832C 0000B8 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
