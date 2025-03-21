//
// Generated By: dol2asm
// Translation Unit: d/d_kyeff
//

#include "d/d_kyeff.h"
#include "d/kankyo/d_kankyo_wether.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct kankyo_class {};

struct Z2EnvSeMgr {
    /* 802C66B0 */ void framework();
};

//
// Forward References:
//

extern "C" static void dKyeff_Draw__FP8dKyeff_c();
extern "C" void execute__8dKyeff_cFv();
extern "C" static void dKyeff_Execute__FP8dKyeff_c();
extern "C" static bool dKyeff_IsDelete__FP8dKyeff_c();
extern "C" static void dKyeff_Delete__FP8dKyeff_c();
extern "C" static void dKyeff_Create__FP12kankyo_class();
extern "C" extern char const* const d_d_kyeff__stringBase0;
extern "C" extern void* g_profile_KYEFF[10 + 1 /* padding */];

//
// External References:
//

extern "C" void dKyw_wether_init__Fv();
extern "C" void dKyw_wether_delete__Fv();
extern "C" void dKyw_wether_move__Fv();
extern "C" void dKyw_wether_move_draw__Fv();
extern "C" void dKyw_wether_draw__Fv();
extern "C" void dKy_FiveSenses_fullthrottle_dark__Fv();
extern "C" void framework__10Z2EnvSeMgrFv();
extern "C" void OSGetTime();
extern "C" void OSTicksToCalendarTime();
extern "C" void strcmp();
extern "C" extern void* g_fopKy_Method[5 + 1 /* padding */];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 g_mEnvSeMgr[780];

//
// Declarations:
//

static bool dKyeff_Draw(dKyeff_c* ptr) {
    dKyw_wether_draw();
    return true;
}

/* ############################################################################################## */
/* 80394F38-80394F38 021598 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80394F38 = "Name";
/* @stringBase0 padding */
SECTION_DEAD static char const* const pad_80394F3D = "\0\0";
#pragma pop

/* 801ADD5C-801ADDB4 1A869C 0058+00 1/1 0/0 0/0 .text            execute__8dKyeff_cFv */
// matching but need gameinfo setup
#ifdef NONMATCHING
bool dKyeff_c::execute() {
    char* stageName = dComIfGp_getStartStageName();
    int strcmp_result = strcmp(stageName, "Name");  // strcmp(stageName,"Name");
    if (strcmp_result != 0) {
        dKyw_wether_move();
    }
    dKyw_wether_move_draw();
    dKy_FiveSenses_fullthrottle_dark();
    mDoAud_mEnvse_framework();
    return true;
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm bool dKyeff_c::execute() {
    nofralloc
#include "asm/d/d_kyeff/execute__8dKyeff_cFv.s"
}
#pragma pop
#endif

static bool dKyeff_Execute(dKyeff_c* ptr) {
    return ptr->execute();
}

static bool dKyeff_IsDelete(dKyeff_c* ptr) {
    return true;
}

static bool dKyeff_Delete(dKyeff_c* ptr) {
    dKyw_wether_delete();
    return true;
}

/* ############################################################################################## */
/* 80453E58-80453E5C 002458 0004+00 1/1 0/0 0/0 .sdata2          @3804 */
SECTION_SDATA2 static u8 lit_3804[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 80453E5C-80453E60 00245C 0004+00 1/1 0/0 0/0 .sdata2          @3805 */
SECTION_SDATA2 static f32 lit_3805 = 1.0f;

/* 80453E60-80453E68 002460 0008+00 1/1 0/0 0/0 .sdata2          @3812 */
SECTION_SDATA2 static f64 lit_3812 = 4503601774854144.0 /* cast s32 to float */;

/* 80453E68-80453E6C 002468 0004+00 1/1 0/0 0/0 .sdata2          @3843 */
SECTION_SDATA2 static f32 lit_3843 = 7.0f / 10.0f;

/* 80453E6C-80453E70 00246C 0004+00 1/1 0/0 0/0 .sdata2          @3844 */
SECTION_SDATA2 static f32 lit_3844 = 15.0f;

/* 801ADE00-801ADEA0 1A8740 00A0+00 1/0 0/0 0/0 .text            dKyeff_Create__FP12kankyo_class */
// matching but need gameinfo setup
#ifdef NONMATCHING
u32 dKyeff_Create(kankyo_class* kankyo_class_ptr) {
    int strcmp_result;
    OSTime Time;
    OSCalendarTime CalendarTime;

    dKyw_wether_init();
    strcmp_result = strcmp(dComIfGp_getStartStageName(), "Name");
    if (strcmp_result == 0) {
        Time = OSGetTime();
        OSTicksToCalendarTime(
            Time,
            &CalendarTime);  // CONCAT44(iVar1,(int)((ulonglong)OVar2 >> 0x20)),&CalendarTime);
        lbl_8042CA54.field_0xe48 = 1.0f;
        lbl_8042CA54.field_0xe4c = 0.0f;
        lbl_8042CA54.field_0xe50 = 0.0f;
        lbl_8042CA54.field_0xe58 = 0.7f;
        lbl_8042CA54.field_0x1244 = CalendarTime.hours * 15.0f;
    }
    return 4;
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void dKyeff_Create(kankyo_class* param_0) {
    nofralloc
#include "asm/d/d_kyeff/dKyeff_Create__FP12kankyo_class.s"
}
#pragma pop
#endif

/* ############################################################################################## */
/* 803BC158-803BC16C -00001 0014+00 1/0 0/0 0/0 .data            l_dKyeff_Method */
SECTION_DATA static void* l_dKyeff_Method[5] = {
    (void*)dKyeff_Create__FP12kankyo_class, (void*)dKyeff_Delete__FP8dKyeff_c,
    (void*)dKyeff_Execute__FP8dKyeff_c,     (void*)dKyeff_IsDelete__FP8dKyeff_c,
    (void*)dKyeff_Draw__FP8dKyeff_c,
};

/* 803BC16C-803BC198 -00001 0028+04 0/0 0/0 1/0 .data            g_profile_KYEFF */
SECTION_DATA extern void* g_profile_KYEFF[10 + 1 /* padding */] = {
    (void*)0xFFFFFFFD,
    (void*)0x000CFFFD,
    (void*)0x03110000,
    (void*)&g_fpcLf_Method,
    (void*)0x000000F8,
    (void*)NULL,
    (void*)NULL,
    (void*)&g_fopKy_Method,
    (void*)0x00050000,
    (void*)&l_dKyeff_Method,
    /* padding */
    NULL,
};

/* 80394F38-80394F38 021598 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
