//
// Generated By: dol2asm
// Translation Unit: d_a_tag_msg
//

#include "rel/d/a/tag/d_a_tag_msg/d_a_tag_msg.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct request_of_phase_process_class {};

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
    /* 80018C8C */ ~fopAc_ac_c();
};

struct daTag_Msg_c {
    /* 8048F7F8 */ ~daTag_Msg_c();
    /* 8048F878 */ void create();
    /* 8048F954 */ void createHeap();
    /* 8048F9B4 */ void destroy();
    /* 8048F9E8 */ void execute();
    /* 8048FC68 */ bool draw();
    /* 8048FC70 */ void rangeCheck();
    /* 8048FE18 */ void otherCheck();
    /* 8048FF8C */ void getResName();
    /* 8048FF9C */ void getParam();
    /* 8049004C */ void cut_speak(int, int);

    static void* mEvtCutTBL[2];
};

struct daTag_Msg_Param_c {
    /* 80490128 */ ~daTag_Msg_Param_c();

    static u8 const m[1 + 3 /* padding */];
};

struct dSv_info_c {
    /* 80035200 */ void onSwitch(int, int);
    /* 80035360 */ void isSwitch(int, int) const;
};

struct dSv_event_flag_c {
    static u8 saveBitLabels[1644 + 4 /* padding */];
};

struct dSv_event_c {
    /* 800349BC */ void isEventBit(u16) const;
};

struct dMsgFlow_c {
    /* 80249F00 */ dMsgFlow_c();
    /* 80249F48 */ ~dMsgFlow_c();
    /* 80249F90 */ void init(fopAc_ac_c*, int, int, fopAc_ac_c**);
    /* 8024A2D8 */ void doFlow(fopAc_ac_c*, fopAc_ac_c**, int);
};

struct dEvt_control_c {
    /* 80042468 */ void reset();
};

struct dEvent_manager_c {
    /* 80047758 */ void getEventIdx(fopAc_ac_c*, char const*, u8);
    /* 80047A78 */ void endCheck(s16);
    /* 80047B1C */ void getMyStaffId(char const*, fopAc_ac_c*, int);
    /* 80047D4C */ void getIsAddvance(int);
    /* 80047E10 */ void getMyActIdx(int, char const* const*, int, int, int);
    /* 8004817C */ void cutEnd(int);
};

struct Vec {};

struct cXyz {
    /* 80266B34 */ void operator-(Vec const&) const;
};

//
// Forward References:
//

extern "C" static void createHeapCallBack__FP10fopAc_ac_c();
extern "C" void __dt__11daTag_Msg_cFv();
extern "C" void create__11daTag_Msg_cFv();
extern "C" void createHeap__11daTag_Msg_cFv();
extern "C" void destroy__11daTag_Msg_cFv();
extern "C" void execute__11daTag_Msg_cFv();
extern "C" bool draw__11daTag_Msg_cFv();
extern "C" void rangeCheck__11daTag_Msg_cFv();
extern "C" void otherCheck__11daTag_Msg_cFv();
extern "C" void getResName__11daTag_Msg_cFv();
extern "C" void getParam__11daTag_Msg_cFv();
extern "C" void cut_speak__11daTag_Msg_cFii();
extern "C" static void daTag_Msg_Create__FPv();
extern "C" static void daTag_Msg_Delete__FPv();
extern "C" static void daTag_Msg_Execute__FPv();
extern "C" static void daTag_Msg_Draw__FPv();
extern "C" static bool daTag_Msg_IsDelete__FPv();
extern "C" void __dt__17daTag_Msg_Param_cFv();
extern "C" u8 const m__17daTag_Msg_Param_c[1 + 3 /* padding */];
extern "C" extern char const* const d_a_tag_msg__stringBase0;
extern "C" void* mEvtCutTBL__11daTag_Msg_c[2];

//
// External References:
//

extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void __dt__10fopAc_ac_cFv();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_searchActorAngleY__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fopAcM_orderOtherEventId__FP10fopAc_ac_csUcUsUsUs();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void isEventBit__11dSv_event_cCFUs();
extern "C" void onSwitch__10dSv_info_cFii();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void reset__14dEvt_control_cFv();
extern "C" void getEventIdx__16dEvent_manager_cFP10fopAc_ac_cPCcUc();
extern "C" void endCheck__16dEvent_manager_cFs();
extern "C" void getMyStaffId__16dEvent_manager_cFPCcP10fopAc_ac_ci();
extern "C" void getIsAddvance__16dEvent_manager_cFi();
extern "C" void getMyActIdx__16dEvent_manager_cFiPCPCciii();
extern "C" void cutEnd__16dEvent_manager_cFi();
extern "C" void __ct__10dMsgFlow_cFv();
extern "C" void __dt__10dMsgFlow_cFv();
extern "C" void init__10dMsgFlow_cFP10fopAc_ac_ciiPP10fopAc_ac_c();
extern "C" void doFlow__10dMsgFlow_cFP10fopAc_ac_cPP10fopAc_ac_ci();
extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void PSVECSquareMag();
extern "C" void _savegpr_26();
extern "C" void _restgpr_26();
extern "C" void strcpy();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" u8 saveBitLabels__16dSv_event_flag_c[1644 + 4 /* padding */];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u32 __float_nan;
extern "C" extern u8 struct_80450D64[4];

