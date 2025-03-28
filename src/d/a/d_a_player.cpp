//
// Generated By: dol2asm
// Translation Unit: d/a/d_a_player
//

#include "d/a/d_a_player.h"
#include "dol2asm.h"
#include "dolphin/mtx/mtx.h"
#include "dolphin/types.h"
#include "f_op/f_op_actor_mng.h"

//
// Types:
//

struct mDoMtx_stack_c {
    /* 8000CE38 */ void scaleM(f32, f32, f32);

    static u8 now[48];
};

struct daAlink_c {
    /* 800A0744 */ void setLookPosFromOut(cXyz*);
    /* 800BDF60 */ void startRestartRoom(u32, int, int, int);
    /* 800D72BC */ void setDamagePoint(int, int, int, int);
    /* 800E01CC */ void cancelBoomerangLock(fopAc_ac_c*);
    /* 800E0244 */ void checkBoomerangChargeEnd();
    /* 800E02B8 */ void checkBoomerangCarry(fopAc_ac_c*);
    /* 800E7AEC */ void setFmChainPosFromOut(fopAc_ac_c*, cXyz*, int);
};

struct dRes_control_c {
    /* 8003C2EC */ void getRes(char const*, s32, dRes_info_c*, int);
    /* 8003C400 */ void getIDRes(char const*, u16, dRes_info_c*, int);
};

struct JMath {
    static u8 sincosTable_[65536];
};

struct J3DShape {
    static u8 sOldVcdVatCmd[4];
};

struct J3DAnmLoaderDataBaseFlag {};

struct J3DAnmLoaderDataBase {
    /* 80337B40 */ void load(void const*, J3DAnmLoaderDataBaseFlag);
};

//
// Forward References:
//

extern "C" void checkAnmEnd__16daPy_frameCtrl_cFv();
extern "C" void updateFrame__16daPy_frameCtrl_cFv();
extern "C" void setFrameCtrl__16daPy_frameCtrl_cFUcssff();
extern "C" void initOffset__20daPy_boomerangMove_cFPC4cXyz();
extern "C" void posMove__20daPy_boomerangMove_cFP4cXyzPsP10fopAc_ac_cs();
extern "C" void bgCheckAfterOffset__20daPy_boomerangMove_cFPC4cXyz();
extern "C" void setParamData__9daPy_py_cFiiii();
extern "C" void checkFishingRodItem__9daPy_py_cFi();
extern "C" void checkBombItem__9daPy_py_cFi();
extern "C" void checkBottleItem__9daPy_py_cFi();
extern "C" void checkDrinkBottleItem__9daPy_py_cFi();
extern "C" void checkOilBottleItem__9daPy_py_cFi();
extern "C" void checkOpenBottleItem__9daPy_py_cFi();
extern "C" void checkBowItem__9daPy_py_cFi();
extern "C" void checkHookshotItem__9daPy_py_cFi();
extern "C" void checkTradeItem__9daPy_py_cFi();
extern "C" void checkDungeonWarpItem__9daPy_py_cFi();
extern "C" void setActor__16daPy_actorKeep_cFv();
extern "C" void setData__16daPy_actorKeep_cFP10fopAc_ac_c();
extern "C" void clearData__16daPy_actorKeep_cFv();
extern "C" void __ct__14daPy_anmHeap_cFUl();
extern "C" void __dt__14daPy_anmHeap_cFv();
extern "C" void initData__14daPy_anmHeap_cFv();
extern "C" void mallocBuffer__14daPy_anmHeap_cFv();
extern "C" void createHeap__14daPy_anmHeap_cFQ214daPy_anmHeap_c16daAlinkHEAP_TYPE();
extern "C" void loadData__14daPy_anmHeap_cFUs();
extern "C" void loadDataIdx__14daPy_anmHeap_cFUs();
extern "C" void loadDataPriIdx__14daPy_anmHeap_cFUs();
extern "C" void loadDataDemoRID__14daPy_anmHeap_cFUsUs();
extern "C" void setAnimeHeap__14daPy_anmHeap_cFv();
extern "C" void draw__18daPy_sightPacket_cFv();
extern "C" void setSight__18daPy_sightPacket_cFv();
extern "C" void setSightImage__18daPy_sightPacket_cFP7ResTIMG();
extern "C" void checkMasterSwordEquip__9daPy_py_cFv();
extern "C" void checkWoodShieldEquip__9daPy_py_cFv();
extern "C" void getAttentionOffsetY__9daPy_py_cFv();
extern "C" void checkNowWolfEyeUp__9daPy_py_cFv();
extern "C" void forceRestartRoom__9daPy_py_cFiUli();
extern "C" void setFmChainPos__9daPy_py_cFP10fopAc_ac_cP4cXyzi();
extern "C" void cancelFmChainGrab__9daPy_py_cFv();
extern "C" void setLookPos__9daPy_py_cFP4cXyz();
extern "C" void setPlayerSe__9daPy_py_cFUl();
extern "C" void linkGrabSubjectNoDraw__9daPy_py_cFP10fopAc_ac_c();
extern "C" void wolfGrabSubjectNoDraw__9daPy_py_cFP10fopAc_ac_c();
extern "C" void checkRoomRestartStart__9daPy_py_cFv();
extern "C" void checkCarryStartLightBallA__9daPy_py_cFv();
extern "C" void checkCarryStartLightBallB__9daPy_py_cFv();
extern "C" void getSpinnerRideSpeed__9daPy_py_cCFv();
extern "C" void checkSpinnerReflectEffect__9daPy_py_cFv();
extern "C" void checkBoomerangCharge__9daPy_py_cFv();
extern "C" bool checkBoomerangChargeTime__9daPy_py_cFv();
extern "C" void getThrowBoomerangActor__9daPy_py_cFv();
extern "C" void cancelBoomerangLockActor__9daPy_py_cFP10fopAc_ac_c();
extern "C" void setPlayerDamage__9daPy_py_cFii();
extern "C" void setMidnaMotionNum__9daPy_py_cFi();
extern "C" void setMidnaFaceNum__9daPy_py_cFi();
extern "C" void daPy_addCalcShort__FPsssss();
extern "C" extern void* __vt__18daPy_sightPacket_c[4 + 1 /* padding */];
extern "C" u8 m_midnaActor__9daPy_py_c[4];

