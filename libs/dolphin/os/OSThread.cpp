//
// Generated By: dol2asm
// Translation Unit: OSThread
//

#include "dolphin/os/OSThread.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Forward References:
//

extern "C" static void DefaultSwitchThreadCallback();
extern "C" void OSSetSwitchThreadCallback();
extern "C" void __OSThreadInit();
extern "C" void OSInitThreadQueue();
extern "C" void OSGetCurrentThread();
extern "C" void OSIsThreadTerminated();
extern "C" void OSDisableScheduler();
extern "C" void OSEnableScheduler();
extern "C" static void UnsetRun();
extern "C" void __OSGetEffectivePriority();
extern "C" static void SetEffectivePriority();
extern "C" void __OSPromoteThread();
extern "C" static void SelectThread();
extern "C" void __OSReschedule();
extern "C" void OSYieldThread();
extern "C" void OSCreateThread();
extern "C" void OSExitThread();
extern "C" void OSCancelThread();
extern "C" void OSDetachThread();
extern "C" void OSResumeThread();
extern "C" void OSSuspendThread();
extern "C" void OSSleepThread();
extern "C" void OSWakeupThread();
extern "C" void OSSetThreadPriority();
extern "C" void OSGetThreadPriority();
extern "C" static void CheckThreadQueue();
extern "C" void OSCheckActiveThreads();
extern "C" static void OSClearStack();
extern "C" extern u8 data_804516D0[8];

//
// External References:
//

extern "C" void OSReport();
extern "C" void OSPanic();
extern "C" void OSSetCurrentContext();
extern "C" void OSGetCurrentContext();
extern "C" void OSSaveContext();
extern "C" void OSLoadContext();
extern "C" void OSGetStackPointer();
extern "C" void OSClearContext();
extern "C" void OSInitContext();
extern "C" void OSDisableInterrupts();
extern "C" void OSEnableInterrupts();
extern "C" void OSRestoreInterrupts();
extern "C" void __OSUnlockAllMutex();
extern "C" void __OSCheckDeadLock();
extern "C" void __OSCheckMutexes();
extern "C" extern u8 __OSErrorTable[68 + 12 /* padding */];
extern "C" extern u32 __OSFpscrEnableBits;
extern "C" void _epilog();

//
// Declarations:
//

/* 80340AA4-80340AA8 33B3E4 0004+00 2/1 0/0 0/0 .text            DefaultSwitchThreadCallback */
static void DefaultSwitchThreadCallback() {
    /* empty function */
}

/* ############################################################################################## */
/* 804509B8-804509BC -00001 0004+00 3/3 0/0 0/0 .sdata           SwitchThreadCallback */
SECTION_SDATA static void* SwitchThreadCallback = (void*)DefaultSwitchThreadCallback;

/* 80340AA8-80340B1C 33B3E8 0074+00 0/0 1/1 0/0 .text            OSSetSwitchThreadCallback */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void OSSetSwitchThreadCallback() {
    nofralloc
#include "asm/dolphin/os/OSThread/OSSetSwitchThreadCallback.s"
}
#pragma pop

/* ############################################################################################## */
/* 8044BB78-8044BC78 078898 0100+00 6/6 0/0 0/0 .bss             RunQueue */
static u8 RunQueue[256];

/* 8044BC78-8044BF90 078998 0318+00 0/0 0/0 0/0 .bss             IdleThread */
#pragma push
#pragma force_active on
static u8 IdleThread[792];
#pragma pop

/* 8044BF90-8044C2A8 078CB0 0318+00 0/1 0/0 0/0 .bss             DefaultThread */
#pragma push
#pragma force_active on
static u8 DefaultThread[792];
#pragma pop

/* 8044C2A8-8044C570 078FC8 02C8+00 0/2 0/0 0/0 .bss             IdleContext */
#pragma push
#pragma force_active on
static u8 IdleContext[712];
#pragma pop

/* 804516C0-804516C4 000BC0 0004+00 7/7 0/0 0/0 .sbss            RunQueueBits */
static u8 RunQueueBits[4];

/* 804516C4-804516C8 000BC4 0004+00 11/11 0/0 0/0 .sbss            RunQueueHint */
static u8 RunQueueHint[4];

/* 804516C8-804516D0 000BC8 0004+04 4/4 0/0 0/0 .sbss            Reschedule */
static u8 Reschedule[4 + 4 /* padding */];

/* 80340B1C-80340C74 33B45C 0158+00 0/0 1/1 0/0 .text            __OSThreadInit */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __OSThreadInit() {
    nofralloc
#include "asm/dolphin/os/OSThread/__OSThreadInit.s"
}
#pragma pop

/* 80340C74-80340C84 33B5B4 0010+00 1/1 9/9 0/0 .text            OSInitThreadQueue */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void OSInitThreadQueue() {
    nofralloc
#include "asm/dolphin/os/OSThread/OSInitThreadQueue.s"
}
#pragma pop

/* 80340C84-80340C90 33B5C4 000C+00 0/0 20/20 0/0 .text            OSGetCurrentThread */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void OSGetCurrentThread() {
    nofralloc
#include "asm/dolphin/os/OSThread/OSGetCurrentThread.s"
}
#pragma pop

/* 80340C90-80340CC4 33B5D0 0034+00 0/0 1/1 0/0 .text            OSIsThreadTerminated */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void OSIsThreadTerminated() {
    nofralloc
#include "asm/dolphin/os/OSThread/OSIsThreadTerminated.s"
}
#pragma pop

/* 80340CC4-80340D04 33B604 0040+00 0/0 8/8 0/0 .text            OSDisableScheduler */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void OSDisableScheduler() {
    nofralloc
#include "asm/dolphin/os/OSThread/OSDisableScheduler.s"
}
#pragma pop

/* 80340D04-80340D44 33B644 0040+00 0/0 10/10 0/0 .text            OSEnableScheduler */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void OSEnableScheduler() {
    nofralloc
#include "asm/dolphin/os/OSThread/OSEnableScheduler.s"
}
#pragma pop

