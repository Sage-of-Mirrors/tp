//
// Generated By: dol2asm
// Translation Unit: d/s/d_s_play
//

#include "d/s/d_s_play.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct stage_stag_info_class {};

struct scene_class {};

struct request_of_phase_process_class {};

struct mDoRst {
    static u8 mResetData[4 + 4 /* padding */];
};

struct mDoGph_gInf_c {
    struct bloom_c {
        /* 800095F8 */ void remove();
    };

    static u8 m_bloom[20];
    static u8 mFader[4];
};

struct mDoDvdThd_toMainRam_c {};

struct mDoDvdThd_mountXArchive_c {};

struct fopAc_ac_c {};

struct fopAcM_wt_c {
    static u8 mWaterCheck[84 + 4 /* padding */];
};

struct fopAcM_rc_c {
    static u8 mRoofCheck[80];
};

struct fopAcM_lc_c {
    static u8 mLineCheck[112];
};

struct fopAcM_gc_c {
    static u8 mGndCheck[84];
};

struct daYkgr_c {
    static u8 m_emitter[4];
};

struct daSus_c {
    /* 800313BC */ void reset();
    /* 800315A4 */ void execute();
};

struct daPy_py_c {
    /* 8015F660 */ void checkRoomRestartStart();
};

struct dVibration_c {
    /* 8006F268 */ void Run();
    /* 8006FF04 */ void Init();
    /* 8006FF38 */ void Pause();
    /* 8006FFF8 */ void Remove();
};

struct dTres_c {
    /* 8009BC18 */ void create();
    /* 8009BC60 */ void remove();
};

struct dSv_player_status_b_c {
    /* 80032B94 */ void onDarkClearLV(int);
    /* 80032BD0 */ void onTransformLV(int);
};

struct dSv_player_item_c {
    /* 80032FB8 */ void setItem(int, u8);
};

struct dSv_player_get_item_c {
    /* 80033E60 */ void onFirstBit(u8);
};

struct dSv_info_c {
    /* 80034FCC */ void init();
};

struct dSv_event_c {
    /* 8003498C */ void onEventBit(u16);
};

struct dSv_danBit_c {
    /* 80034B98 */ void onSwitch(int);
};

struct dStage_startStage_c {};

struct dStage_roomControl_c {
    /* 80024954 */ void resetArchiveBank(int);

    static u8 mProcID[4];
};

struct dScnPly_reg_HIO_c {
    /* 8025AD78 */ ~dScnPly_reg_HIO_c();
};

struct dScnPly_preLoad_HIO_c {
    /* 8025ADC0 */ ~dScnPly_preLoad_HIO_c();
};

struct dScnPly_env_otherHIO_c {
    /* 80259440 */ dScnPly_env_otherHIO_c();
    /* 8025AC0C */ ~dScnPly_env_otherHIO_c();
};

struct dScnPly_env_debugHIO_c {
    /* 80259468 */ dScnPly_env_debugHIO_c();
    /* 8025ABC4 */ ~dScnPly_env_debugHIO_c();
};

struct dScnPly_env_HIO_c {
    /* 8025AD04 */ ~dScnPly_env_HIO_c();
};

struct dScnPly_c {
    /* 80259400 */ void calcPauseTimer();
    /* 80259AC4 */ void resetGame();
    /* 80259BFC */ void offReset();
};

struct dRes_info_c {};

struct JKRHeap {};

struct dRes_control_c {
    /* 8003C078 */ void setRes(char const*, dRes_info_c*, int, char const*, u8, JKRHeap*);
    /* 8003C160 */ void syncRes(char const*, dRes_info_c*, int);
    /* 8003C470 */ void syncAllRes(dRes_info_c*, int);
    /* 8003C5BC */ void setStageRes(char const*, JKRHeap*);
};

struct dPa_control_c {
    /* 8004BDFC */ void readScene(u8, mDoDvdThd_toMainRam_c**);
    /* 8004BEB0 */ void createScene(void const*);
    /* 8004BFD4 */ void removeScene(bool);
    /* 8004C054 */ void cleanup();
    /* 8004C078 */ void calc3D();
    /* 8004C0EC */ void calc2D();
};

struct dMsgObject_c {
    /* 8023800C */ void readMessageGroup(mDoDvdThd_mountXArchive_c**);
};

struct dMpath_c {
    /* 8003FB70 */ void create();
    /* 8003FC70 */ void remove();
};

struct dMdl_mng_c {
    /* 8009C7AC */ void create();
    /* 8009C864 */ void remove();
    /* 8009C8C0 */ void reset();
};

struct dEyeHL_mng_c {
    /* 8009CA48 */ void update();
};

struct dEvt_control_c {
    /* 80042BBC */ void Step();
    /* 800431E8 */ void remove();
};

struct dDlst_window_c {
    /* 80051AC0 */ void setViewPort(f32, f32, f32, f32, f32, f32);
    /* 80051ADC */ void setScissor(f32, f32, f32, f32);
};