//
// Declarations:
//

/* 8048F7D8-8048F7F8 000078 0020+00 1/1 0/0 0/0 .text            createHeapCallBack__FP10fopAc_ac_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void createHeapCallBack(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_msg/d_a_tag_msg/createHeapCallBack__FP10fopAc_ac_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 804901A4-804901A4 00002C 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_804901A4 = "TagMsg";
SECTION_DEAD static char const* const stringBase_804901AB = "SPEAK";
SECTION_DEAD static char const* const stringBase_804901B1 = "Tag_ms";
SECTION_DEAD static char const* const stringBase_804901B8 = "PAUSE";
#pragma pop

/* 804901C4-804901C8 -00001 0004+00 1/1 0/0 0/0 .data            l_resName */
SECTION_DATA static void* l_resName = (void*)&d_a_tag_msg__stringBase0;

/* 804901C8-804901D0 -00001 0008+00 1/1 0/0 0/0 .data            l_evtNameTBL */
SECTION_DATA static void* l_evtNameTBL[2] = {
    (void*)NULL,
    (void*)(((char*)&d_a_tag_msg__stringBase0) + 0x7),
};

/* 804901D0-804901D8 -00001 0008+00 1/1 0/0 0/0 .data            mEvtCutTBL__11daTag_Msg_c */
SECTION_DATA void* daTag_Msg_c::mEvtCutTBL[2] = {
    (void*)(((char*)&d_a_tag_msg__stringBase0) + 0x7),
    (void*)(((char*)&d_a_tag_msg__stringBase0) + 0x14),
};

/* 804901D8-804901F8 -00001 0020+00 1/0 0/0 0/0 .data            daTag_Msg_MethodTable */
SECTION_DATA static void* daTag_Msg_MethodTable[8] = {
    (void*)daTag_Msg_Create__FPv,
    (void*)daTag_Msg_Delete__FPv,
    (void*)daTag_Msg_Execute__FPv,
    (void*)daTag_Msg_IsDelete__FPv,
    (void*)daTag_Msg_Draw__FPv,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 804901F8-80490228 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_TAG_MSG */
SECTION_DATA extern void* g_profile_TAG_MSG[12] = {
    (void*)0xFFFFFFFD, (void*)0x0007FFFD,
    (void*)0x02D50000, (void*)&g_fpcLf_Method,
    (void*)0x000005E8, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x011D0000, (void*)&daTag_Msg_MethodTable,
    (void*)0x00044000, (void*)0x000E0000,
};

/* 80490228-80490234 000064 000C+00 2/2 0/0 0/0 .data            __vt__17daTag_Msg_Param_c */
SECTION_DATA extern void* __vt__17daTag_Msg_Param_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__17daTag_Msg_Param_cFv,
};

/* 80490234-80490240 000070 000C+00 2/2 0/0 0/0 .data            __vt__11daTag_Msg_c */
SECTION_DATA extern void* __vt__11daTag_Msg_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__11daTag_Msg_cFv,
};

/* 8048F7F8-8048F878 000098 0080+00 1/0 0/0 0/0 .text            __dt__11daTag_Msg_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daTag_Msg_c::~daTag_Msg_c() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_msg/d_a_tag_msg/__dt__11daTag_Msg_cFv.s"
}
#pragma pop

/* 8048F878-8048F954 000118 00DC+00 1/1 0/0 0/0 .text            create__11daTag_Msg_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTag_Msg_c::create() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_msg/d_a_tag_msg/create__11daTag_Msg_cFv.s"
}
#pragma pop

/* 8048F954-8048F9B4 0001F4 0060+00 1/1 0/0 0/0 .text            createHeap__11daTag_Msg_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTag_Msg_c::createHeap() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_msg/d_a_tag_msg/createHeap__11daTag_Msg_cFv.s"
}
#pragma pop

/* 8048F9B4-8048F9E8 000254 0034+00 1/1 0/0 0/0 .text            destroy__11daTag_Msg_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTag_Msg_c::destroy() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_msg/d_a_tag_msg/destroy__11daTag_Msg_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80490178-8049017C 000000 0001+03 1/1 0/0 0/0 .rodata          m__17daTag_Msg_Param_c */
SECTION_RODATA u8 const daTag_Msg_Param_c::m[1 + 3 /* padding */] = {
    0x00,
    /* padding */
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x80490178, &daTag_Msg_Param_c::m);