/* 80340D44-80340DAC 33B684 0068+00 3/3 0/0 0/0 .text            UnsetRun */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void UnsetRun() {
    nofralloc
#include "asm/dolphin/os/OSThread/UnsetRun.s"
}
#pragma pop

/* 80340DAC-80340DE8 33B6EC 003C+00 4/4 2/2 0/0 .text            __OSGetEffectivePriority */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __OSGetEffectivePriority() {
    nofralloc
#include "asm/dolphin/os/OSThread/__OSGetEffectivePriority.s"
}
#pragma pop

/* 80340DE8-80340FA8 33B728 01C0+00 5/5 0/0 0/0 .text            SetEffectivePriority */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void SetEffectivePriority() {
    nofralloc
#include "asm/dolphin/os/OSThread/SetEffectivePriority.s"
}
#pragma pop

/* 80340FA8-80340FF8 33B8E8 0050+00 0/0 1/1 0/0 .text            __OSPromoteThread */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __OSPromoteThread() {
    nofralloc
#include "asm/dolphin/os/OSThread/__OSPromoteThread.s"
}
#pragma pop

/* 80340FF8-80341220 33B938 0228+00 9/9 0/0 0/0 .text            SelectThread */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void SelectThread() {
    nofralloc
#include "asm/dolphin/os/OSThread/SelectThread.s"
}
#pragma pop

/* 80341220-80341250 33BB60 0030+00 0/0 3/3 0/0 .text            __OSReschedule */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __OSReschedule() {
    nofralloc
#include "asm/dolphin/os/OSThread/__OSReschedule.s"
}
#pragma pop

/* 80341250-8034128C 33BB90 003C+00 0/0 2/2 0/0 .text            OSYieldThread */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void OSYieldThread() {
    nofralloc
#include "asm/dolphin/os/OSThread/OSYieldThread.s"
}
#pragma pop

/* 8034128C-80341474 33BBCC 01E8+00 0/0 5/5 3/3 .text            OSCreateThread */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void OSCreateThread() {
    nofralloc
#include "asm/dolphin/os/OSThread/OSCreateThread.s"
}
#pragma pop

/* 80341474-80341558 33BDB4 00E4+00 1/1 1/1 0/0 .text            OSExitThread */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void OSExitThread() {
    nofralloc
#include "asm/dolphin/os/OSThread/OSExitThread.s"
}
#pragma pop

/* 80341558-80341714 33BE98 01BC+00 0/0 4/4 3/3 .text            OSCancelThread */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void OSCancelThread() {
    nofralloc
#include "asm/dolphin/os/OSThread/OSCancelThread.s"
}
#pragma pop

/* 80341714-803417B4 33C054 00A0+00 0/0 2/2 0/0 .text            OSDetachThread */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void OSDetachThread() {
    nofralloc
#include "asm/dolphin/os/OSThread/OSDetachThread.s"
}
#pragma pop

/* 803417B4-80341A3C 33C0F4 0288+00 0/0 13/13 3/3 .text            OSResumeThread */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void OSResumeThread() {
    nofralloc
#include "asm/dolphin/os/OSThread/OSResumeThread.s"
}
#pragma pop

/* 80341A3C-80341BAC 33C37C 0170+00 0/0 7/7 4/4 .text            OSSuspendThread */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void OSSuspendThread() {
    nofralloc
#include "asm/dolphin/os/OSThread/OSSuspendThread.s"
}
#pragma pop

/* 80341BAC-80341C98 33C4EC 00EC+00 0/0 12/12 0/0 .text            OSSleepThread */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void OSSleepThread() {
    nofralloc
#include "asm/dolphin/os/OSThread/OSSleepThread.s"
}
#pragma pop

/* 80341C98-80341D9C 33C5D8 0104+00 3/3 13/13 0/0 .text            OSWakeupThread */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void OSWakeupThread() {
    nofralloc
#include "asm/dolphin/os/OSThread/OSWakeupThread.s"
}
#pragma pop

/* 80341D9C-80341E5C 33C6DC 00C0+00 0/0 1/1 0/0 .text            OSSetThreadPriority */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void OSSetThreadPriority() {
    nofralloc
#include "asm/dolphin/os/OSThread/OSSetThreadPriority.s"
}
#pragma pop

/* 80341E5C-80341E64 33C79C 0008+00 0/0 4/4 0/0 .text            OSGetThreadPriority */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void OSGetThreadPriority() {
    nofralloc
#include "asm/dolphin/os/OSThread/OSGetThreadPriority.s"
}
#pragma pop

/* 80341E64-80341F00 33C7A4 009C+00 1/1 0/0 0/0 .text            CheckThreadQueue */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void CheckThreadQueue() {
    nofralloc
#include "asm/dolphin/os/OSThread/CheckThreadQueue.s"
}
#pragma pop

/* ############################################################################################## */
/* 803D0838-803D0898 02D958 005F+01 1/1 0/0 0/0 .data            @831 */
SECTION_DATA static u8 lit_831[95 + 1 /* padding */] = {
    0x4F,
    0x53,
    0x43,
    0x68,
    0x65,
    0x63,
    0x6B,
    0x41,
    0x63,
    0x74,
    0x69,
    0x76,
    0x65,
    0x54,
    0x68,
    0x72,
    0x65,
    0x61,
    0x64,
    0x73,
    0x3A,
    0x20,
    0x46,
    0x61,
    0x69,
    0x6C,
    0x65,
    0x64,
    0x20,
    0x52,
    0x75,
    0x6E,
    0x51,
    0x75,
    0x65,
    0x75,
    0x65,
    0x5B,
    0x70,
    0x72,
    0x69,
    0x6F,
    0x5D,
    0x2E,
    0x68,
    0x65,
    0x61,
    0x64,
    0x20,
    0x21,
    0x3D,
    0x20,
    0x4E,
    0x55,
    0x4C,
    0x4C,
    0x20,
    0x26,
    0x26,
    0x20,
    0x52,
    0x75,
    0x6E,
    0x51,
    0x75,
    0x65,
    0x75,
    0x65,
    0x5B,
    0x70,
    0x72,
    0x69,
    0x6F,
    0x5D,
    0x2E,
    0x74,
    0x61,
    0x69,
    0x6C,
    0x20,
    0x21,
    0x3D,
    0x20,
    0x4E,
    0x55,
    0x4C,
    0x4C,
    0x20,
    0x69,
    0x6E,
    0x20,
    0x25,
    0x64,
    0x0A,
    0x00,
    /* padding */
    0x00,
};

