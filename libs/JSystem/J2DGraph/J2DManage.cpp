//
// Generated By: dol2asm
// Translation Unit: J2DManage
//

#include "JSystem/J2DGraph/J2DManage.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct JSUInputStream {
    /* 802DC298 */ void read(void*, s32);
};

struct J2DResReference {
    /* 8030CF10 */ void getResReference(u16) const;
    /* 8030CF44 */ void getName(u16) const;
};

struct J2DDataManage {
    /* 8030CE18 */ void get(char const*);
    /* 8030CE7C */ void get(JSUInputStream*);
};

//
// Forward References:
//

extern "C" void get__13J2DDataManageFPCc();
extern "C" void get__13J2DDataManageFP14JSUInputStream();
extern "C" void getResReference__15J2DResReferenceCFUs();
extern "C" void getName__15J2DResReferenceCFUs();

//
// External References:
//

extern "C" void read__14JSUInputStreamFPvl();
extern "C" void _savegpr_29();
extern "C" void _restgpr_29();
extern "C" void strcmp();

//
// Declarations:
//

/* 8030CE18-8030CE7C 307758 0064+00 1/1 3/3 0/0 .text            get__13J2DDataManageFPCc */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DDataManage::get(char const* param_0) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DManage/get__13J2DDataManageFPCc.s"
}
#pragma pop

/* 8030CE7C-8030CF10 3077BC 0094+00 0/0 1/1 0/0 .text get__13J2DDataManageFP14JSUInputStream */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DDataManage::get(JSUInputStream* param_0) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DManage/get__13J2DDataManageFP14JSUInputStream.s"
}
#pragma pop

/* 8030CF10-8030CF44 307850 0034+00 1/1 2/2 0/0 .text getResReference__15J2DResReferenceCFUs */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DResReference::getResReference(u16 param_0) const {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DManage/getResReference__15J2DResReferenceCFUs.s"
}
#pragma pop

/* ############################################################################################## */
/* 804349C0-80434AC8 0616E0 0101+07 1/1 0/0 0/0 .bss             p_name$494 */
static u8 p_name[257 + 7 /* padding */];

/* 8030CF44-8030D098 307884 0154+00 0/0 2/2 0/0 .text            getName__15J2DResReferenceCFUs */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DResReference::getName(u16 param_0) const {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DManage/getName__15J2DResReferenceCFUs.s"
}
#pragma pop
