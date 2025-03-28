//
// Generated By: dol2asm
// Translation Unit: d/d_envse
//

#include "d/d_envse.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct dStage_roomControl_c {
    /* 80024384 */ void getStatusRoomDt(int);
};

struct dStage_SoundInfo_c {};

struct dPath {};

struct dEnvSe_c {
    /* 80182FD8 */ void execute_common(dStage_SoundInfo_c*, s8*, u8);
    /* 80183480 */ void execute();
};

struct dCamera_c {
    /* 80181E64 */ void Eye();
};

struct cXyz {};

struct Vec {};

struct cM3dGLin {
    /* 8026F31C */ void SetStartEnd(Vec const&, Vec const&);
};

struct Z2EnvSeMgr {
    /* 802C6C84 */ void initStaticEnvSe(u8, u8, u8, u8, Vec*);
    /* 802C70C8 */ void startStaticEnvSe(s8);
    /* 802C780C */ void registWindowPos(Vec*);
    /* 802C80F8 */ void initRiverSe(u8, u8, u8, u8);
    /* 802C8234 */ void registRiverSePos(Vec*);
    /* 802C8300 */ void startRiverSe(s8);
    /* 802C8730 */ void initFallSe(u8, u8, u8, u8);
    /* 802C886C */ void registFallSePos(Vec*);
    /* 802C8890 */ void startFallSe(s8);
    /* 802C8A90 */ void initEtcSe(u8, u8, u8, u8);
    /* 802C8C24 */ void registEtcSePos(Vec*);
    /* 802C8C48 */ void startEtcSe(s8);
    /* 802C950C */ void initLv3WaterSe(u8, u8, u8, u8);
    /* 802C9F58 */ void registLv3WaterSePos(u8, Vec*);
    /* 802CA794 */ void startLv3WaterSe(s8);
};

//
// Forward References:
//

extern "C" static bool dEnvSe_Draw__FP8dEnvSe_c();
extern "C" static void dEnvSe_getNearPathPos__FP4cXyzP4cXyzP5dPath();
extern "C" void execute_common__8dEnvSe_cFP18dStage_SoundInfo_cPScUc();
extern "C" void execute__8dEnvSe_cFv();
extern "C" static void dEnvSe_Execute__FP8dEnvSe_c();
extern "C" static bool dEnvSe_IsDelete__FP8dEnvSe_c();
extern "C" static bool dEnvSe_Delete__FP8dEnvSe_c();
extern "C" static void dEnvSe_Create__FP8dEnvSe_c();
extern "C" extern char const* const d_d_envse__stringBase0;
extern "C" extern void* g_profile_ENVSE[10 + 1 /* padding */];

//
// External References:
//

extern "C" void getStatusRoomDt__20dStage_roomControl_cFi();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void dPath_GetRoomPath__Fii();
extern "C" void dPath_GetNextRoomPath__FPC5dPathi();
extern "C" void Eye__9dCamera_cFv();
extern "C" void cM3d_Len3dSqPntAndSegLine__FPC8cM3dGLinPC3VecP3VecPf();
extern "C" void SetStartEnd__8cM3dGLinFRC3VecRC3Vec();
extern "C" void initStaticEnvSe__10Z2EnvSeMgrFUcUcUcUcP3Vec();
extern "C" void startStaticEnvSe__10Z2EnvSeMgrFSc();
extern "C" void registWindowPos__10Z2EnvSeMgrFP3Vec();
extern "C" void initRiverSe__10Z2EnvSeMgrFUcUcUcUc();
extern "C" void registRiverSePos__10Z2EnvSeMgrFP3Vec();
extern "C" void startRiverSe__10Z2EnvSeMgrFSc();
extern "C" void initFallSe__10Z2EnvSeMgrFUcUcUcUc();
extern "C" void registFallSePos__10Z2EnvSeMgrFP3Vec();
extern "C" void startFallSe__10Z2EnvSeMgrFSc();
extern "C" void initEtcSe__10Z2EnvSeMgrFUcUcUcUc();
extern "C" void registEtcSePos__10Z2EnvSeMgrFP3Vec();
extern "C" void startEtcSe__10Z2EnvSeMgrFSc();
extern "C" void initLv3WaterSe__10Z2EnvSeMgrFUcUcUcUc();
extern "C" void registLv3WaterSePos__10Z2EnvSeMgrFUcP3Vec();
extern "C" void startLv3WaterSe__10Z2EnvSeMgrFSc();
extern "C" void PSVECSquareDistance();
extern "C" void _savegpr_22();
extern "C" void _savegpr_26();
extern "C" void _savegpr_28();
extern "C" void _restgpr_22();
extern "C" void _restgpr_26();
extern "C" void _restgpr_28();
extern "C" void memcmp();
extern "C" extern void* g_fopKy_Method[5 + 1 /* padding */];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern void* __vt__8cM3dGLin[3];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_mEnvSeMgr[780];
extern "C" extern u32 __float_max;
extern "C" extern u8 struct_80450D64[4];