/* 803D0898-803D08A4 02D9B8 000B+01 0/1 0/0 0/0 .data            @832 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 lit_832[11 + 1 /* padding */] = {
    0x4F,
    0x53,
    0x54,
    0x68,
    0x72,
    0x65,
    0x61,
    0x64,
    0x2E,
    0x63,
    0x00,
    /* padding */
    0x00,
};
#pragma pop

/* 803D08A4-803D0904 02D9C4 005F+01 0/1 0/0 0/0 .data            @834 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 lit_834[95 + 1 /* padding */] = {
    0x4F,
    0x53,
    0x43,
    0x68,
    0x65,
    0x63,
    0x6B,
    0x41,
    0x63,
    0x74,
    0x69,
    0x76,
    0x65,
    0x54,
    0x68,
    0x72,
    0x65,
    0x61,
    0x64,
    0x73,
    0x3A,
    0x20,
    0x46,
    0x61,
    0x69,
    0x6C,
    0x65,
    0x64,
    0x20,
    0x52,
    0x75,
    0x6E,
    0x51,
    0x75,
    0x65,
    0x75,
    0x65,
    0x5B,
    0x70,
    0x72,
    0x69,
    0x6F,
    0x5D,
    0x2E,
    0x68,
    0x65,
    0x61,
    0x64,
    0x20,
    0x3D,
    0x3D,
    0x20,
    0x4E,
    0x55,
    0x4C,
    0x4C,
    0x20,
    0x26,
    0x26,
    0x20,
    0x52,
    0x75,
    0x6E,
    0x51,
    0x75,
    0x65,
    0x75,
    0x65,
    0x5B,
    0x70,
    0x72,
    0x69,
    0x6F,
    0x5D,
    0x2E,
    0x74,
    0x61,
    0x69,
    0x6C,
    0x20,
    0x3D,
    0x3D,
    0x20,
    0x4E,
    0x55,
    0x4C,
    0x4C,
    0x20,
    0x69,
    0x6E,
    0x20,
    0x25,
    0x64,
    0x0A,
    0x00,
    /* padding */
    0x00,
};
#pragma pop

/* 803D0904-803D094C 02DA24 0046+02 0/1 0/0 0/0 .data            @835 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 lit_835[70 + 2 /* padding */] = {
    0x4F,
    0x53,
    0x43,
    0x68,
    0x65,
    0x63,
    0x6B,
    0x41,
    0x63,
    0x74,
    0x69,
    0x76,
    0x65,
    0x54,
    0x68,
    0x72,
    0x65,
    0x61,
    0x64,
    0x73,
    0x3A,
    0x20,
    0x46,
    0x61,
    0x69,
    0x6C,
    0x65,
    0x64,
    0x20,
    0x43,
    0x68,
    0x65,
    0x63,
    0x6B,
    0x54,
    0x68,
    0x72,
    0x65,
    0x61,
    0x64,
    0x51,
    0x75,
    0x65,
    0x75,
    0x65,
    0x28,
    0x26,
    0x52,
    0x75,
    0x6E,
    0x51,
    0x75,
    0x65,
    0x75,
    0x65,
    0x5B,
    0x70,
    0x72,
    0x69,
    0x6F,
    0x5D,
    0x29,
    0x20,
    0x69,
    0x6E,
    0x20,
    0x25,
    0x64,
    0x0A,
    0x00,
    /* padding */
    0x00,
    0x00,
};
#pragma pop

/* 803D094C-803D09CC 02DA6C 007E+02 0/1 0/0 0/0 .data            @836 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 lit_836[126 + 2 /* padding */] = {
    0x4F,
    0x53,
    0x43,
    0x68,
    0x65,
    0x63,
    0x6B,
    0x41,
    0x63,
    0x74,
    0x69,
    0x76,
    0x65,
    0x54,
    0x68,
    0x72,
    0x65,
    0x61,
    0x64,
    0x73,
    0x3A,
    0x20,
    0x46,
    0x61,
    0x69,
    0x6C,
    0x65,
    0x64,
    0x20,
    0x5F,
    0x5F,
    0x4F,
    0x53,
    0x41,
    0x63,
    0x74,
    0x69,
    0x76,
    0x65,
    0x54,
    0x68,
    0x72,
    0x65,
    0x61,
    0x64,
    0x51,
    0x75,
    0x65,
    0x75,
    0x65,
    0x2E,
    0x68,
    0x65,
    0x61,
    0x64,
    0x20,
    0x3D,
    0x3D,
    0x20,
    0x4E,
    0x55,
    0x4C,
    0x4C,
    0x20,
    0x7C,
    0x7C,
    0x20,
    0x5F,
    0x5F,
    0x4F,
    0x53,
    0x41,
    0x63,
    0x74,
    0x69,
    0x76,
    0x65,
    0x54,
    0x68,
    0x72,
    0x65,
    0x61,
    0x64,
    0x51,
    0x75,
    0x65,
    0x75,
    0x65,
    0x2E,
    0x68,
    0x65,
    0x61,
    0x64,
    0x2D,
    0x3E,
    0x6C,
    0x69,
    0x6E,
    0x6B,
    0x41,
    0x63,
    0x74,
    0x69,
    0x76,
    0x65,
    0x2E,
    0x70,
    0x72,
    0x65,
    0x76,
    0x20,
    0x3D,
    0x3D,
    0x20,
    0x4E,
    0x55,
    0x4C,
    0x4C,
    0x20,
    0x69,
    0x6E,
    0x20,
    0x25,
    0x64,
    0x0A,
    0x00,
    /* padding */
    0x00,
    0x00,
};
#pragma pop