//
// External References:
//

extern "C" void scaleM__14mDoMtx_stack_cFfff();
extern "C" void mDoExt_createSolidHeapFromGameToCurrent__FPP7JKRHeapUlUl();
extern "C" void mDoExt_adjustSolidHeap__FP12JKRSolidHeap();
extern "C" void mDoExt_destroySolidHeap__FP12JKRSolidHeap();
extern "C" void mDoExt_setCurrentHeap__FP7JKRHeap();
extern "C" void mDoLib_project__FP3VecP3Vec();
extern "C" void fopAcIt_Judge__FPFPvPv_PvPv();
extern "C" void fpcSch_JudgeByID__FPvPv();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void getIDRes__14dRes_control_cFPCcUsP11dRes_info_ci();
extern "C" void set__12dDlst_list_cFRPP12dDlst_base_cRPP12dDlst_base_cP12dDlst_base_c();
extern "C" void setLookPosFromOut__9daAlink_cFP4cXyz();
extern "C" void startRestartRoom__9daAlink_cFUliii();
extern "C" void setDamagePoint__9daAlink_cFiiii();
extern "C" void cancelBoomerangLock__9daAlink_cFP10fopAc_ac_c();
extern "C" void checkBoomerangChargeEnd__9daAlink_cFv();
extern "C" void checkBoomerangCarry__9daAlink_cFP10fopAc_ac_c();
extern "C" void setFmChainPosFromOut__9daAlink_cFP10fopAc_ac_cP4cXyzi();
extern "C" void __dt__18daPy_sightPacket_cFv();
extern "C" void cM_atan2s__Fff();
extern "C" void cM_rndF__Ff();
extern "C" void freeAll__7JKRHeapFv();
extern "C" void* __nw__FUl();
extern "C" void* __nwa__FUl();
extern "C" void* __nwa__FUli();
extern "C" void __dl__FPv();
extern "C" void readIdxResource__10JKRArchiveFPvUlUl();
extern "C" void reinitGX__6J3DSysFv();
extern "C" void update__12J3DFrameCtrlFv();
extern "C" void __ct__15J3DAnmTransformFsPfPsPf();
extern "C" void __ct__19J3DAnmTextureSRTKeyFv();
extern "C" void __ct__16J3DAnmTexPatternFv();
extern "C" void load__20J3DAnmLoaderDataBaseFPCv24J3DAnmLoaderDataBaseFlag();
extern "C" void GXSetVtxDesc();
extern "C" void GXClearVtxDesc();
extern "C" void GXSetVtxAttrFmt();
extern "C" void GXInitTexObj();
extern "C" void GXInitTexObjLOD();
extern "C" void GXLoadTexObj();
extern "C" void GXSetNumIndStages();
extern "C" void GXSetTevColor();
extern "C" void GXSetTevOrder();
extern "C" void GXCallDisplayList();
extern "C" void GXLoadPosMtxImm();
extern "C" void GXSetCurrentMtx();
extern "C" void _savegpr_27();
extern "C" void _savegpr_29();
extern "C" void _restgpr_27();
extern "C" void _restgpr_29();
extern "C" extern void* __vt__18mDoExt_transAnmBas[5];
extern "C" extern void* __vt__18J3DAnmTransformKey[5];
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" u8 mDemoArcName__20dStage_roomControl_c[10 + 2 /* padding */];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" u8 sincosTable___5JMath[65536];
extern "C" extern u32 __float_nan;
extern "C" u8 sOldVcdVatCmd__8J3DShape[4];

//
// Declarations:
//

/* ############################################################################################## */
/* 80453600-80453608 001C00 0004+04 6/6 0/0 0/0 .sdata2          @4215 */
SECTION_SDATA2 static f32 lit_4215[1 + 1 /* padding */] = {
    0.0f,
    /* padding */
    0.0f,
};

bool daPy_frameCtrl_c::checkAnmEnd() {
    if (getEndFlg() != 0 && getNowSetFlg() == 0) {
        return true;
    }
    if (getRate() == lit_4215[0]) {
        onEndFlg();
        onNowSetFlg();
    }
    return false;
}

void daPy_frameCtrl_c::updateFrame() {
    update();
    offNowSetFlg();
}

/* ############################################################################################## */
/* 80453608-80453610 001C08 0008+00 2/2 0/0 0/0 .sdata2          @4237 */
SECTION_SDATA2 static f64 lit_4237 = 4503601774854144.0 /* cast s32 to float */;