struct dDemo_c {
    /* 80039678 */ void create();
    /* 80039910 */ void remove();
    /* 80039DA4 */ void update();
};

struct dComIfG_play_c {
    /* 8002B22C */ void init();
    /* 8002B3B8 */ void setStartStage(dStage_startStage_c*);
    /* 8002B434 */ void getLayerNo_common_common(char const*, int, int);
    /* 8002C950 */ void getLayerNo_common(char const*, int, int);
    /* 8002C97C */ void getLayerNo(int);
    /* 8002CA1C */ void createSimpleModel();
    /* 8002CA70 */ void deleteSimpleModel();
};

struct dCcS {
    /* 80085ED4 */ void Ct();
    /* 80085F08 */ void Dt();
    /* 800872B0 */ void Move();
    /* 800872D0 */ void Draw();
};

struct dBgS {
    /* 8007493C */ void ClrMoveFlag();
    /* 800749A8 */ void Move();
};

struct dAttention_c {
    /* 80070198 */ dAttention_c(fopAc_ac_c*, u32);
    /* 80070774 */ ~dAttention_c();
    /* 80072924 */ void Run();
    /* 80072BD4 */ void Draw();
};

struct csXyz {};

struct create_tag_class {};

struct cXyz {};

struct cDylPhs {
    /* 8001884C */ void Link(request_of_phase_process_class*, s16);
    /* 80018890 */ void Unlink(request_of_phase_process_class*, s16);
};

struct cBgS_PolyInfo {
    /* 80268120 */ void ClearPi();
};

struct Z2SceneMgr {
    /* 802B68B0 */ void setInDarkness(bool);
    /* 802BA09C */ void check1stDynamicWave();
    /* 802BA120 */ void load2ndDynamicWave();
    /* 802BA294 */ void sceneBgmStart();
};

struct Z2AudioMgr {
    static u8 mAudioMgrPtr[4 + 4 /* padding */];
};

struct JUTGamePad {
    struct C3ButtonReset {
        static u8 sCallback[4];
        static u8 sCallbackArg[4 + 4 /* padding */];
    };
};

struct JUTAssertion {
    /* 802E4C3C */ void setMessageCount(int);
};

struct JKRExpHeap {};

struct JFWDisplay {
    static u8 sManager[4];
};

//
// Forward References:
//

extern "C" void calcPauseTimer__9dScnPly_cFv();
extern "C" void __ct__22dScnPly_env_otherHIO_cFv();
extern "C" void __ct__22dScnPly_env_debugHIO_cFv();
extern "C" static void dScnPly_Draw__FP9dScnPly_c();
extern "C" static void dScnPly_Execute__FP9dScnPly_c();
extern "C" static void dScnPly_IsDelete__F9dScnPly_c();
extern "C" static void dScnPly_Delete__FP9dScnPly_c();
extern "C" void resetGame__9dScnPly_cFv();
extern "C" void offReset__9dScnPly_cFv();
extern "C" static void phase_00__FP9dScnPly_c();
extern "C" static void phase_01__FP9dScnPly_c();
extern "C" static s32 phase_0__FP9dScnPly_c();
extern "C" static void phase_1__FP9dScnPly_c();
extern "C" static void phase_1_0__FP9dScnPly_c();
extern "C" static void phase_2__FP9dScnPly_c();
extern "C" static void phase_3__FP9dScnPly_c();
extern "C" static void phase_4__FP9dScnPly_c();
extern "C" static void phase_5__FP9dScnPly_c();
extern "C" static void phase_6__FP9dScnPly_c();
extern "C" static s32 phase_compleate__FPv();
extern "C" static void dScnPly_Create__FP11scene_class();
extern "C" void __dt__22dScnPly_env_debugHIO_cFv();
extern "C" void __dt__22dScnPly_env_otherHIO_cFv();
extern "C" void __sinit_d_s_play_cpp();
extern "C" void __dt__17dScnPly_env_HIO_cFv();
extern "C" void __dt__17dScnPly_reg_HIO_cFv();
extern "C" void __dt__21dScnPly_preLoad_HIO_cFv();
extern "C" extern char const* const d_s_d_s_play__stringBase0;

//
// External References:
//