/* 803D09CC-803D0A4C 02DAEC 007E+02 0/1 0/0 0/0 .data            @837 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 lit_837[126 + 2 /* padding */] = {
    0x4F,
    0x53,
    0x43,
    0x68,
    0x65,
    0x63,
    0x6B,
    0x41,
    0x63,
    0x74,
    0x69,
    0x76,
    0x65,
    0x54,
    0x68,
    0x72,
    0x65,
    0x61,
    0x64,
    0x73,
    0x3A,
    0x20,
    0x46,
    0x61,
    0x69,
    0x6C,
    0x65,
    0x64,
    0x20,
    0x5F,
    0x5F,
    0x4F,
    0x53,
    0x41,
    0x63,
    0x74,
    0x69,
    0x76,
    0x65,
    0x54,
    0x68,
    0x72,
    0x65,
    0x61,
    0x64,
    0x51,
    0x75,
    0x65,
    0x75,
    0x65,
    0x2E,
    0x74,
    0x61,
    0x69,
    0x6C,
    0x20,
    0x3D,
    0x3D,
    0x20,
    0x4E,
    0x55,
    0x4C,
    0x4C,
    0x20,
    0x7C,
    0x7C,
    0x20,
    0x5F,
    0x5F,
    0x4F,
    0x53,
    0x41,
    0x63,
    0x74,
    0x69,
    0x76,
    0x65,
    0x54,
    0x68,
    0x72,
    0x65,
    0x61,
    0x64,
    0x51,
    0x75,
    0x65,
    0x75,
    0x65,
    0x2E,
    0x74,
    0x61,
    0x69,
    0x6C,
    0x2D,
    0x3E,
    0x6C,
    0x69,
    0x6E,
    0x6B,
    0x41,
    0x63,
    0x74,
    0x69,
    0x76,
    0x65,
    0x2E,
    0x6E,
    0x65,
    0x78,
    0x74,
    0x20,
    0x3D,
    0x3D,
    0x20,
    0x4E,
    0x55,
    0x4C,
    0x4C,
    0x20,
    0x69,
    0x6E,
    0x20,
    0x25,
    0x64,
    0x0A,
    0x00,
    /* padding */
    0x00,
    0x00,
};
#pragma pop

/* 803D0A4C-803D0AC8 02DB6C 007A+02 0/1 0/0 0/0 .data            @838 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 lit_838[122 + 2 /* padding */] = {
    0x4F,
    0x53,
    0x43,
    0x68,
    0x65,
    0x63,
    0x6B,
    0x41,
    0x63,
    0x74,
    0x69,
    0x76,
    0x65,
    0x54,
    0x68,
    0x72,
    0x65,
    0x61,
    0x64,
    0x73,
    0x3A,
    0x20,
    0x46,
    0x61,
    0x69,
    0x6C,
    0x65,
    0x64,
    0x20,
    0x74,
    0x68,
    0x72,
    0x65,
    0x61,
    0x64,
    0x2D,
    0x3E,
    0x6C,
    0x69,
    0x6E,
    0x6B,
    0x41,
    0x63,
    0x74,
    0x69,
    0x76,
    0x65,
    0x2E,
    0x6E,
    0x65,
    0x78,
    0x74,
    0x20,
    0x3D,
    0x3D,
    0x20,
    0x4E,
    0x55,
    0x4C,
    0x4C,
    0x20,
    0x7C,
    0x7C,
    0x20,
    0x74,
    0x68,
    0x72,
    0x65,
    0x61,
    0x64,
    0x20,
    0x3D,
    0x3D,
    0x20,
    0x74,
    0x68,
    0x72,
    0x65,
    0x61,
    0x64,
    0x2D,
    0x3E,
    0x6C,
    0x69,
    0x6E,
    0x6B,
    0x41,
    0x63,
    0x74,
    0x69,
    0x76,
    0x65,
    0x2E,
    0x6E,
    0x65,
    0x78,
    0x74,
    0x2D,
    0x3E,
    0x6C,
    0x69,
    0x6E,
    0x6B,
    0x41,
    0x63,
    0x74,
    0x69,
    0x76,
    0x65,
    0x2E,
    0x70,
    0x72,
    0x65,
    0x76,
    0x20,
    0x69,
    0x6E,
    0x20,
    0x25,
    0x64,
    0x0A,
    0x00,
    /* padding */
    0x00,
    0x00,
};
#pragma pop

/* 803D0AC8-803D0B44 02DBE8 007A+02 0/1 0/0 0/0 .data            @839 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 lit_839[122 + 2 /* padding */] = {
    0x4F,
    0x53,
    0x43,
    0x68,
    0x65,
    0x63,
    0x6B,
    0x41,
    0x63,
    0x74,
    0x69,
    0x76,
    0x65,
    0x54,
    0x68,
    0x72,
    0x65,
    0x61,
    0x64,
    0x73,
    0x3A,
    0x20,
    0x46,
    0x61,
    0x69,
    0x6C,
    0x65,
    0x64,
    0x20,
    0x74,
    0x68,
    0x72,
    0x65,
    0x61,
    0x64,
    0x2D,
    0x3E,
    0x6C,
    0x69,
    0x6E,
    0x6B,
    0x41,
    0x63,
    0x74,
    0x69,
    0x76,
    0x65,
    0x2E,
    0x70,
    0x72,
    0x65,
    0x76,
    0x20,
    0x3D,
    0x3D,
    0x20,
    0x4E,
    0x55,
    0x4C,
    0x4C,
    0x20,
    0x7C,
    0x7C,
    0x20,
    0x74,
    0x68,
    0x72,
    0x65,
    0x61,
    0x64,
    0x20,
    0x3D,
    0x3D,
    0x20,
    0x74,
    0x68,
    0x72,
    0x65,
    0x61,
    0x64,
    0x2D,
    0x3E,
    0x6C,
    0x69,
    0x6E,
    0x6B,
    0x41,
    0x63,
    0x74,
    0x69,
    0x76,
    0x65,
    0x2E,
    0x70,
    0x72,
    0x65,
    0x76,
    0x2D,
    0x3E,
    0x6C,
    0x69,
    0x6E,
    0x6B,
    0x41,
    0x63,
    0x74,
    0x69,
    0x76,
    0x65,
    0x2E,
    0x6E,
    0x65,
    0x78,
    0x74,
    0x20,
    0x69,
    0x6E,
    0x20,
    0x25,
    0x64,
    0x0A,
    0x00,
    /* padding */
    0x00,
    0x00,
};
#pragma pop

