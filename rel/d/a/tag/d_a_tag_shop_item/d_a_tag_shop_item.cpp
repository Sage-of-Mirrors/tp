//
// Generated By: dol2asm
// Translation Unit: d_a_tag_shop_item
//

#include "rel/d/a/tag/d_a_tag_shop_item/d_a_tag_shop_item.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
    /* 80018C8C */ ~fopAc_ac_c();
};

struct daTag_ShopItem_c {
    /* 80D60B78 */ void create();
    /* 80D60D78 */ void Delete();
    /* 80D60E04 */ void Execute();
    /* 80D61024 */ bool Draw();
    /* 80D6102C */ void getType();
    /* 80D61038 */ void getGroupID();
    /* 80D61044 */ void getSwitchBit1();
    /* 80D61050 */ void getSwitchBit2();
    /* 80D6105C */ void initialize();
    /* 80D61168 */ ~daTag_ShopItem_c();
};

struct daItemBase_c {
    /* 80037A64 */ void hide();
    /* 80037A74 */ void show();
};

struct dSv_memBit_c {
    /* 80034810 */ void onSwitch(int);
    /* 80034838 */ void offSwitch(int);
    /* 80034860 */ void isSwitch(int) const;
};

struct dSv_event_flag_c {
    static u8 saveBitLabels[1644 + 4 /* padding */];
};

struct dSv_event_c {
    /* 800349BC */ void isEventBit(u16) const;
};

struct csXyz {};

struct cXyz {};

//
// Forward References:
//

extern "C" void create__16daTag_ShopItem_cFv();
extern "C" void Delete__16daTag_ShopItem_cFv();
extern "C" void Execute__16daTag_ShopItem_cFv();
extern "C" bool Draw__16daTag_ShopItem_cFv();
extern "C" void getType__16daTag_ShopItem_cFv();
extern "C" void getGroupID__16daTag_ShopItem_cFv();
extern "C" void getSwitchBit1__16daTag_ShopItem_cFv();
extern "C" void getSwitchBit2__16daTag_ShopItem_cFv();
extern "C" void initialize__16daTag_ShopItem_cFv();
extern "C" static void daTag_ShopItem_Create__FPv();
extern "C" static void daTag_ShopItem_Delete__FPv();
extern "C" static void daTag_ShopItem_Execute__FPv();
extern "C" static void daTag_ShopItem_Draw__FPv();
extern "C" static bool daTag_ShopItem_IsDelete__FPv();
extern "C" void __dt__16daTag_ShopItem_cFv();
extern "C" extern char const* const d_a_tag_shop_item__stringBase0;

//
// External References:
//

extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void __dt__10fopAc_ac_cFv();
extern "C" void fopAcIt_Judge__FPFPvPv_PvPv();
extern "C" void fopAcM_create__FsUlPC4cXyziPC5csXyzPC4cXyzSc();
extern "C" void fopAcM_setCullSizeBox__FP10fopAc_ac_cffffff();
extern "C" void fpcSch_JudgeByID__FPvPv();
extern "C" void onSwitch__12dSv_memBit_cFi();
extern "C" void offSwitch__12dSv_memBit_cFi();
extern "C" void isSwitch__12dSv_memBit_cCFi();
extern "C" void isEventBit__11dSv_event_cCFUs();
extern "C" void hide__12daItemBase_cFv();
extern "C" void show__12daItemBase_cFv();
extern "C" void __dl__FPv();
extern "C" void strcmp();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" u8 saveBitLabels__16dSv_event_flag_c[1644 + 4 /* padding */];
extern "C" extern u8 g_dComIfG_gameInfo[122384];

//
// Declarations:
//

/* ############################################################################################## */
/* 80D611D0-80D611D4 000000 0004+00 2/2 0/0 0/0 .rodata          @3684 */
SECTION_RODATA static f32 const lit_3684 = 90.0f;
COMPILER_STRIP_GATE(0x80D611D0, &lit_3684);

/* 80D611D4-80D611D8 000004 0004+00 1/1 0/0 0/0 .rodata          @3685 */
SECTION_RODATA static f32 const lit_3685 = 270.0f;
COMPILER_STRIP_GATE(0x80D611D4, &lit_3685);

/* 80D611E8-80D611E8 000018 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80D611E8 = "F_SP109";
#pragma pop

/* 80D611F0-80D61210 -00001 0020+00 1/0 0/0 0/0 .data            daTag_ShopItem_MethodTable */
SECTION_DATA static void* daTag_ShopItem_MethodTable[8] = {
    (void*)daTag_ShopItem_Create__FPv,
    (void*)daTag_ShopItem_Delete__FPv,
    (void*)daTag_ShopItem_Execute__FPv,
    (void*)daTag_ShopItem_IsDelete__FPv,
    (void*)daTag_ShopItem_Draw__FPv,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80D61210-80D61240 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_TAG_SHOPITM */
SECTION_DATA extern void* g_profile_TAG_SHOPITM[12] = {
    (void*)0xFFFFFFFD, (void*)0x0007FFFD,
    (void*)0x01270000, (void*)&g_fpcLf_Method,
    (void*)0x00000574, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x004B0000, (void*)&daTag_ShopItem_MethodTable,
    (void*)0x00064100, (void*)0x050E0000,
};

/* 80D61240-80D6124C 000050 000C+00 2/2 0/0 0/0 .data            __vt__16daTag_ShopItem_c */
SECTION_DATA extern void* __vt__16daTag_ShopItem_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__16daTag_ShopItem_cFv,
};