extern "C" void mDoAud_setSceneName__FPCcll();
extern "C" void mDoAud_load1stDynamicWave__Fv();
extern "C" void mDoAud_resetRecover__Fv();
extern "C" void remove__Q213mDoGph_gInf_c7bloom_cFv();
extern "C" void mDoRst_resetCallBack__FiPv();
extern "C" void Link__7cDylPhsFP30request_of_phase_process_classs();
extern "C" void Unlink__7cDylPhsFP30request_of_phase_process_classs();
extern "C" void fopAcM_create__FsUlPC4cXyziPC5csXyzPC4cXyzSc();
extern "C" void fopOvlpM_IsPeek__Fv();
extern "C" void fopScnM_ChangeReq__FP11scene_classssUs();
extern "C" void fopMsgM_createExpHeap__FUlP7JKRHeap();
extern "C" void fopMsgM_destroyExpHeap__FP10JKRExpHeap();
extern "C" void fopDwIt_Begin__Fv();
extern "C" void fopDwIt_Next__FP16create_tag_class();
extern "C" void fpcM_Draw__FPv();
extern "C" void resetArchiveBank__20dStage_roomControl_cFi();
extern "C" void dStage_stagInfo_GetParticleNo__FP21stage_stag_info_classi();
extern "C" void dStage_infoCreate__Fv();
extern "C" void dStage_Create__Fv();
extern "C" void dStage_Delete__Fv();
extern "C" void init__14dComIfG_play_cFv();
extern "C" void setStartStage__14dComIfG_play_cFP19dStage_startStage_c();
extern "C" void getLayerNo_common_common__14dComIfG_play_cFPCcii();
extern "C" void getLayerNo_common__14dComIfG_play_cFPCcii();
extern "C" void getLayerNo__14dComIfG_play_cFi();
extern "C" void createSimpleModel__14dComIfG_play_cFv();
extern "C" void deleteSimpleModel__14dComIfG_play_cFv();
extern "C" void dComIfG_resetToOpening__FP11scene_class();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGs_BossLife_public_Set__FSc();
extern "C" void dComIfGp_calcNowRegion__Fv();
extern "C" void dComIfGp_world_dark_set__FUc();
extern "C" void dComLbG_PhaseHandler__FP30request_of_phase_process_classPPFPv_iPv();
extern "C" void reset__7daSus_cFv();
extern "C" void execute__7daSus_cFv();
extern "C" void onDarkClearLV__21dSv_player_status_b_cFi();
extern "C" void onTransformLV__21dSv_player_status_b_cFi();
extern "C" void setItem__17dSv_player_item_cFiUc();
extern "C" void onFirstBit__21dSv_player_get_item_cFUc();
extern "C" void onEventBit__11dSv_event_cFUs();
extern "C" void onSwitch__12dSv_danBit_cFi();
extern "C" void init__10dSv_info_cFv();
extern "C" void create__7dDemo_cFv();
extern "C" void remove__7dDemo_cFv();
extern "C" void update__7dDemo_cFv();
extern "C" void setRes__14dRes_control_cFPCcP11dRes_info_ciPCcUcP7JKRHeap();
extern "C" void syncRes__14dRes_control_cFPCcP11dRes_info_ci();
extern "C" void syncAllRes__14dRes_control_cFP11dRes_info_ci();
extern "C" void setStageRes__14dRes_control_cFPCcP7JKRHeap();
extern "C" void create__8dMpath_cFv();
extern "C" void remove__8dMpath_cFv();
extern "C" void Step__14dEvt_control_cFv();
extern "C" void remove__14dEvt_control_cFv();
extern "C" void readScene__13dPa_control_cFUcPP21mDoDvdThd_toMainRam_c();
extern "C" void createScene__13dPa_control_cFPCv();
extern "C" void removeScene__13dPa_control_cFb();
extern "C" void cleanup__13dPa_control_cFv();
extern "C" void calc3D__13dPa_control_cFv();
extern "C" void calc2D__13dPa_control_cFv();
extern "C" void setViewPort__14dDlst_window_cFffffff();
extern "C" void setScissor__14dDlst_window_cFffff();
extern "C" void Run__12dVibration_cFv();
extern "C" void Init__12dVibration_cFv();
extern "C" void Pause__12dVibration_cFv();
extern "C" void Remove__12dVibration_cFv();
extern "C" void __ct__12dAttention_cFP10fopAc_ac_cUl();
extern "C" void __dt__12dAttention_cFv();
extern "C" void Run__12dAttention_cFv();
extern "C" void Draw__12dAttention_cFv();
extern "C" void ClrMoveFlag__4dBgSFv();
extern "C" void Move__4dBgSFv();
extern "C" void Ct__4dCcSFv();
extern "C" void Dt__4dCcSFv();
extern "C" void Move__4dCcSFv();
extern "C" void Draw__4dCcSFv();
extern "C" void execItemGet__FUc();
extern "C" void create__7dTres_cFv();
extern "C" void remove__7dTres_cFv();
extern "C" void create__10dMdl_mng_cFv();
extern "C" void remove__10dMdl_mng_cFv();
extern "C" void reset__10dMdl_mng_cFv();
extern "C" void update__12dEyeHL_mng_cFv();
extern "C" void checkRoomRestartStart__9daPy_py_cFv();
extern "C" void dKy_getdaytime_hour__Fv();
extern "C" void dKy_getdaytime_minute__Fv();
extern "C" void dKy_itudemo_se__Fv();
extern "C" void dKy_get_dayofweek__Fv();
extern "C" void dKy_darkworld_check__Fv();
extern "C" void dKy_darkworld_stage_check__FPCci();
extern "C" void dKy_darkworld_spot_check__FPCci();
extern "C" void dKy_darkworld_Area_set__FPCci();
extern "C" void dMeter2Info_setCloth__FUcb();
extern "C" void dMeter2Info_setSword__FUcb();
extern "C" void dMeter2Info_setShield__FUcb();
extern "C" void readMessageGroup__12dMsgObject_cFPP25mDoDvdThd_mountXArchive_c();
extern "C" void func_80252E70(void* _this, s8*);
extern "C" void ClearPi__13cBgS_PolyInfoFv();
extern "C" void setInDarkness__10Z2SceneMgrFb();
extern "C" void check1stDynamicWave__10Z2SceneMgrFv();
extern "C" void load2ndDynamicWave__10Z2SceneMgrFv();
extern "C" void sceneBgmStart__10Z2SceneMgrFv();
extern "C" void __dl__FPv();
extern "C" void setMessageCount__12JUTAssertionFi();
extern "C" void JUTReportConsole_f();
extern "C" void OSGetTime();
extern "C" void __register_global_object();
extern "C" void _savegpr_26();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_26();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" void strcmp();
extern "C" extern void* g_fopScn_Method[5 + 1 /* padding */];
extern "C" extern void* g_fpcNd_Method[5 + 1 /* padding */];
extern "C" extern void* __vt__14mDoHIO_entry_c[3];
extern "C" u8 m_bloom__13mDoGph_gInf_c[20];
extern "C" u8 mLineCheck__11fopAcM_lc_c[112];
extern "C" u8 mGndCheck__11fopAcM_gc_c[84];
extern "C" u8 mRoofCheck__11fopAcM_rc_c[80];
extern "C" u8 mWaterCheck__11fopAcM_wt_c[84 + 4 /* padding */];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 g_save_bit_HIO[1184 + 4 /* padding */];
extern "C" extern u8 g_Counter[12 + 4 /* padding */];
extern "C" extern u8 data_804505F0[8];
extern "C" extern u32 g_blackColor;
extern "C" extern u32 g_saftyWhiteColor;
extern "C" extern u8 struct_80450BB8[4];
extern "C" u8 mFader__13mDoGph_gInf_c[4];
extern "C" extern u8 struct_80450BE4[4];
extern "C" u8 mResetData__6mDoRst[4 + 4 /* padding */];
extern "C" u8 mProcID__20dStage_roomControl_c[4];
extern "C" extern u8 data_80450D68[4];
extern "C" extern u8 struct_80450D8C[4];
extern "C" u8 m_emitter__8daYkgr_c[4];
extern "C" extern u8 data_80450EC4[4];
extern "C" extern u8 data_80450ED0[4];
extern "C" u8 sManager__10JFWDisplay[4];
extern "C" u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];
extern "C" u8 sCallback__Q210JUTGamePad13C3ButtonReset[4];
extern "C" u8 sCallbackArg__Q210JUTGamePad13C3ButtonReset[4 + 4 /* padding */];
extern "C" extern u8 struct_80451500[4];