/* 803D0B44-803D0B98 02DC64 0051+03 0/1 0/0 0/0 .data            @840 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 lit_840[81 + 3 /* padding */] = {
    0x4F,
    0x53,
    0x43,
    0x68,
    0x65,
    0x63,
    0x6B,
    0x41,
    0x63,
    0x74,
    0x69,
    0x76,
    0x65,
    0x54,
    0x68,
    0x72,
    0x65,
    0x61,
    0x64,
    0x73,
    0x3A,
    0x20,
    0x46,
    0x61,
    0x69,
    0x6C,
    0x65,
    0x64,
    0x20,
    0x2A,
    0x28,
    0x74,
    0x68,
    0x72,
    0x65,
    0x61,
    0x64,
    0x2D,
    0x3E,
    0x73,
    0x74,
    0x61,
    0x63,
    0x6B,
    0x45,
    0x6E,
    0x64,
    0x29,
    0x20,
    0x3D,
    0x3D,
    0x20,
    0x4F,
    0x53,
    0x5F,
    0x54,
    0x48,
    0x52,
    0x45,
    0x41,
    0x44,
    0x5F,
    0x53,
    0x54,
    0x41,
    0x43,
    0x4B,
    0x5F,
    0x4D,
    0x41,
    0x47,
    0x49,
    0x43,
    0x20,
    0x69,
    0x6E,
    0x20,
    0x25,
    0x64,
    0x0A,
    0x00,
    /* padding */
    0x00,
    0x00,
    0x00,
};
#pragma pop

/* 803D0B98-803D0C0C 02DCB8 0071+03 0/1 0/0 0/0 .data            @841 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 lit_841[113 + 3 /* padding */] = {
    0x4F,
    0x53,
    0x43,
    0x68,
    0x65,
    0x63,
    0x6B,
    0x41,
    0x63,
    0x74,
    0x69,
    0x76,
    0x65,
    0x54,
    0x68,
    0x72,
    0x65,
    0x61,
    0x64,
    0x73,
    0x3A,
    0x20,
    0x46,
    0x61,
    0x69,
    0x6C,
    0x65,
    0x64,
    0x20,
    0x4F,
    0x53,
    0x5F,
    0x50,
    0x52,
    0x49,
    0x4F,
    0x52,
    0x49,
    0x54,
    0x59,
    0x5F,
    0x4D,
    0x49,
    0x4E,
    0x20,
    0x3C,
    0x3D,
    0x20,
    0x74,
    0x68,
    0x72,
    0x65,
    0x61,
    0x64,
    0x2D,
    0x3E,
    0x70,
    0x72,
    0x69,
    0x6F,
    0x72,
    0x69,
    0x74,
    0x79,
    0x20,
    0x26,
    0x26,
    0x20,
    0x74,
    0x68,
    0x72,
    0x65,
    0x61,
    0x64,
    0x2D,
    0x3E,
    0x70,
    0x72,
    0x69,
    0x6F,
    0x72,
    0x69,
    0x74,
    0x79,
    0x20,
    0x3C,
    0x3D,
    0x20,
    0x4F,
    0x53,
    0x5F,
    0x50,
    0x52,
    0x49,
    0x4F,
    0x52,
    0x49,
    0x54,
    0x59,
    0x5F,
    0x4D,
    0x41,
    0x58,
    0x2B,
    0x31,
    0x20,
    0x69,
    0x6E,
    0x20,
    0x25,
    0x64,
    0x0A,
    0x00,
    /* padding */
    0x00,
    0x00,
    0x00,
};
#pragma pop

/* 803D0C0C-803D0C48 02DD2C 0039+03 0/1 0/0 0/0 .data            @842 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 lit_842[57 + 3 /* padding */] = {
    0x4F,
    0x53,
    0x43,
    0x68,
    0x65,
    0x63,
    0x6B,
    0x41,
    0x63,
    0x74,
    0x69,
    0x76,
    0x65,
    0x54,
    0x68,
    0x72,
    0x65,
    0x61,
    0x64,
    0x73,
    0x3A,
    0x20,
    0x46,
    0x61,
    0x69,
    0x6C,
    0x65,
    0x64,
    0x20,
    0x30,
    0x20,
    0x3C,
    0x3D,
    0x20,
    0x74,
    0x68,
    0x72,
    0x65,
    0x61,
    0x64,
    0x2D,
    0x3E,
    0x73,
    0x75,
    0x73,
    0x70,
    0x65,
    0x6E,
    0x64,
    0x20,
    0x69,
    0x6E,
    0x20,
    0x25,
    0x64,
    0x0A,
    0x00,
    /* padding */
    0x00,
    0x00,
    0x00,
};
#pragma pop

/* 803D0C48-803D0C94 02DD68 0049+03 0/1 0/0 0/0 .data            @843 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 lit_843[73 + 3 /* padding */] = {
    0x4F,
    0x53,
    0x43,
    0x68,
    0x65,
    0x63,
    0x6B,
    0x41,
    0x63,
    0x74,
    0x69,
    0x76,
    0x65,
    0x54,
    0x68,
    0x72,
    0x65,
    0x61,
    0x64,
    0x73,
    0x3A,
    0x20,
    0x46,
    0x61,
    0x69,
    0x6C,
    0x65,
    0x64,
    0x20,
    0x43,
    0x68,
    0x65,
    0x63,
    0x6B,
    0x54,
    0x68,
    0x72,
    0x65,
    0x61,
    0x64,
    0x51,
    0x75,
    0x65,
    0x75,
    0x65,
    0x28,
    0x26,
    0x74,
    0x68,
    0x72,
    0x65,
    0x61,
    0x64,
    0x2D,
    0x3E,
    0x71,
    0x75,
    0x65,
    0x75,
    0x65,
    0x4A,
    0x6F,
    0x69,
    0x6E,
    0x29,
    0x20,
    0x69,
    0x6E,
    0x20,
    0x25,
    0x64,
    0x0A,
    0x00,
    /* padding */
    0x00,
    0x00,
    0x00,
};
#pragma pop