//
// Declarations:
//

/* 80182DD4-80182DDC 17D714 0008+00 1/0 0/0 0/0 .text            dEnvSe_Draw__FP8dEnvSe_c */
static bool dEnvSe_Draw(dEnvSe_c* param_0) {
    return true;
}

/* ############################################################################################## */
/* 80456B80-80456B84 000020 0004+00 1/1 0/0 0/0 .sbss2           @3752 */
SECTION_SBSS2 static u8 lit_3752[4];

/* 80456B84-80456B88 000024 0004+00 1/1 0/0 0/0 .sbss2           None */
SECTION_SBSS2 static u8 data_80456B84[4];

/* 80182DDC-80182FD8 17D71C 01FC+00 1/1 0/0 0/0 .text dEnvSe_getNearPathPos__FP4cXyzP4cXyzP5dPath
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void dEnvSe_getNearPathPos(cXyz* param_0, cXyz* param_1, dPath* param_2) {
    nofralloc
#include "asm/d/d_envse/dEnvSe_getNearPathPos__FP4cXyzP4cXyzP5dPath.s"
}
#pragma pop

/* ############################################################################################## */
/* 80394308-80394308 020968 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80394308 = "sndtag";
/* @stringBase0 padding */
SECTION_DEAD static char const* const pad_8039430F = "";
#pragma pop

/* 80182FD8-80183480 17D918 04A8+00 1/1 0/0 0/0 .text
 * execute_common__8dEnvSe_cFP18dStage_SoundInfo_cPScUc         */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dEnvSe_c::execute_common(dStage_SoundInfo_c* param_0, s8* param_1, u8 param_2) {
    nofralloc
#include "asm/d/d_envse/execute_common__8dEnvSe_cFP18dStage_SoundInfo_cPScUc.s"
}
#pragma pop

/* 80183480-801835A0 17DDC0 0120+00 1/1 0/0 0/0 .text            execute__8dEnvSe_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dEnvSe_c::execute() {
    nofralloc
#include "asm/d/d_envse/execute__8dEnvSe_cFv.s"
}
#pragma pop

/* 801835A0-801835C0 17DEE0 0020+00 1/0 0/0 0/0 .text            dEnvSe_Execute__FP8dEnvSe_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void dEnvSe_Execute(dEnvSe_c* param_0) {
    nofralloc
#include "asm/d/d_envse/dEnvSe_Execute__FP8dEnvSe_c.s"
}
#pragma pop

/* 801835C0-801835C8 17DF00 0008+00 1/0 0/0 0/0 .text            dEnvSe_IsDelete__FP8dEnvSe_c */
static bool dEnvSe_IsDelete(dEnvSe_c* param_0) {
    return true;
}

/* 801835C8-801835D0 17DF08 0008+00 1/0 0/0 0/0 .text            dEnvSe_Delete__FP8dEnvSe_c */
static bool dEnvSe_Delete(dEnvSe_c* param_0) {
    return true;
}

/* 801835D0-801835F8 17DF10 0028+00 1/0 0/0 0/0 .text            dEnvSe_Create__FP8dEnvSe_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void dEnvSe_Create(dEnvSe_c* param_0) {
    nofralloc
#include "asm/d/d_envse/dEnvSe_Create__FP8dEnvSe_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 803BA808-803BA81C -00001 0014+00 1/0 0/0 0/0 .data            l_dEnvSe_Method */
SECTION_DATA static void* l_dEnvSe_Method[5] = {
    (void*)dEnvSe_Create__FP8dEnvSe_c,  (void*)dEnvSe_Delete__FP8dEnvSe_c,
    (void*)dEnvSe_Execute__FP8dEnvSe_c, (void*)dEnvSe_IsDelete__FP8dEnvSe_c,
    (void*)dEnvSe_Draw__FP8dEnvSe_c,
};

/* 803BA81C-803BA848 -00001 0028+04 0/0 0/0 1/0 .data            g_profile_ENVSE */
SECTION_DATA extern void* g_profile_ENVSE[10 + 1 /* padding */] = {
    (void*)0xFFFFFFFD,
    (void*)0x0002FFFD,
    (void*)0x00150000,
    (void*)&g_fpcLf_Method,
    (void*)0x0000010C,
    (void*)NULL,
    (void*)NULL,
    (void*)&g_fopKy_Method,
    (void*)0x02B10000,
    (void*)&l_dEnvSe_Method,
    /* padding */
    NULL,
};

/* 80394308-80394308 020968 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