//
// Declarations:
//

/* ############################################################################################## */
/* 804510F8-80451100 0005F8 0008+00 2/2 0/0 0/0 .sbss            resPhase */
static u8 resPhase[8];

/* 80451100-80451108 000600 0008+00 2/2 0/0 0/0 .sbss            dylPhase */
static u8 dylPhase[8];

/* 80451108-8045110C 000608 0004+00 1/1 0/0 0/0 .sbss            dylPreLoadTime1 */
static u8 dylPreLoadTime1[4];

/* 8045110C-80451110 00060C 0004+00 1/1 0/0 0/0 .sbss            None */
static u8 data_8045110C[4];

/* 80451110-80451114 000610 0004+00 1/1 0/0 0/0 .sbss            resPreLoadTime0 */
static u8 resPreLoadTime0[4];

/* 80451114-80451118 000614 0004+00 1/1 0/0 0/0 .sbss            None */
static u8 data_80451114[4];

/* 80451118-8045111C 000618 0004+00 1/1 0/0 0/0 .sbss            resPreLoadTime1 */
static u8 resPreLoadTime1[4];

/* 8045111C-80451120 00061C 0004+00 1/1 0/0 0/0 .sbss            None */
static u8 data_8045111C[4];

/* 80451120-80451124 000620 0004+00 1/1 0/0 0/0 .sbss            g_preLoadHIO */
static u8 g_preLoadHIO[4];

/* 80451124-80451128 -00001 0004+00 3/3 7/7 38/38 .sbss            None */
/* 80451124 0001+00 data_80451124 None */
/* 80451125 0003+00 data_80451125 None */
extern u8 struct_80451124[4];
u8 struct_80451124[4];