/* 8015E544-8015E5B0 158E84 006C+00 0/0 1/1 6/6 .text setFrameCtrl__16daPy_frameCtrl_cFUcssff */
// compiler generated literal from short to float conversion
#ifdef NONMATCHING
void daPy_frameCtrl_c::setFrameCtrl(u8 pAttribute, s16 pStart, s16 pEnd, f32 pRate, f32 pFrame) {
    setAttribute(pAttribute);
    setEnd(pEnd);
    setRate(pRate);
    setStart(pStart);
    setFrame(pFrame);
    if (pRate >= lit_4215[0]) {
        setLoop(pStart);
    } else {
        setLoop(pEnd);
    }
    offEndFlg();
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daPy_frameCtrl_c::setFrameCtrl(u8 param_0, s16 param_1, s16 param_2, f32 param_3,
                                        f32 param_4) {
    nofralloc
#include "asm/d/a/d_a_player/setFrameCtrl__16daPy_frameCtrl_cFUcssff.s"
}
#pragma pop
#endif

/* ############################################################################################## */
/* 80453610-80453614 001C10 0004+00 1/1 0/0 0/0 .sdata2          @4247 */
SECTION_SDATA2 static f32 lit_4247 = 30.0f;

/* 80453614-80453618 001C14 0004+00 1/1 0/0 0/0 .sdata2          @4248 */
SECTION_SDATA2 static f32 lit_4248 = 70.0f;

/* 80453618-8045361C 001C18 0004+00 2/2 0/0 0/0 .sdata2          @4249 */
SECTION_SDATA2 static f32 lit_4249 = 50.0f;

/* 8045361C-80453620 001C1C 0004+00 1/1 0/0 0/0 .sdata2          @4250 */
SECTION_SDATA2 static f32 lit_4250 = 65536.0f;

/* 8015E5B0-8015E654 158EF0 00A4+00 0/0 1/1 18/18 .text initOffset__20daPy_boomerangMove_cFPC4cXyz
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daPy_boomerangMove_c::initOffset(cXyz const* param_0) {
    nofralloc
#include "asm/d/a/d_a_player/initOffset__20daPy_boomerangMove_cFPC4cXyz.s"
}
#pragma pop

/* ############################################################################################## */
/* 80451018-8045101C 000518 0004+00 2/2 33/32 103/103 .sbss            m_midnaActor__9daPy_py_c */
u8 daPy_py_c::m_midnaActor[4];

/* 8045101C-80451020 -00001 0004+00 1/1 1/1 1/1 .sbss            None */
/* 8045101C 0002+00 data_8045101C m_dropAngleY__20daPy_boomerangMove_c */
/* 8045101E 0002+00 data_8045101E m_eventKeepFlg__20daPy_boomerangMove_c */
extern u8 struct_8045101C[4];
u8 struct_8045101C[4];

/* 80453620-80453624 001C20 0004+00 1/1 0/0 0/0 .sdata2          @4332 */
SECTION_SDATA2 static f32 lit_4332 = 300.0f;

/* 80453624-80453628 001C24 0004+00 1/1 0/0 0/0 .sdata2          @4333 */
SECTION_SDATA2 static f32 lit_4333 = -700.0f;

/* 80453628-80453630 001C28 0004+04 1/1 0/0 0/0 .sdata2          @4334 */
SECTION_SDATA2 static f32 lit_4334[1 + 1 /* padding */] = {
    2048.0f,
    /* padding */
    0.0f,
};

/* 8015E654-8015E87C 158F94 0228+00 0/0 1/1 17/17 .text
 * posMove__20daPy_boomerangMove_cFP4cXyzPsP10fopAc_ac_cs       */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daPy_boomerangMove_c::posMove(cXyz* param_0, s16* param_1, fopAc_ac_c* param_2,
                                       s16 param_3) {
    nofralloc
#include "asm/d/a/d_a_player/posMove__20daPy_boomerangMove_cFP4cXyzPsP10fopAc_ac_cs.s"
}
#pragma pop

/* ############################################################################################## */
/* 80453630-80453638 001C30 0008+00 1/1 0/0 0/0 .sdata2          @4379 */
SECTION_SDATA2 static f64 lit_4379 = 0.5;

/* 80453638-80453640 001C38 0008+00 1/1 0/0 0/0 .sdata2          @4380 */
SECTION_SDATA2 static f64 lit_4380 = 3.0;

/* 80453640-80453648 001C40 0008+00 1/1 0/0 0/0 .sdata2          @4381 */
SECTION_SDATA2 static u8 lit_4381[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 8015E87C-8015EA0C 1591BC 0190+00 1/1 1/1 17/17 .text
 * bgCheckAfterOffset__20daPy_boomerangMove_cFPC4cXyz           */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daPy_boomerangMove_c::bgCheckAfterOffset(cXyz const* param_0) {
    nofralloc
#include "asm/d/a/d_a_player/bgCheckAfterOffset__20daPy_boomerangMove_cFPC4cXyz.s"
}
#pragma pop

/* 8015EA0C-8015EA20 15934C 0014+00 0/0 3/3 0/0 .text            setParamData__9daPy_py_cFiiii */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daPy_py_c::setParamData(int param_0, int param_1, int param_2, int param_3) {
    nofralloc
#include "asm/d/a/d_a_player/setParamData__9daPy_py_cFiiii.s"
}
#pragma pop

/* 8015EA20-8015EA48 159360 0028+00 0/0 10/10 3/3 .text            checkFishingRodItem__9daPy_py_cFi
 */
#ifdef NONMATCHING
BOOL daPy_py_c::checkFishingRodItem(int i_item_id) {
    bool is_fishing_item = false;

    if (i_item_id == FISHING_ROD_1 || i_item_id < BEE_ROD || i_item_id <= JEWEL_WORM_ROD) {
        is_fishing_item = true;
    }

    return is_fishing_item;
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm BOOL daPy_py_c::checkFishingRodItem(int param_0) {
    nofralloc
#include "asm/d/a/d_a_player/checkFishingRodItem__9daPy_py_cFi.s"
}
#pragma pop
#endif

/* 8015EA48-8015EA88 159388 0040+00 0/0 3/3 0/0 .text            checkBombItem__9daPy_py_cFi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daPy_py_c::checkBombItem(int param_0) {
    nofralloc
#include "asm/d/a/d_a_player/checkBombItem__9daPy_py_cFi.s"
}
#pragma pop

/* 8015EA88-8015EAD8 1593C8 0050+00 0/0 5/5 0/0 .text            checkBottleItem__9daPy_py_cFi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daPy_py_c::checkBottleItem(int param_0) {
    nofralloc
#include "asm/d/a/d_a_player/checkBottleItem__9daPy_py_cFi.s"
}
#pragma pop

/* 8015EAD8-8015EB40 159418 0068+00 0/0 3/3 0/0 .text            checkDrinkBottleItem__9daPy_py_cFi
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daPy_py_c::checkDrinkBottleItem(int param_0) {
    nofralloc
#include "asm/d/a/d_a_player/checkDrinkBottleItem__9daPy_py_cFi.s"
}
#pragma pop

/* 8015EB40-8015EB68 159480 0028+00 0/0 4/4 0/0 .text            checkOilBottleItem__9daPy_py_cFi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm BOOL daPy_py_c::checkOilBottleItem(int param_0) {
    nofralloc
#include "asm/d/a/d_a_player/checkOilBottleItem__9daPy_py_cFi.s"
}
#pragma pop

/* 8015EB68-8015EB90 1594A8 0028+00 0/0 2/2 0/0 .text            checkOpenBottleItem__9daPy_py_cFi
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daPy_py_c::checkOpenBottleItem(int param_0) {
    nofralloc
#include "asm/d/a/d_a_player/checkOpenBottleItem__9daPy_py_cFi.s"
}
#pragma pop

/* 8015EB90-8015EBB8 1594D0 0028+00 0/0 11/11 0/0 .text            checkBowItem__9daPy_py_cFi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daPy_py_c::checkBowItem(int param_0) {
    nofralloc
#include "asm/d/a/d_a_player/checkBowItem__9daPy_py_cFi.s"
}
#pragma pop

/* 8015EBB8-8015EBD8 1594F8 0020+00 0/0 23/23 0/0 .text            checkHookshotItem__9daPy_py_cFi
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daPy_py_c::checkHookshotItem(int param_0) {
    nofralloc
#include "asm/d/a/d_a_player/checkHookshotItem__9daPy_py_cFi.s"
}
#pragma pop

/* 8015EBD8-8015EC28 159518 0050+00 0/0 3/3 0/0 .text            checkTradeItem__9daPy_py_cFi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daPy_py_c::checkTradeItem(int param_0) {
    nofralloc
#include "asm/d/a/d_a_player/checkTradeItem__9daPy_py_cFi.s"
}
#pragma pop

/* 8015EC28-8015EC48 159568 0020+00 0/0 2/2 0/0 .text            checkDungeonWarpItem__9daPy_py_cFi
 */
// regalloc
#ifdef NONMATCHING
BOOL daPy_py_c::checkDungeonWarpItem(int i_item_id) {
    bool isDungeonWarpItem = false;
    if (i_item_id == DUNGEON_EXIT || i_item_id == DUNGEON_BACK) {
        isDungeonWarpItem = true;
    }
    return isDungeonWarpItem;
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm BOOL daPy_py_c::checkDungeonWarpItem(int param_0) {
    nofralloc
#include "asm/d/a/d_a_player/checkDungeonWarpItem__9daPy_py_cFi.s"
}
#pragma pop
#endif

/* 8015EC48-8015ECB8 159588 0070+00 0/0 10/10 3/3 .text            setActor__16daPy_actorKeep_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daPy_actorKeep_c::setActor() {
    nofralloc
#include "asm/d/a/d_a_player/setActor__16daPy_actorKeep_cFv.s"
}
#pragma pop

/* 8015ECB8-8015ECFC 1595F8 0044+00 0/0 59/59 4/4 .text setData__16daPy_actorKeep_cFP10fopAc_ac_c
 */
void daPy_actorKeep_c::setData(fopAc_ac_c* pActor) {
    if (pActor != NULL) {
        mActor = pActor;
        mID = fopAcM_GetID(pActor);
    } else {
        clearData();
    }
}

void daPy_actorKeep_c::clearData() {
    mID = 0xffffffff;
    mActor = NULL;
}

daPy_anmHeap_c::daPy_anmHeap_c(u32 pBufferSize) {
    initData();
    mBufferSize = pBufferSize;
}

/* 8015ED50-8015EDAC 159690 005C+00 0/0 2/2 2/2 .text            __dt__14daPy_anmHeap_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daPy_anmHeap_c::~daPy_anmHeap_c() {
    nofralloc
#include "asm/d/a/d_a_player/__dt__14daPy_anmHeap_cFv.s"
}
#pragma pop

void daPy_anmHeap_c::initData() {
    resetIdx();
    resetPriIdx();
    resetArcNo();
}

/* 8015EDC4-8015EE00 159704 003C+00 0/0 1/1 1/1 .text            mallocBuffer__14daPy_anmHeap_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daPy_anmHeap_c::mallocBuffer() {
    nofralloc
#include "asm/d/a/d_a_player/mallocBuffer__14daPy_anmHeap_cFv.s"
}
#pragma pop

/* 8015EE00-8015EF84 159740 0184+00 0/0 1/1 1/1 .text
 * createHeap__14daPy_anmHeap_cFQ214daPy_anmHeap_c16daAlinkHEAP_TYPE */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daPy_anmHeap_c::createHeap(daPy_anmHeap_c::daAlinkHEAP_TYPE param_0) {
    nofralloc
#include "asm/d/a/d_a_player/createHeap__14daPy_anmHeap_cFQ214daPy_anmHeap_c16daAlinkHEAP_TYPE.s"
}
#pragma pop

/* ############################################################################################## */
/* 80453648-80453650 001C48 0008+00 1/0 0/0 0/0 .sdata2          sumouArcName$4614 */
extern "C" u8 sumouArcName[8];

/* 80453650-80453658 001C50 0005+03 1/0 0/0 0/0 .sdata2          ocArcName$4615 */
extern "C" u8 ocArcName[5 + 3 /* padding */];

/* 80453658-80453660 001C58 0005+03 1/0 0/0 0/0 .sdata2          drArcName$4618 */
extern "C" u8 drArcName[5 + 3 /* padding */];

/* 80453660-80453668 001C60 0008+00 1/0 0/0 0/0 .sdata2          msDemoArcName$4619 */
extern "C" u8 msDemoArcName[8];

/* 80453668-80453670 001C68 0006+02 1/0 0/0 0/0 .sdata2          lastGanonArcName$4620 */
extern "C" u8 lastGanonArcName[6 + 2 /* padding */];

/* 80453670-80453678 001C70 0006+02 1/0 0/0 0/0 .sdata2          pigGanonArcName$4621 */
extern "C" u8 pigGanonArcName[6 + 2 /* padding */];

/* 80393DA8-80393DB4 020408 000A+02 1/0 0/0 0/0 .rodata          twglArcName$4616 */
SECTION_RODATA static u8 const twglArcName[10 + 2 /* padding */] = {
    0x54,
    0x57,
    0x47,
    0x61,
    0x74,
    0x65,
    0x5F,
    0x4C,
    0x6B,
    0x00,
    /* padding */
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x80393DA8, &twglArcName);

/* 80393DB4-80393DC0 020414 000A+02 1/0 0/0 0/0 .rodata          twgwArcName$4617 */
SECTION_RODATA static u8 const twgwArcName[10 + 2 /* padding */] = {
    0x54,
    0x57,
    0x47,
    0x61,
    0x74,
    0x65,
    0x5F,
    0x57,
    0x66,
    0x00,
    /* padding */
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x80393DB4, &twgwArcName);

/* 803BA0A0-803BA0C0 -00001 0020+00 1/1 0/0 0/0 .data            arcName$4622 */
SECTION_DATA static void* arcName[8] = {
    (void*)&sumouArcName, (void*)&ocArcName,     (void*)&twglArcName,      (void*)&twgwArcName,
    (void*)&drArcName,    (void*)&msDemoArcName, (void*)&lastGanonArcName, (void*)&pigGanonArcName,
};

/* 80453648-80453650 001C48 0008+00 1/0 0/0 0/0 .sdata2          sumouArcName$4614 */
SECTION_SDATA2 static u8 sumouArcName[8] = {
    0x61, 0x6C, 0x53, 0x75, 0x6D, 0x6F, 0x75, 0x00,
};

/* 80453650-80453658 001C50 0005+03 1/0 0/0 0/0 .sdata2          ocArcName$4615 */
SECTION_SDATA2 static u8 ocArcName[5 + 3 /* padding */] = {
    0x42,
    0x5F,
    0x6F,
    0x68,
    0x00,
    /* padding */
    0x00,
    0x00,
    0x00,
};

/* 80453658-80453660 001C58 0005+03 1/0 0/0 0/0 .sdata2          drArcName$4618 */
SECTION_SDATA2 static u8 drArcName[5 + 3 /* padding */] = {
    0x42,
    0x5F,
    0x44,
    0x52,
    0x00,
    /* padding */
    0x00,
    0x00,
    0x00,
};

/* 80453660-80453668 001C60 0008+00 1/0 0/0 0/0 .sdata2          msDemoArcName$4619 */
SECTION_SDATA2 static u8 msDemoArcName[8] = {
    0x4C, 0x76, 0x36, 0x47, 0x61, 0x74, 0x65, 0x00,
};

/* 80453668-80453670 001C68 0006+02 1/0 0/0 0/0 .sdata2          lastGanonArcName$4620 */
SECTION_SDATA2 static u8 lastGanonArcName[6 + 2 /* padding */] = {
    0x42,
    0x5F,
    0x67,
    0x6E,
    0x64,
    0x00,
    /* padding */
    0x00,
    0x00,
};

/* 80453670-80453678 001C70 0006+02 1/0 0/0 0/0 .sdata2          pigGanonArcName$4621 */
SECTION_SDATA2 static u8 pigGanonArcName[6 + 2 /* padding */] = {
    0x42,
    0x5F,
    0x6D,
    0x67,
    0x6E,
    0x00,
    /* padding */
    0x00,
    0x00,
};

/* 8015EF84-8015F068 1598C4 00E4+00 3/3 0/0 0/0 .text            loadData__14daPy_anmHeap_cFUs */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J3DAnmBase* daPy_anmHeap_c::loadData(u16 param_0) {
    nofralloc
#include "asm/d/a/d_a_player/loadData__14daPy_anmHeap_cFUs.s"
}
#pragma pop

/* 8015F068-8015F0D0 1599A8 0068+00 0/0 9/9 5/5 .text            loadDataIdx__14daPy_anmHeap_cFUs */
J3DAnmBase* daPy_anmHeap_c::loadDataIdx(u16 pID) {
    J3DAnmBase* tmp;

    if (pID == mIdx && mArcNo == 0xffff) {
        tmp = NULL;
    } else {
        mIdx = pID;
        mArcNo = 0xffff;
        if (mPriIdx == 0xffff) {
            tmp = loadData(pID);
        } else {
            tmp = NULL;
        }
    }
    return tmp;
}

/* 8015F0D0-8015F118 159A10 0048+00 0/0 3/3 0/0 .text            loadDataPriIdx__14daPy_anmHeap_cFUs
 */
J3DAnmBase* daPy_anmHeap_c::loadDataPriIdx(u16 pID) {
    J3DAnmBase* tmp;

    if (pID == mPriIdx || mArcNo != 0xffff) {
        tmp = NULL;
    } else {
        mPriIdx = pID;
        tmp = loadData(pID);
    }
    return tmp;
}

/* 8015F118-8015F168 159A58 0050+00 0/0 5/5 5/5 .text loadDataDemoRID__14daPy_anmHeap_cFUsUs */
J3DAnmBase* daPy_anmHeap_c::loadDataDemoRID(u16 pID, u16 pArcNo) {
    J3DAnmBase* tmp;

    if (pID == mIdx && pArcNo == mArcNo) {
        tmp = NULL;
    } else {
        mIdx = pID;
        mArcNo = pArcNo;
        tmp = loadData(pID);
    }
    return tmp;
}

/* 8015F168-8015F1A0 159AA8 0038+00 1/1 4/4 0/0 .text            setAnimeHeap__14daPy_anmHeap_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daPy_anmHeap_c::setAnimeHeap() {
    nofralloc
#include "asm/d/a/d_a_player/setAnimeHeap__14daPy_anmHeap_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 803BA0C0-803BA14C 0171E0 0089+03 1/1 0/0 0/0 .data            l_sightDL */
SECTION_DATA static u8 l_sightDL[137 + 3 /* padding */] = {
    0x10,
    0x00,
    0x00,
    0x10,
    0x40,
    0xFF,
    0xFF,
    0x42,
    0x80,
    0x08,
    0x30,
    0x3C,
    0xF3,
    0xCF,
    0x00,
    0x10,
    0x00,
    0x00,
    0x10,
    0x18,
    0x3C,
    0xF3,
    0xCF,
    0x00,
    0x61,
    0x28,
    0x38,
    0x03,
    0xC0,
    0x61,
    0xC0,
    0x08,
    0x42,
    0x8F,
    0x61,
    0xC1,
    0x08,
    0xE6,
    0x70,
    0x61,
    0x43,
    0x00,
    0x00,
    0x01,
    0x61,
    0x40,
    0x00,
    0x00,
    0x06,
    0x61,
    0x41,
    0x00,
    0x04,
    0xAD,
    0x61,
    0xF3,
    0x64,
    0x00,
    0x00,
    0x10,
    0x00,
    0x00,
    0x10,
    0x3F,
    0x00,
    0x00,
    0x00,
    0x01,
    0x10,
    0x00,
    0x00,
    0x10,
    0x09,
    0x00,
    0x00,
    0x00,
    0x00,
    0x61,
    0x00,
    0x00,
    0x00,
    0x01,
    0x98,
    0x00,
    0x04,
    0x01,
    0x01,
    0x00,
    0x01,
    0x01,
    0xFF,
    0x01,
    0x00,
    0x00,
    0x01,
    0x01,
    0xFF,
    0x00,
    0x01,
    0x00,
    0xFF,
    0xFF,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    /* padding */
    0x00,
    0x00,
    0x00,
};

/* 80453678-8045367C 001C78 0004+00 1/1 0/0 0/0 .sdata2          @4668 */
SECTION_SDATA2 static u32 lit_4668 = 0xFF8000FF;

/* 8045367C-80453680 001C7C 0004+00 1/1 0/0 0/0 .sdata2          @4669 */
SECTION_SDATA2 static u32 lit_4669 = 0x321400FF;

/* 8015F1A0-8015F2FC 159AE0 015C+00 1/0 1/1 0/0 .text            draw__18daPy_sightPacket_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daPy_sightPacket_c::draw() {
    nofralloc
#include "asm/d/a/d_a_player/draw__18daPy_sightPacket_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80453680-80453684 001C80 0004+00 1/1 0/0 0/0 .sdata2          @4699 */
SECTION_SDATA2 static f32 lit_4699 = 32.0f;

/* 8015F2FC-8015F384 159C3C 0088+00 0/0 1/1 0/0 .text            setSight__18daPy_sightPacket_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daPy_sightPacket_c::setSight() {
    nofralloc
#include "asm/d/a/d_a_player/setSight__18daPy_sightPacket_cFv.s"
}
#pragma pop

/* 8015F384-8015F398 159CC4 0014+00 0/0 1/1 0/0 .text
 * setSightImage__18daPy_sightPacket_cFP7ResTIMG                */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daPy_sightPacket_c::setSightImage(ResTIMG* param_0) {
    nofralloc
#include "asm/d/a/d_a_player/setSightImage__18daPy_sightPacket_cFP7ResTIMG.s"
}
#pragma pop

/* 8015F398-8015F3C4 159CD8 002C+00 0/0 8/8 10/10 .text checkMasterSwordEquip__9daPy_py_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daPy_py_c::checkMasterSwordEquip() {
    nofralloc
#include "asm/d/a/d_a_player/checkMasterSwordEquip__9daPy_py_cFv.s"
}
#pragma pop

/* 8015F3C4-8015F3FC 159D04 0038+00 0/0 4/4 0/0 .text            checkWoodShieldEquip__9daPy_py_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daPy_py_c::checkWoodShieldEquip() {
    nofralloc
#include "asm/d/a/d_a_player/checkWoodShieldEquip__9daPy_py_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80453684-80453688 001C84 0004+00 1/1 0/0 0/0 .sdata2          @4741 */
SECTION_SDATA2 static f32 lit_4741 = -12.5f;

/* 80453688-80453690 001C88 0004+04 1/1 0/0 0/0 .sdata2          @4742 */
SECTION_SDATA2 static f32 lit_4742[1 + 1 /* padding */] = {
    57.5f,
    /* padding */
    0.0f,
};

/* 8015F3FC-8015F424 159D3C 0028+00 0/0 4/4 3/3 .text            getAttentionOffsetY__9daPy_py_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daPy_py_c::getAttentionOffsetY() {
    nofralloc
#include "asm/d/a/d_a_player/getAttentionOffsetY__9daPy_py_cFv.s"
}
#pragma pop

/* 8015F424-8015F438 159D64 0014+00 0/0 17/17 33/33 .text            checkNowWolfEyeUp__9daPy_py_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daPy_py_c::checkNowWolfEyeUp() {
    nofralloc
#include "asm/d/a/d_a_player/checkNowWolfEyeUp__9daPy_py_cFv.s"
}
#pragma pop

/* 8015F438-8015F478 159D78 0040+00 0/0 0/0 1/1 .text            forceRestartRoom__9daPy_py_cFiUli
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daPy_py_c::forceRestartRoom(int param_0, u32 param_1, int param_2) {
    nofralloc
#include "asm/d/a/d_a_player/forceRestartRoom__9daPy_py_cFiUli.s"
}
#pragma pop

/* 8015F478-8015F4B8 159DB8 0040+00 0/0 0/0 3/3 .text
 * setFmChainPos__9daPy_py_cFP10fopAc_ac_cP4cXyzi               */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daPy_py_c::setFmChainPos(fopAc_ac_c* param_0, cXyz* param_1, int param_2) {
    nofralloc
#include "asm/d/a/d_a_player/setFmChainPos__9daPy_py_cFP10fopAc_ac_cP4cXyzi.s"
}
#pragma pop

/* 8015F4B8-8015F4F0 159DF8 0038+00 0/0 0/0 1/1 .text            cancelFmChainGrab__9daPy_py_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daPy_py_c::cancelFmChainGrab() {
    nofralloc
#include "asm/d/a/d_a_player/cancelFmChainGrab__9daPy_py_cFv.s"
}
#pragma pop

/* 8015F4F0-8015F520 159E30 0030+00 0/0 0/0 17/17 .text            setLookPos__9daPy_py_cFP4cXyz */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daPy_py_c::setLookPos(cXyz* param_0) {
    nofralloc
#include "asm/d/a/d_a_player/setLookPos__9daPy_py_cFP4cXyz.s"
}
#pragma pop

/* 8015F520-8015F55C 159E60 003C+00 0/0 0/0 4/4 .text            setPlayerSe__9daPy_py_cFUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daPy_py_c::setPlayerSe(u32 param_0) {
    nofralloc
#include "asm/d/a/d_a_player/setPlayerSe__9daPy_py_cFUl.s"
}
#pragma pop

/* 8015F55C-8015F60C 159E9C 00B0+00 1/1 0/0 2/2 .text
 * linkGrabSubjectNoDraw__9daPy_py_cFP10fopAc_ac_c              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daPy_py_c::linkGrabSubjectNoDraw(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/d/a/d_a_player/linkGrabSubjectNoDraw__9daPy_py_cFP10fopAc_ac_c.s"
}
#pragma pop

/* 8015F60C-8015F660 159F4C 0054+00 0/0 0/0 2/2 .text
 * wolfGrabSubjectNoDraw__9daPy_py_cFP10fopAc_ac_c              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daPy_py_c::wolfGrabSubjectNoDraw(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/d/a/d_a_player/wolfGrabSubjectNoDraw__9daPy_py_cFP10fopAc_ac_c.s"
}
#pragma pop

/* 8015F660-8015F698 159FA0 0038+00 2/2 1/1 1/1 .text            checkRoomRestartStart__9daPy_py_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daPy_py_c::checkRoomRestartStart() {
    nofralloc
#include "asm/d/a/d_a_player/checkRoomRestartStart__9daPy_py_cFv.s"
}
#pragma pop

/* 8015F698-8015F730 159FD8 0098+00 0/0 2/2 1/1 .text checkCarryStartLightBallA__9daPy_py_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daPy_py_c::checkCarryStartLightBallA() {
    nofralloc
#include "asm/d/a/d_a_player/checkCarryStartLightBallA__9daPy_py_cFv.s"
}
#pragma pop

/* 8015F730-8015F7C8 15A070 0098+00 0/0 2/2 1/1 .text checkCarryStartLightBallB__9daPy_py_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daPy_py_c::checkCarryStartLightBallB() {
    nofralloc
#include "asm/d/a/d_a_player/checkCarryStartLightBallB__9daPy_py_cFv.s"
}
#pragma pop

float daPy_py_c::getSpinnerRideSpeed() const {
    float rideSpeed;
    if (checkSpinnerRide()) {
        rideSpeed = mSpeedF;
    } else {
        rideSpeed = lit_4215[0];
    }
    return rideSpeed;
}

/* 8015F814-8015F89C 15A154 0088+00 0/0 0/0 1/1 .text checkSpinnerReflectEffect__9daPy_py_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daPy_py_c::checkSpinnerReflectEffect() {
    nofralloc
#include "asm/d/a/d_a_player/checkSpinnerReflectEffect__9daPy_py_cFv.s"
}
#pragma pop

/* 8015F89C-8015F8C8 15A1DC 002C+00 0/0 0/0 7/7 .text            checkBoomerangCharge__9daPy_py_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daPy_py_c::checkBoomerangCharge() {
    nofralloc
#include "asm/d/a/d_a_player/checkBoomerangCharge__9daPy_py_cFv.s"
}
#pragma pop

/* 8015F8C8-8015F8D0 15A208 0008+00 0/0 0/0 1/1 .text checkBoomerangChargeTime__9daPy_py_cFv */
bool daPy_py_c::checkBoomerangChargeTime() {
    return false;
}

/* 8015F8D0-8015F8E4 15A210 0014+00 3/3 1/1 5/5 .text getThrowBoomerangActor__9daPy_py_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daPy_py_c::getThrowBoomerangActor() {
    nofralloc
#include "asm/d/a/d_a_player/getThrowBoomerangActor__9daPy_py_cFv.s"
}
#pragma pop

/* 8015F8E4-8015F914 15A224 0030+00 0/0 0/0 2/2 .text
 * cancelBoomerangLockActor__9daPy_py_cFP10fopAc_ac_c           */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daPy_py_c::cancelBoomerangLockActor(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/d/a/d_a_player/cancelBoomerangLockActor__9daPy_py_cFP10fopAc_ac_c.s"
}
#pragma pop

/* 8015F914-8015F954 15A254 0040+00 0/0 0/0 2/2 .text            setPlayerDamage__9daPy_py_cFii */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daPy_py_c::setPlayerDamage(int param_0, int param_1) {
    nofralloc
#include "asm/d/a/d_a_player/setPlayerDamage__9daPy_py_cFii.s"
}
#pragma pop

/* 8015F954-8015F968 15A294 0014+00 0/0 3/3 0/0 .text            setMidnaMotionNum__9daPy_py_cFi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daPy_py_c::setMidnaMotionNum(int param_0) {
    nofralloc
#include "asm/d/a/d_a_player/setMidnaMotionNum__9daPy_py_cFi.s"
}
#pragma pop

/* 8015F968-8015F97C 15A2A8 0014+00 0/0 3/3 0/0 .text            setMidnaFaceNum__9daPy_py_cFi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daPy_py_c::setMidnaFaceNum(int param_0) {
    nofralloc
#include "asm/d/a/d_a_player/setMidnaFaceNum__9daPy_py_cFi.s"
}
#pragma pop

/* 8015F97C-8015FA2C 15A2BC 00B0+00 0/0 7/7 2/2 .text            daPy_addCalcShort__FPsssss */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daPy_addCalcShort(s16* param_0, s16 param_1, s16 param_2, s16 param_3, s16 param_4) {
    nofralloc
#include "asm/d/a/d_a_player/daPy_addCalcShort__FPsssss.s"
}
#pragma pop

/* ############################################################################################## */
/* 803BA14C-803BA160 01726C 0010+04 0/0 4/4 0/0 .data            __vt__18daPy_sightPacket_c */
SECTION_DATA extern void* __vt__18daPy_sightPacket_c[4 + 1 /* padding */] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)draw__18daPy_sightPacket_cFv,
    (void*)__dt__18daPy_sightPacket_cFv,
    /* padding */
    NULL,
};