/* 8049017C-80490180 000004 0004+00 1/1 0/0 0/0 .rodata          @3757 */
SECTION_RODATA static f32 const lit_3757 = 150.0f;
COMPILER_STRIP_GATE(0x8049017C, &lit_3757);

/* 8048F9E8-8048FC68 000288 0280+00 1/1 0/0 0/0 .text            execute__11daTag_Msg_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTag_Msg_c::execute() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_msg/d_a_tag_msg/execute__11daTag_Msg_cFv.s"
}
#pragma pop

/* 8048FC68-8048FC70 000508 0008+00 1/1 0/0 0/0 .text            draw__11daTag_Msg_cFv */
bool daTag_Msg_c::draw() {
    return true;
}

/* ############################################################################################## */
/* 80490180-80490188 000008 0004+04 0/1 0/0 0/0 .rodata          @3813 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3813[4 + 4 /* padding */] = {
    0x00,
    0x00,
    0x00,
    0x00,
    /* padding */
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x80490180, &lit_3813);
#pragma pop

/* 80490188-80490190 000010 0008+00 0/1 0/0 0/0 .rodata          @3814 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3814[8] = {
    0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80490188, &lit_3814);
#pragma pop

/* 80490190-80490198 000018 0008+00 0/1 0/0 0/0 .rodata          @3815 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3815[8] = {
    0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80490190, &lit_3815);
#pragma pop

/* 80490198-804901A0 000020 0008+00 0/1 0/0 0/0 .rodata          @3816 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3816[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80490198, &lit_3816);
#pragma pop

/* 8048FC70-8048FE18 000510 01A8+00 1/1 0/0 0/0 .text            rangeCheck__11daTag_Msg_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTag_Msg_c::rangeCheck() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_msg/d_a_tag_msg/rangeCheck__11daTag_Msg_cFv.s"
}
#pragma pop

/* 8048FE18-8048FF8C 0006B8 0174+00 1/1 0/0 0/0 .text            otherCheck__11daTag_Msg_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTag_Msg_c::otherCheck() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_msg/d_a_tag_msg/otherCheck__11daTag_Msg_cFv.s"
}
#pragma pop

/* 8048FF8C-8048FF9C 00082C 0010+00 2/2 0/0 0/0 .text            getResName__11daTag_Msg_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTag_Msg_c::getResName() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_msg/d_a_tag_msg/getResName__11daTag_Msg_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 804901A0-804901A4 000028 0004+00 1/1 0/0 0/0 .rodata          @3880 */
SECTION_RODATA static f32 const lit_3880 = 100.0f;
COMPILER_STRIP_GATE(0x804901A0, &lit_3880);

/* 8048FF9C-8049004C 00083C 00B0+00 1/1 0/0 0/0 .text            getParam__11daTag_Msg_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTag_Msg_c::getParam() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_msg/d_a_tag_msg/getParam__11daTag_Msg_cFv.s"
}
#pragma pop

/* 8049004C-804900A0 0008EC 0054+00 1/1 0/0 0/0 .text            cut_speak__11daTag_Msg_cFii */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTag_Msg_c::cut_speak(int param_0, int param_1) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_msg/d_a_tag_msg/cut_speak__11daTag_Msg_cFii.s"
}
#pragma pop

/* 804900A0-804900C0 000940 0020+00 1/0 0/0 0/0 .text            daTag_Msg_Create__FPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daTag_Msg_Create(void* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_msg/d_a_tag_msg/daTag_Msg_Create__FPv.s"
}
#pragma pop

/* 804900C0-804900E0 000960 0020+00 1/0 0/0 0/0 .text            daTag_Msg_Delete__FPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daTag_Msg_Delete(void* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_msg/d_a_tag_msg/daTag_Msg_Delete__FPv.s"
}
#pragma pop

/* 804900E0-80490100 000980 0020+00 1/0 0/0 0/0 .text            daTag_Msg_Execute__FPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daTag_Msg_Execute(void* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_msg/d_a_tag_msg/daTag_Msg_Execute__FPv.s"
}
#pragma pop

/* 80490100-80490120 0009A0 0020+00 1/0 0/0 0/0 .text            daTag_Msg_Draw__FPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daTag_Msg_Draw(void* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_msg/d_a_tag_msg/daTag_Msg_Draw__FPv.s"
}
#pragma pop

/* 80490120-80490128 0009C0 0008+00 1/0 0/0 0/0 .text            daTag_Msg_IsDelete__FPv */
static bool daTag_Msg_IsDelete(void* param_0) {
    return true;
}

/* 80490128-80490170 0009C8 0048+00 1/0 0/0 0/0 .text            __dt__17daTag_Msg_Param_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daTag_Msg_Param_c::~daTag_Msg_Param_c() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_msg/d_a_tag_msg/__dt__17daTag_Msg_Param_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 804901BE-804901C4 000046 0006+00 0/0 0/0 0/0 .rodata          None */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_804901BE = "Timer";
#pragma pop

/* 804901A4-804901A4 00002C 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