/* 80D60B78-80D60D78 000078 0200+00 1/1 0/0 0/0 .text            create__16daTag_ShopItem_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTag_ShopItem_c::create() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_shop_item/d_a_tag_shop_item/create__16daTag_ShopItem_cFv.s"
}
#pragma pop

/* 80D60D78-80D60E04 000278 008C+00 1/1 0/0 0/0 .text            Delete__16daTag_ShopItem_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTag_ShopItem_c::Delete() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_shop_item/d_a_tag_shop_item/Delete__16daTag_ShopItem_cFv.s"
}
#pragma pop

/* 80D60E04-80D61024 000304 0220+00 1/1 0/0 0/0 .text            Execute__16daTag_ShopItem_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTag_ShopItem_c::Execute() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_shop_item/d_a_tag_shop_item/Execute__16daTag_ShopItem_cFv.s"
}
#pragma pop

/* 80D61024-80D6102C 000524 0008+00 1/1 0/0 0/0 .text            Draw__16daTag_ShopItem_cFv */
bool daTag_ShopItem_c::Draw() {
    return true;
}

/* 80D6102C-80D61038 00052C 000C+00 1/1 0/0 0/0 .text            getType__16daTag_ShopItem_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTag_ShopItem_c::getType() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_shop_item/d_a_tag_shop_item/getType__16daTag_ShopItem_cFv.s"
}
#pragma pop

/* 80D61038-80D61044 000538 000C+00 3/3 0/0 0/0 .text            getGroupID__16daTag_ShopItem_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTag_ShopItem_c::getGroupID() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_shop_item/d_a_tag_shop_item/getGroupID__16daTag_ShopItem_cFv.s"
}
#pragma pop

/* 80D61044-80D61050 000544 000C+00 3/3 0/0 1/1 .text            getSwitchBit1__16daTag_ShopItem_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTag_ShopItem_c::getSwitchBit1() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_shop_item/d_a_tag_shop_item/getSwitchBit1__16daTag_ShopItem_cFv.s"
}
#pragma pop

/* 80D61050-80D6105C 000550 000C+00 3/3 0/0 0/0 .text            getSwitchBit2__16daTag_ShopItem_cFv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTag_ShopItem_c::getSwitchBit2() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_shop_item/d_a_tag_shop_item/getSwitchBit2__16daTag_ShopItem_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D611D8-80D611DC 000008 0004+00 0/1 0/0 0/0 .rodata          @3778 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3778 = -30.0f;
COMPILER_STRIP_GATE(0x80D611D8, &lit_3778);
#pragma pop

/* 80D611DC-80D611E0 00000C 0004+00 0/1 0/0 0/0 .rodata          @3779 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3779 = -15.0f;
COMPILER_STRIP_GATE(0x80D611DC, &lit_3779);
#pragma pop

/* 80D611E0-80D611E4 000010 0004+00 0/1 0/0 0/0 .rodata          @3780 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3780 = 30.0f;
COMPILER_STRIP_GATE(0x80D611E0, &lit_3780);
#pragma pop

/* 80D611E4-80D611E8 000014 0004+00 0/1 0/0 0/0 .rodata          @3781 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3781 = 45.0f;
COMPILER_STRIP_GATE(0x80D611E4, &lit_3781);
#pragma pop

/* 80D6105C-80D610E0 00055C 0084+00 1/1 0/0 0/0 .text            initialize__16daTag_ShopItem_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTag_ShopItem_c::initialize() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_shop_item/d_a_tag_shop_item/initialize__16daTag_ShopItem_cFv.s"
}
#pragma pop

/* 80D610E0-80D61100 0005E0 0020+00 1/0 0/0 0/0 .text            daTag_ShopItem_Create__FPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daTag_ShopItem_Create(void* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_shop_item/d_a_tag_shop_item/daTag_ShopItem_Create__FPv.s"
}
#pragma pop

/* 80D61100-80D61120 000600 0020+00 1/0 0/0 0/0 .text            daTag_ShopItem_Delete__FPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daTag_ShopItem_Delete(void* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_shop_item/d_a_tag_shop_item/daTag_ShopItem_Delete__FPv.s"
}
#pragma pop

/* 80D61120-80D61140 000620 0020+00 1/0 0/0 0/0 .text            daTag_ShopItem_Execute__FPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daTag_ShopItem_Execute(void* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_shop_item/d_a_tag_shop_item/daTag_ShopItem_Execute__FPv.s"
}
#pragma pop

/* 80D61140-80D61160 000640 0020+00 1/0 0/0 0/0 .text            daTag_ShopItem_Draw__FPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daTag_ShopItem_Draw(void* param_0) {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_shop_item/d_a_tag_shop_item/daTag_ShopItem_Draw__FPv.s"
}
#pragma pop

/* 80D61160-80D61168 000660 0008+00 1/0 0/0 0/0 .text            daTag_ShopItem_IsDelete__FPv */
static bool daTag_ShopItem_IsDelete(void* param_0) {
    return true;
}

/* 80D61168-80D611C8 000668 0060+00 1/0 0/0 0/0 .text            __dt__16daTag_ShopItem_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daTag_ShopItem_c::~daTag_ShopItem_c() {
    nofralloc
#include "asm/rel/d/a/tag/d_a_tag_shop_item/d_a_tag_shop_item/__dt__16daTag_ShopItem_cFv.s"
}
#pragma pop

/* 80D611E8-80D611E8 000018 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