/* 803D0C94-803D0CE8 02DDB4 0051+03 0/1 0/0 0/0 .data            @844 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 lit_844[81 + 3 /* padding */] = {
    0x4F,
    0x53,
    0x43,
    0x68,
    0x65,
    0x63,
    0x6B,
    0x41,
    0x63,
    0x74,
    0x69,
    0x76,
    0x65,
    0x54,
    0x68,
    0x72,
    0x65,
    0x61,
    0x64,
    0x73,
    0x3A,
    0x20,
    0x46,
    0x61,
    0x69,
    0x6C,
    0x65,
    0x64,
    0x20,
    0x74,
    0x68,
    0x72,
    0x65,
    0x61,
    0x64,
    0x2D,
    0x3E,
    0x71,
    0x75,
    0x65,
    0x75,
    0x65,
    0x20,
    0x3D,
    0x3D,
    0x20,
    0x26,
    0x52,
    0x75,
    0x6E,
    0x51,
    0x75,
    0x65,
    0x75,
    0x65,
    0x5B,
    0x74,
    0x68,
    0x72,
    0x65,
    0x61,
    0x64,
    0x2D,
    0x3E,
    0x70,
    0x72,
    0x69,
    0x6F,
    0x72,
    0x69,
    0x74,
    0x79,
    0x5D,
    0x20,
    0x69,
    0x6E,
    0x20,
    0x25,
    0x64,
    0x0A,
    0x00,
    /* padding */
    0x00,
    0x00,
    0x00,
};
#pragma pop

/* 803D0CE8-803D0D3C 02DE08 0052+02 0/1 0/0 0/0 .data            @845 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 lit_845[82 + 2 /* padding */] = {
    0x4F,
    0x53,
    0x43,
    0x68,
    0x65,
    0x63,
    0x6B,
    0x41,
    0x63,
    0x74,
    0x69,
    0x76,
    0x65,
    0x54,
    0x68,
    0x72,
    0x65,
    0x61,
    0x64,
    0x73,
    0x3A,
    0x20,
    0x46,
    0x61,
    0x69,
    0x6C,
    0x65,
    0x64,
    0x20,
    0x49,
    0x73,
    0x4D,
    0x65,
    0x6D,
    0x62,
    0x65,
    0x72,
    0x28,
    0x26,
    0x52,
    0x75,
    0x6E,
    0x51,
    0x75,
    0x65,
    0x75,
    0x65,
    0x5B,
    0x74,
    0x68,
    0x72,
    0x65,
    0x61,
    0x64,
    0x2D,
    0x3E,
    0x70,
    0x72,
    0x69,
    0x6F,
    0x72,
    0x69,
    0x74,
    0x79,
    0x5D,
    0x2C,
    0x20,
    0x74,
    0x68,
    0x72,
    0x65,
    0x61,
    0x64,
    0x29,
    0x20,
    0x69,
    0x6E,
    0x20,
    0x25,
    0x64,
    0x0A,
    0x00,
    /* padding */
    0x00,
    0x00,
};
#pragma pop

/* 803D0D3C-803D0D98 02DE5C 0059+03 0/1 0/0 0/0 .data            @846 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 lit_846[89 + 3 /* padding */] = {
    0x4F,
    0x53,
    0x43,
    0x68,
    0x65,
    0x63,
    0x6B,
    0x41,
    0x63,
    0x74,
    0x69,
    0x76,
    0x65,
    0x54,
    0x68,
    0x72,
    0x65,
    0x61,
    0x64,
    0x73,
    0x3A,
    0x20,
    0x46,
    0x61,
    0x69,
    0x6C,
    0x65,
    0x64,
    0x20,
    0x74,
    0x68,
    0x72,
    0x65,
    0x61,
    0x64,
    0x2D,
    0x3E,
    0x70,
    0x72,
    0x69,
    0x6F,
    0x72,
    0x69,
    0x74,
    0x79,
    0x20,
    0x3D,
    0x3D,
    0x20,
    0x5F,
    0x5F,
    0x4F,
    0x53,
    0x47,
    0x65,
    0x74,
    0x45,
    0x66,
    0x66,
    0x65,
    0x63,
    0x74,
    0x69,
    0x76,
    0x65,
    0x50,
    0x72,
    0x69,
    0x6F,
    0x72,
    0x69,
    0x74,
    0x79,
    0x28,
    0x74,
    0x68,
    0x72,
    0x65,
    0x61,
    0x64,
    0x29,
    0x20,
    0x69,
    0x6E,
    0x20,
    0x25,
    0x64,
    0x0A,
    0x00,
    /* padding */
    0x00,
    0x00,
    0x00,
};
#pragma pop

/* 803D0D98-803D0DDC 02DEB8 0042+02 0/1 0/0 0/0 .data            @847 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 lit_847[66 + 2 /* padding */] = {
    0x4F,
    0x53,
    0x43,
    0x68,
    0x65,
    0x63,
    0x6B,
    0x41,
    0x63,
    0x74,
    0x69,
    0x76,
    0x65,
    0x54,
    0x68,
    0x72,
    0x65,
    0x61,
    0x64,
    0x73,
    0x3A,
    0x20,
    0x46,
    0x61,
    0x69,
    0x6C,
    0x65,
    0x64,
    0x20,
    0x21,
    0x49,
    0x73,
    0x53,
    0x75,
    0x73,
    0x70,
    0x65,
    0x6E,
    0x64,
    0x65,
    0x64,
    0x28,
    0x74,
    0x68,
    0x72,
    0x65,
    0x61,
    0x64,
    0x2D,
    0x3E,
    0x73,
    0x75,
    0x73,
    0x70,
    0x65,
    0x6E,
    0x64,
    0x29,
    0x20,
    0x69,
    0x6E,
    0x20,
    0x25,
    0x64,
    0x0A,
    0x00,
    /* padding */
    0x00,
    0x00,
};
#pragma pop