/* 80259400-80259440 253D40 0040+00 1/1 0/0 0/0 .text            calcPauseTimer__9dScnPly_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dScnPly_c::calcPauseTimer() {
    nofralloc
#include "asm/d/s/d_s_play/calcPauseTimer__9dScnPly_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 803C3158-803C3188 020278 002E+02 1/1 0/0 0/0 .data            l_wipeType$4081 */
SECTION_DATA static u8 l_wipeType[46 + 2 /* padding */] = {
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x11,
    0x00,
    0x02,
    0x00,
    0x02,
    0x00,
    0x01,
    0x00,
    0x03,
    0x00,
    0x01,
    0x00,
    0x04,
    0x00,
    0x04,
    0x00,
    0x05,
    0x00,
    0x05,
    0x00,
    0x06,
    0x00,
    0x07,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x02,
    0x00,
    0x02,
    0x00,
    0x02,
    0x00,
    0x02,
    0x00,
    0x02,
    0x00,
    0x08,
    0x00,
    0x08,
    /* padding */
    0x00,
    0x00,
};

/* 803C3188-803C3194 0202A8 000A+02 1/1 0/0 0/0 .data            camparamarc$4608 */
SECTION_DATA static u8 camparamarc[10 + 2 /* padding */] = {
    0x43,
    0x61,
    0x6D,
    0x50,
    0x61,
    0x72,
    0x61,
    0x6D,
    0x00,
    0x00,
    /* padding */
    0x00,
    0x00,
};

/* 803C3194-803C31C0 -00001 002C+00 1/1 0/0 0/0 .data            l_method$4860 */
SECTION_DATA static void* l_method[11] = {
    (void*)phase_00__FP9dScnPly_c, (void*)phase_1__FP9dScnPly_c, (void*)phase_1_0__FP9dScnPly_c,
    (void*)phase_01__FP9dScnPly_c, (void*)phase_0__FP9dScnPly_c, (void*)phase_2__FP9dScnPly_c,
    (void*)phase_3__FP9dScnPly_c,  (void*)phase_4__FP9dScnPly_c, (void*)phase_5__FP9dScnPly_c,
    (void*)phase_6__FP9dScnPly_c,  (void*)phase_compleate__FPv,
};

/* 803C31C0-803C31D4 -00001 0014+00 2/0 0/0 0/0 .data            l_dScnPly_Method */
SECTION_DATA static void* l_dScnPly_Method[5] = {
    (void*)dScnPly_Create__FP11scene_class, (void*)dScnPly_Delete__FP9dScnPly_c,
    (void*)dScnPly_Execute__FP9dScnPly_c,   (void*)dScnPly_IsDelete__F9dScnPly_c,
    (void*)dScnPly_Draw__FP9dScnPly_c,
};

/* 803C31D4-803C31FC -00001 0028+00 0/0 0/0 1/0 .data            g_profile_PLAY_SCENE */
SECTION_DATA extern void* g_profile_PLAY_SCENE[10] = {
    (void*)NULL,
    (void*)0x0001FFFD,
    (void*)0x000B0000,
    (void*)&g_fpcNd_Method,
    (void*)0x000001D8,
    (void*)NULL,
    (void*)NULL,
    (void*)&g_fopScn_Method,
    (void*)&l_dScnPly_Method,
    (void*)NULL,
};

/* 803C31FC-803C3224 -00001 0028+00 0/0 0/0 1/0 .data            g_profile_OPENING_SCENE */
SECTION_DATA extern void* g_profile_OPENING_SCENE[10] = {
    (void*)NULL,
    (void*)0x0001FFFD,
    (void*)0x000C0000,
    (void*)&g_fpcNd_Method,
    (void*)0x000001D8,
    (void*)NULL,
    (void*)NULL,
    (void*)&g_fopScn_Method,
    (void*)&l_dScnPly_Method,
    (void*)NULL,
};

/* 803C3224-803C3230 020344 000C+00 3/3 0/0 0/0 .data            __vt__22dScnPly_env_debugHIO_c */
SECTION_DATA extern void* __vt__22dScnPly_env_debugHIO_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__22dScnPly_env_debugHIO_cFv,
};

/* 803C3230-803C323C 020350 000C+00 3/3 0/0 0/0 .data            __vt__22dScnPly_env_otherHIO_c */
SECTION_DATA extern void* __vt__22dScnPly_env_otherHIO_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__22dScnPly_env_otherHIO_cFv,
};

/* 80454F18-80454F1C 003518 0002+02 1/0 0/0 0/0 .sdata2          T_JOINT_dylKeyTbl */
SECTION_SDATA2 static u16 T_JOINT_dylKeyTbl[1 + 1 /* padding */] = {
    0x0106,
    /* padding */
    0x0000,
};

/* 80454F1C-80454F20 00351C 0004+00 1/1 0/0 0/0 .sdata2          @4055 */
SECTION_SDATA2 static f32 lit_4055 = 255.0f;

