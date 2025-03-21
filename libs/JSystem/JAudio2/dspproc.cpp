//
// Generated By: dol2asm
// Translation Unit: dspproc
//

#include "JSystem/JAudio2/dspproc.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Forward References:
//

extern "C" void DSPReleaseHalt2__FUl();
extern "C" static void setup_callback__FUs();
extern "C" void DsetupTable__FUlUlUlUlUl();
extern "C" void DsetMixerLevel__Ff();
extern "C" void DsyncFrame2ch__FUlUlUl();
extern "C" void DsyncFrame4ch__FUlUlUlUlUl();

//
// External References:
//

extern "C" void DSP_CreateMap2__FUl();
extern "C" void DSPSendCommands2__FPUlUlPFUs_v();

//
// Declarations:
//

/* 8029E4E0-8029E528 298E20 0048+00 0/0 1/1 0/0 .text            DSPReleaseHalt2__FUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
#pragma function_align 32
asm void DSPReleaseHalt2(u32 param_0) {
    nofralloc
#include "asm/JSystem/JAudio2/dspproc/DSPReleaseHalt2__FUl.s"
}
#pragma pop

/* ############################################################################################## */
/* 804512F8-80451300 0007F8 0004+04 2/2 0/0 0/0 .sbss            flag */
static u8 flag[4 + 4 /* padding */];

/* 8029E540-8029E54C 298E80 000C+00 1/1 0/0 0/0 .text            setup_callback__FUs */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
#pragma function_align 32
static asm void setup_callback(u16 param_0) {
    nofralloc
#include "asm/JSystem/JAudio2/dspproc/setup_callback__FUs.s"
}
#pragma pop

/* 8029E560-8029E5C4 298EA0 0064+00 0/0 1/1 0/0 .text            DsetupTable__FUlUlUlUlUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
#pragma function_align 32
asm void DsetupTable(u32 param_0, u32 param_1, u32 param_2, u32 param_3, u32 param_4) {
    nofralloc
#include "asm/JSystem/JAudio2/dspproc/DsetupTable__FUlUlUlUlUl.s"
}
#pragma pop

/* ############################################################################################## */
/* 804507C8-804507D0 000248 0002+06 3/3 0/0 0/0 .sdata           DSP_MIXERLEVEL */
SECTION_SDATA static u16 DSP_MIXERLEVEL[1 + 3 /* padding */] = {
    0x4000,
    /* padding */
    0x0000,
    0x0000,
    0x0000,
};

/* 80455770-80455778 003D70 0004+04 1/1 0/0 0/0 .sdata2          @333 */
SECTION_SDATA2 static f32 lit_333[1 + 1 /* padding */] = {
    4096.0f,
    /* padding */
    0.0f,
};

/* 8029E5E0-8029E604 298F20 0024+00 0/0 1/1 0/0 .text            DsetMixerLevel__Ff */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
#pragma function_align 32
asm void DsetMixerLevel(f32 param_0) {
    nofralloc
#include "asm/JSystem/JAudio2/dspproc/DsetMixerLevel__Ff.s"
}
#pragma pop

/* 8029E620-8029E674 298F60 0054+00 0/0 1/1 0/0 .text            DsyncFrame2ch__FUlUlUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
#pragma function_align 32
asm void DsyncFrame2ch(u32 param_0, u32 param_1, u32 param_2) {
    nofralloc
#include "asm/JSystem/JAudio2/dspproc/DsyncFrame2ch__FUlUlUl.s"
}
#pragma pop

/* 8029E680-8029E6D0 298FC0 0050+00 0/0 1/1 0/0 .text            DsyncFrame4ch__FUlUlUlUlUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
#pragma function_align 32
asm void DsyncFrame4ch(u32 param_0, u32 param_1, u32 param_2, u32 param_3, u32 param_4) {
    nofralloc
#include "asm/JSystem/JAudio2/dspproc/DsyncFrame4ch__FUlUlUlUlUl.s"
}
#pragma pop