/* 803D0DDC-803D0E18 02DEFC 003A+02 0/1 0/0 0/0 .data            @848 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 lit_848[58 + 2 /* padding */] = {
    0x4F,
    0x53,
    0x43,
    0x68,
    0x65,
    0x63,
    0x6B,
    0x41,
    0x63,
    0x74,
    0x69,
    0x76,
    0x65,
    0x54,
    0x68,
    0x72,
    0x65,
    0x61,
    0x64,
    0x73,
    0x3A,
    0x20,
    0x46,
    0x61,
    0x69,
    0x6C,
    0x65,
    0x64,
    0x20,
    0x74,
    0x68,
    0x72,
    0x65,
    0x61,
    0x64,
    0x2D,
    0x3E,
    0x71,
    0x75,
    0x65,
    0x75,
    0x65,
    0x20,
    0x3D,
    0x3D,
    0x20,
    0x4E,
    0x55,
    0x4C,
    0x4C,
    0x20,
    0x69,
    0x6E,
    0x20,
    0x25,
    0x64,
    0x0A,
    0x00,
    /* padding */
    0x00,
    0x00,
};
#pragma pop

/* 803D0E18-803D0E54 02DF38 003A+02 0/1 0/0 0/0 .data            @849 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 lit_849[58 + 2 /* padding */] = {
    0x4F,
    0x53,
    0x43,
    0x68,
    0x65,
    0x63,
    0x6B,
    0x41,
    0x63,
    0x74,
    0x69,
    0x76,
    0x65,
    0x54,
    0x68,
    0x72,
    0x65,
    0x61,
    0x64,
    0x73,
    0x3A,
    0x20,
    0x46,
    0x61,
    0x69,
    0x6C,
    0x65,
    0x64,
    0x20,
    0x74,
    0x68,
    0x72,
    0x65,
    0x61,
    0x64,
    0x2D,
    0x3E,
    0x71,
    0x75,
    0x65,
    0x75,
    0x65,
    0x20,
    0x21,
    0x3D,
    0x20,
    0x4E,
    0x55,
    0x4C,
    0x4C,
    0x20,
    0x69,
    0x6E,
    0x20,
    0x25,
    0x64,
    0x0A,
    0x00,
    /* padding */
    0x00,
    0x00,
};
#pragma pop

/* 803D0E54-803D0E98 02DF74 0044+00 0/1 0/0 0/0 .data            @850 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 lit_850[68] = {
    0x4F, 0x53, 0x43, 0x68, 0x65, 0x63, 0x6B, 0x41, 0x63, 0x74, 0x69, 0x76, 0x65, 0x54,
    0x68, 0x72, 0x65, 0x61, 0x64, 0x73, 0x3A, 0x20, 0x46, 0x61, 0x69, 0x6C, 0x65, 0x64,
    0x20, 0x43, 0x68, 0x65, 0x63, 0x6B, 0x54, 0x68, 0x72, 0x65, 0x61, 0x64, 0x51, 0x75,
    0x65, 0x75, 0x65, 0x28, 0x74, 0x68, 0x72, 0x65, 0x61, 0x64, 0x2D, 0x3E, 0x71, 0x75,
    0x65, 0x75, 0x65, 0x29, 0x20, 0x69, 0x6E, 0x20, 0x25, 0x64, 0x0A, 0x00,
};
#pragma pop

/* 803D0E98-803D0EDC 02DFB8 0044+00 0/1 0/0 0/0 .data            @851 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 lit_851[68] = {
    0x4F, 0x53, 0x43, 0x68, 0x65, 0x63, 0x6B, 0x41, 0x63, 0x74, 0x69, 0x76, 0x65, 0x54,
    0x68, 0x72, 0x65, 0x61, 0x64, 0x73, 0x3A, 0x20, 0x46, 0x61, 0x69, 0x6C, 0x65, 0x64,
    0x20, 0x49, 0x73, 0x4D, 0x65, 0x6D, 0x62, 0x65, 0x72, 0x28, 0x74, 0x68, 0x72, 0x65,
    0x61, 0x64, 0x2D, 0x3E, 0x71, 0x75, 0x65, 0x75, 0x65, 0x2C, 0x20, 0x74, 0x68, 0x72,
    0x65, 0x61, 0x64, 0x29, 0x20, 0x69, 0x6E, 0x20, 0x25, 0x64, 0x0A, 0x00,
};
#pragma pop

/* 803D0EDC-803D0F18 02DFFC 003B+01 0/1 0/0 0/0 .data            @852 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 lit_852[59 + 1 /* padding */] = {
    0x4F,
    0x53,
    0x43,
    0x68,
    0x65,
    0x63,
    0x6B,
    0x41,
    0x63,
    0x74,
    0x69,
    0x76,
    0x65,
    0x54,
    0x68,
    0x72,
    0x65,
    0x61,
    0x64,
    0x73,
    0x3A,
    0x20,
    0x46,
    0x61,
    0x69,
    0x6C,
    0x65,
    0x64,
    0x20,
    0x74,
    0x68,
    0x72,
    0x65,
    0x61,
    0x64,
    0x2D,
    0x3E,
    0x70,
    0x72,
    0x69,
    0x6F,
    0x72,
    0x69,
    0x74,
    0x79,
    0x20,
    0x3D,
    0x3D,
    0x20,
    0x33,
    0x32,
    0x20,
    0x69,
    0x6E,
    0x20,
    0x25,
    0x64,
    0x0A,
    0x00,
    /* padding */
    0x00,
};
#pragma pop