/* 80259440-80259468 253D80 0028+00 1/1 0/0 0/0 .text            __ct__22dScnPly_env_otherHIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dScnPly_env_otherHIO_c::dScnPly_env_otherHIO_c() {
    nofralloc
#include "asm/d/s/d_s_play/__ct__22dScnPly_env_otherHIO_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80454F20-80454F24 003520 0004+00 1/1 0/0 0/0 .sdata2          @4066 */
SECTION_SDATA2 static f32 lit_4066 = -100.0f;

/* 80454F24-80454F28 003524 0004+00 1/1 0/0 0/0 .sdata2          @4067 */
SECTION_SDATA2 static f32 lit_4067 = 100.0f;

/* 80454F28-80454F2C 003528 0004+00 2/2 0/0 0/0 .sdata2          @4068 */
SECTION_SDATA2 static u8 lit_4068[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 80259468-802594AC 253DA8 0044+00 1/1 0/0 0/0 .text            __ct__22dScnPly_env_debugHIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dScnPly_env_debugHIO_c::dScnPly_env_debugHIO_c() {
    nofralloc
#include "asm/d/s/d_s_play/__ct__22dScnPly_env_debugHIO_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80454F2C-80454F30 00352C 0004+00 1/1 0/0 0/0 .sdata2          @4100 */
SECTION_SDATA2 static u32 lit_4100 = 0x2A1E46FF;

/* 802594AC-802597B8 253DEC 030C+00 1/0 0/0 0/0 .text            dScnPly_Draw__FP9dScnPly_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void dScnPly_Draw(dScnPly_c* param_0) {
    nofralloc
#include "asm/d/s/d_s_play/dScnPly_Draw__FP9dScnPly_c.s"
}
#pragma pop

/* 802597B8-8025987C 2540F8 00C4+00 1/0 0/0 0/0 .text            dScnPly_Execute__FP9dScnPly_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void dScnPly_Execute(dScnPly_c* param_0) {
    nofralloc
#include "asm/d/s/d_s_play/dScnPly_Execute__FP9dScnPly_c.s"
}
#pragma pop

/* 8025987C-802598AC 2541BC 0030+00 1/0 0/0 0/0 .text            dScnPly_IsDelete__F9dScnPly_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void dScnPly_IsDelete(dScnPly_c param_0) {
    nofralloc
#include "asm/d/s/d_s_play/dScnPly_IsDelete__F9dScnPly_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 8039A2DF-8039A2E7 02693F 0008+00 1/0 0/0 0/0 .rodata          None */
extern "C" char const* const stringBase_8039A2DF;

/* 80450760-80450764 -00001 0004+00 1/0 0/0 0/0 .sdata           T_JOINT_resName */
extern "C" void* T_JOINT_resName;

/* 80454F18-80454F1C 003518 0002+02 1/0 0/0 0/0 .sdata2          T_JOINT_dylKeyTbl */
extern "C" u16 T_JOINT_dylKeyTbl[1 + 1 /* padding */];

/* 8039A2C8-8039A2D8 -00001 0010+00 4/4 0/0 0/0 .rodata          PreLoadInfoT */
SECTION_RODATA static void* const PreLoadInfoT[4] = {
    (void*)(((char*)&d_s_d_s_play__stringBase0) + 0x7),
    (void*)&T_JOINT_dylKeyTbl,
    (void*)&T_JOINT_resName,
    (void*)0x01010000,
};
COMPILER_STRIP_GATE(0x8039A2C8, &PreLoadInfoT);

/* 8039A2D8-8039A2D8 026938 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_8039A2D8 = "Always";
SECTION_DEAD static char const* const stringBase_8039A2DF = "T_JOINT";
#pragma pop

/* 80450760-80450764 -00001 0004+00 1/0 0/0 0/0 .sdata           T_JOINT_resName */
SECTION_SDATA static void* T_JOINT_resName = (void*)&d_s_d_s_play__stringBase0;

/* 80450764-80450768 -00001 0004+00 4/4 0/0 0/0 .sdata           None */
SECTION_SDATA static u8 struct_80450764[4] = {
    /* 80450764 0001+00 data_80450764 None */
    0xFF,
    /* 80450765 0003+00 data_80450765 None */
    0x01,
    0x00,
    0x00,
};

/* 802598AC-80259AC4 2541EC 0218+00 1/0 0/0 0/0 .text            dScnPly_Delete__FP9dScnPly_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void dScnPly_Delete(dScnPly_c* param_0) {
    nofralloc
#include "asm/d/s/d_s_play/dScnPly_Delete__FP9dScnPly_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 8039A2D8-8039A2D8 026938 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_8039A2E7 = "F_SP109";
SECTION_DEAD static char const* const stringBase_8039A2EF = "F_SP116";
#pragma pop

/* 80259AC4-80259BFC 254404 0138+00 1/1 0/0 0/0 .text            resetGame__9dScnPly_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dScnPly_c::resetGame() {
    nofralloc
#include "asm/d/s/d_s_play/resetGame__9dScnPly_cFv.s"
}
#pragma pop

/* 80259BFC-80259C70 25453C 0074+00 1/1 0/0 0/0 .text            offReset__9dScnPly_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dScnPly_c::offReset() {
    nofralloc
#include "asm/d/s/d_s_play/offReset__9dScnPly_cFv.s"
}
#pragma pop

/* 80259C70-80259CAC 2545B0 003C+00 1/0 0/0 0/0 .text            phase_00__FP9dScnPly_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void phase_00(dScnPly_c* param_0) {
    nofralloc
#include "asm/d/s/d_s_play/phase_00__FP9dScnPly_c.s"
}
#pragma pop

/* 80259CAC-80259D7C 2545EC 00D0+00 1/0 0/0 0/0 .text            phase_01__FP9dScnPly_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void phase_01(dScnPly_c* param_0) {
    nofralloc
#include "asm/d/s/d_s_play/phase_01__FP9dScnPly_c.s"
}
#pragma pop

/* 80259D7C-80259D84 2546BC 0008+00 1/0 0/0 0/0 .text            phase_0__FP9dScnPly_c */
static s32 phase_0(dScnPly_c* param_0) {
    return 2;
}

/* ############################################################################################## */
/* 8039A2D8-8039A2D8 026938 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_8039A2F7 = "F_SP108";
SECTION_DEAD static char const* const stringBase_8039A2FF = "F_SP115";
SECTION_DEAD static char const* const stringBase_8039A307 = "F_SP117";
SECTION_DEAD static char const* const stringBase_8039A30F = "F_SP104";
SECTION_DEAD static char const* const stringBase_8039A317 = "D_SB10";
SECTION_DEAD static char const* const stringBase_8039A31E = "D_MN08D";
SECTION_DEAD static char const* const stringBase_8039A326 = "R_SP107";
SECTION_DEAD static char const* const stringBase_8039A32E = "F_SP121";
SECTION_DEAD static char const* const stringBase_8039A336 = "F_SP127";
SECTION_DEAD static char const* const stringBase_8039A33E = "Start StageName:RoomNo [%s:%d]\n";
SECTION_DEAD static char const* const stringBase_8039A35E = "Stg_00";
#pragma pop

/* 80259D84-8025A438 2546C4 06B4+00 1/0 0/0 0/0 .text            phase_1__FP9dScnPly_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void phase_1(dScnPly_c* param_0) {
    nofralloc
#include "asm/d/s/d_s_play/phase_1__FP9dScnPly_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 8039A2D8-8039A2D8 026938 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_8039A365 = "Event";
SECTION_DEAD static char const* const stringBase_8039A36B = "/res/Object/";
SECTION_DEAD static char const* const stringBase_8039A378 = "CamParam";
/* @stringBase0 padding */
SECTION_DEAD static char const* const pad_8039A381 = "\0\0\0\0\0\0";
#pragma pop

/* 8025A438-8025A4F8 254D78 00C0+00 1/0 0/0 0/0 .text            phase_1_0__FP9dScnPly_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void phase_1_0(dScnPly_c* param_0) {
    nofralloc
#include "asm/d/s/d_s_play/phase_1_0__FP9dScnPly_c.s"
}
#pragma pop

/* 8025A4F8-8025A5D4 254E38 00DC+00 1/0 0/0 0/0 .text            phase_2__FP9dScnPly_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void phase_2(dScnPly_c* param_0) {
    nofralloc
#include "asm/d/s/d_s_play/phase_2__FP9dScnPly_c.s"
}
#pragma pop

/* 8025A5D4-8025A654 254F14 0080+00 1/0 0/0 0/0 .text            phase_3__FP9dScnPly_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void phase_3(dScnPly_c* param_0) {
    nofralloc
#include "asm/d/s/d_s_play/phase_3__FP9dScnPly_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 80430778-80430784 05D498 000C+00 1/1 0/0 0/0 .bss             @4041 */
static u8 lit_4041[12];

/* 80430784-80430790 05D4A4 000C+00 0/1 0/0 0/0 .bss             @4049 */
#pragma push
#pragma force_active on
static u8 lit_4049[12];
#pragma pop

/* 80430790-8043079C 05D4B0 000C+00 0/1 0/0 0/0 .bss             @4050 */
#pragma push
#pragma force_active on
static u8 lit_4050[12];
#pragma pop

/* 8043079C-804307E0 05D4BC 0044+00 1/2 3/3 0/0 .bss             g_envHIO */
extern u8 g_envHIO[68];
u8 g_envHIO[68];

/* 80454F30-80454F34 003530 0004+00 1/1 0/0 0/0 .sdata2          @4804 */
SECTION_SDATA2 static f32 lit_4804 = 608.0f;

/* 80454F34-80454F38 003534 0004+00 1/1 0/0 0/0 .sdata2          @4805 */
SECTION_SDATA2 static f32 lit_4805 = 448.0f;

/* 80454F38-80454F40 003538 0004+04 1/1 0/0 0/0 .sdata2          @4806 */
SECTION_SDATA2 static f32 lit_4806[1 + 1 /* padding */] = {
    1.0f,
    /* padding */
    0.0f,
};

/* 8025A654-8025A9F4 254F94 03A0+00 1/0 0/0 0/0 .text            phase_4__FP9dScnPly_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void phase_4(dScnPly_c* param_0) {
    nofralloc
#include "asm/d/s/d_s_play/phase_4__FP9dScnPly_c.s"
}
#pragma pop

/* 8025A9F4-8025AAC0 255334 00CC+00 1/0 0/0 0/0 .text            phase_5__FP9dScnPly_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void phase_5(dScnPly_c* param_0) {
    nofralloc
#include "asm/d/s/d_s_play/phase_5__FP9dScnPly_c.s"
}
#pragma pop

/* 8025AAC0-8025AB8C 255400 00CC+00 1/0 0/0 0/0 .text            phase_6__FP9dScnPly_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void phase_6(dScnPly_c* param_0) {
    nofralloc
#include "asm/d/s/d_s_play/phase_6__FP9dScnPly_c.s"
}
#pragma pop

/* 8025AB8C-8025AB94 2554CC 0008+00 1/0 0/0 0/0 .text            phase_compleate__FPv */
static s32 phase_compleate(void* param_0) {
    return 4;
}

/* 8025AB94-8025ABC4 2554D4 0030+00 1/0 0/0 0/0 .text            dScnPly_Create__FP11scene_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void dScnPly_Create(scene_class* param_0) {
    nofralloc
#include "asm/d/s/d_s_play/dScnPly_Create__FP11scene_class.s"
}
#pragma pop

/* 8025ABC4-8025AC0C 255504 0048+00 1/0 0/0 0/0 .text            __dt__22dScnPly_env_debugHIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dScnPly_env_debugHIO_c::~dScnPly_env_debugHIO_c() {
    nofralloc
#include "asm/d/s/d_s_play/__dt__22dScnPly_env_debugHIO_cFv.s"
}
#pragma pop

/* 8025AC0C-8025AC54 25554C 0048+00 1/0 0/0 0/0 .text            __dt__22dScnPly_env_otherHIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dScnPly_env_otherHIO_c::~dScnPly_env_otherHIO_c() {
    nofralloc
#include "asm/d/s/d_s_play/__dt__22dScnPly_env_otherHIO_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 803C323C-803C3248 02035C 000C+00 2/2 0/0 0/0 .data            __vt__17dScnPly_env_HIO_c */
SECTION_DATA extern void* __vt__17dScnPly_env_HIO_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__17dScnPly_env_HIO_cFv,
};

/* 803C3248-803C3254 020368 000C+00 2/2 0/0 0/0 .data            __vt__17dScnPly_reg_HIO_c */
SECTION_DATA extern void* __vt__17dScnPly_reg_HIO_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__17dScnPly_reg_HIO_cFv,
};