/* 803D0F18-803D0F58 02E038 003F+01 0/1 0/0 0/0 .data            @853 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 lit_853[63 + 1 /* padding */] = {
    0x4F,
    0x53,
    0x43,
    0x68,
    0x65,
    0x63,
    0x6B,
    0x41,
    0x63,
    0x74,
    0x69,
    0x76,
    0x65,
    0x54,
    0x68,
    0x72,
    0x65,
    0x61,
    0x64,
    0x73,
    0x3A,
    0x20,
    0x46,
    0x61,
    0x69,
    0x6C,
    0x65,
    0x64,
    0x20,
    0x21,
    0x5F,
    0x5F,
    0x4F,
    0x53,
    0x43,
    0x68,
    0x65,
    0x63,
    0x6B,
    0x44,
    0x65,
    0x61,
    0x64,
    0x4C,
    0x6F,
    0x63,
    0x6B,
    0x28,
    0x74,
    0x68,
    0x72,
    0x65,
    0x61,
    0x64,
    0x29,
    0x20,
    0x69,
    0x6E,
    0x20,
    0x25,
    0x64,
    0x0A,
    0x00,
    /* padding */
    0x00,
};
#pragma pop

/* 803D0F58-803D0FC0 02E078 0067+01 0/1 0/0 0/0 .data            @854 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 lit_854[103 + 1 /* padding */] = {
    0x4F,
    0x53,
    0x43,
    0x68,
    0x65,
    0x63,
    0x6B,
    0x41,
    0x63,
    0x74,
    0x69,
    0x76,
    0x65,
    0x54,
    0x68,
    0x72,
    0x65,
    0x61,
    0x64,
    0x73,
    0x3A,
    0x20,
    0x46,
    0x61,
    0x69,
    0x6C,
    0x65,
    0x64,
    0x20,
    0x74,
    0x68,
    0x72,
    0x65,
    0x61,
    0x64,
    0x2D,
    0x3E,
    0x71,
    0x75,
    0x65,
    0x75,
    0x65,
    0x4D,
    0x75,
    0x74,
    0x65,
    0x78,
    0x2E,
    0x68,
    0x65,
    0x61,
    0x64,
    0x20,
    0x3D,
    0x3D,
    0x20,
    0x4E,
    0x55,
    0x4C,
    0x4C,
    0x20,
    0x26,
    0x26,
    0x20,
    0x74,
    0x68,
    0x72,
    0x65,
    0x61,
    0x64,
    0x2D,
    0x3E,
    0x71,
    0x75,
    0x65,
    0x75,
    0x65,
    0x4D,
    0x75,
    0x74,
    0x65,
    0x78,
    0x2E,
    0x74,
    0x61,
    0x69,
    0x6C,
    0x20,
    0x3D,
    0x3D,
    0x20,
    0x4E,
    0x55,
    0x4C,
    0x4C,
    0x20,
    0x69,
    0x6E,
    0x20,
    0x25,
    0x64,
    0x0A,
    0x00,
    /* padding */
    0x00,
};
#pragma pop

/* 803D0FC0-803D1008 02E0E0 0045+03 0/1 0/0 0/0 .data            @855 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 lit_855[69 + 3 /* padding */] = {
    0x4F,
    0x53,
    0x43,
    0x68,
    0x65,
    0x63,
    0x6B,
    0x41,
    0x63,
    0x74,
    0x69,
    0x76,
    0x65,
    0x54,
    0x68,
    0x72,
    0x65,
    0x61,
    0x64,
    0x73,
    0x3A,
    0x20,
    0x46,
    0x61,
    0x69,
    0x6C,
    0x65,
    0x64,
    0x2E,
    0x20,
    0x75,
    0x6E,
    0x6B,
    0x6F,
    0x77,
    0x6E,
    0x20,
    0x74,
    0x68,
    0x72,
    0x65,
    0x61,
    0x64,
    0x20,
    0x73,
    0x74,
    0x61,
    0x74,
    0x65,
    0x20,
    0x28,
    0x25,
    0x64,
    0x29,
    0x20,
    0x6F,
    0x66,
    0x20,
    0x74,
    0x68,
    0x72,
    0x65,
    0x61,
    0x64,
    0x20,
    0x25,
    0x70,
    0x0A,
    0x00,
    /* padding */
    0x00,
    0x00,
    0x00,
};
#pragma pop

/* 803D1008-803D1048 02E128 003D+03 0/1 0/0 0/0 .data            @856 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 lit_856[61 + 3 /* padding */] = {
    0x4F,
    0x53,
    0x43,
    0x68,
    0x65,
    0x63,
    0x6B,
    0x41,
    0x63,
    0x74,
    0x69,
    0x76,
    0x65,
    0x54,
    0x68,
    0x72,
    0x65,
    0x61,
    0x64,
    0x73,
    0x3A,
    0x20,
    0x46,
    0x61,
    0x69,
    0x6C,
    0x65,
    0x64,
    0x20,
    0x5F,
    0x5F,
    0x4F,
    0x53,
    0x43,
    0x68,
    0x65,
    0x63,
    0x6B,
    0x4D,
    0x75,
    0x74,
    0x65,
    0x78,
    0x65,
    0x73,
    0x28,
    0x74,
    0x68,
    0x72,
    0x65,
    0x61,
    0x64,
    0x29,
    0x20,
    0x69,
    0x6E,
    0x20,
    0x25,
    0x64,
    0x0A,
    0x00,
    /* padding */
    0x00,
    0x00,
    0x00,
};
#pragma pop

/* 804509BC-804509C0 00043C 0001+03 1/1 0/0 0/0 .sdata           @833 */
SECTION_SDATA static u8 lit_833[1 + 3 /* padding */] = {
    0x00,
    /* padding */
    0x00,
    0x00,
    0x00,
};

/* 80341F00-80342650 33C840 0750+00 0/0 1/1 0/0 .text            OSCheckActiveThreads */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void OSCheckActiveThreads() {
    nofralloc
#include "asm/dolphin/os/OSThread/OSCheckActiveThreads.s"
}
#pragma pop

/* 80342650-803426FC 33CF90 00AC+00 1/1 0/0 0/0 .text            OSClearStack */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void OSClearStack() {
    nofralloc
#include "asm/dolphin/os/OSThread/OSClearStack.s"
}
#pragma pop

/* ############################################################################################## */
/* 804516D0-804516D8 000BD0 0008+00 0/0 2/1 0/0 .sbss            None */
extern u8 data_804516D0[8];
u8 data_804516D0[8];