/* 803C3254-803C3260 020374 000C+00 2/2 0/0 0/0 .data            __vt__21dScnPly_preLoad_HIO_c */
SECTION_DATA extern void* __vt__21dScnPly_preLoad_HIO_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__21dScnPly_preLoad_HIO_cFv,
};

/* 80451128-80451130 000628 0004+04 1/1 0/0 0/0 .sbss            g_regHIO */
static u8 g_regHIO[4 + 4 /* padding */];

/* 8025AC54-8025AD04 255594 00B0+00 0/0 1/0 0/0 .text            __sinit_d_s_play_cpp */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __sinit_d_s_play_cpp() {
    nofralloc
#include "asm/d/s/d_s_play/__sinit_d_s_play_cpp.s"
}
#pragma pop

#pragma push
#pragma force_active on
REGISTER_CTORS(0x8025AC54, __sinit_d_s_play_cpp);
#pragma pop

/* 8025AD04-8025AD78 255644 0074+00 2/1 0/0 0/0 .text            __dt__17dScnPly_env_HIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dScnPly_env_HIO_c::~dScnPly_env_HIO_c() {
    nofralloc
#include "asm/d/s/d_s_play/__dt__17dScnPly_env_HIO_cFv.s"
}
#pragma pop

/* 8025AD78-8025ADC0 2556B8 0048+00 2/1 0/0 0/0 .text            __dt__17dScnPly_reg_HIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dScnPly_reg_HIO_c::~dScnPly_reg_HIO_c() {
    nofralloc
#include "asm/d/s/d_s_play/__dt__17dScnPly_reg_HIO_cFv.s"
}
#pragma pop

/* 8025ADC0-8025AE1C 255700 005C+00 2/1 0/0 0/0 .text            __dt__21dScnPly_preLoad_HIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dScnPly_preLoad_HIO_c::~dScnPly_preLoad_HIO_c() {
    nofralloc
#include "asm/d/s/d_s_play/__dt__21dScnPly_preLoad_HIO_cFv.s"
}
#pragma pop

/* 8039A2D8-8039A2D8 026938 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
