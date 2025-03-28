//
// Generated By: dol2asm
// Translation Unit: JUTException
//

#include "JSystem/JUtility/JUTException.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct JUTGamePad {
    struct EPadPort {};

    /* 802E06DC */ JUTGamePad(JUTGamePad::EPadPort);
    /* 802E07B0 */ ~JUTGamePad();
    /* 802E08E4 */ void read();
    /* 802E0C6C */ void checkResetCallback(s64);
};

struct JUTDirectFile {
    /* 802E87F8 */ JUTDirectFile();
    /* 802E881C */ ~JUTDirectFile();
    /* 802E8860 */ void fopen(char const*);
    /* 802E88FC */ void fclose();
    /* 802E8958 */ void fgets(void*, int);
};

struct JUTConsole {
    /* 802E73E4 */ void create(unsigned int, void*, u32);
    /* 802E75DC */ void getLineFromObjectSize(u32, unsigned int);
    /* 802E7BB8 */ void print_f(char const*, ...);
    /* 802E7C38 */ void print(char const*);
    /* 802E80A8 */ void scroll(int);
    /* 802E8184 */ void getUsedLine() const;
    /* 802E81A8 */ void getLineOffset() const;
};

struct JUTConsoleManager {
    /* 802E8450 */ void drawDirect(bool) const;
    /* 802E84C4 */ void setDirectConsole(JUTConsole*);

    static u8 sManager[4];
};

struct JSUPtrLink {
    /* 802DBDFC */ JSUPtrLink(void*);
};

struct JSUPtrList {
    /* 802DBE74 */ JSUPtrList(bool);
    /* 802DBEAC */ ~JSUPtrList();
    /* 802DBF4C */ void append(JSUPtrLink*);
};

template <typename A0>
struct JSUList {};
/* JSUList<JUTException::JUTExMapFile> */
struct JSUList__template13 {
    /* 802E4194 */ void func_802E4194(void* _this);
};

struct JKRThread {
    /* 802D1568 */ JKRThread(u32, int, int);
    /* 802D1758 */ ~JKRThread();
};

struct JKRHeap {
    static u8 sSystemHeap[4];
};

//
// Forward References:
//

extern "C" void __ct__12JUTExceptionFP14JUTDirectPrint();
extern "C" void create__12JUTExceptionFP14JUTDirectPrint();
extern "C" void run__12JUTExceptionFv();
extern "C" void errorHandler__12JUTExceptionFUsP9OSContextUlUl();
extern "C" void panic_f_va__12JUTExceptionFPCciPCcP16__va_list_struct();
extern "C" void panic_f__12JUTExceptionFPCciPCce();
extern "C" void setFPException__12JUTExceptionFUl();
extern "C" void showFloatSub__12JUTExceptionFif();
extern "C" void showFloat__12JUTExceptionFP9OSContext();
extern "C" void searchPartialModule__12JUTExceptionFUlPUlPUlPUlPUl();
extern "C" static void search_name_part__FPUcPUci();
extern "C" void showStack__12JUTExceptionFP9OSContext();
extern "C" void showMainInfo__12JUTExceptionFUsP9OSContextUlUl();
extern "C" void showGPR__12JUTExceptionFP9OSContext();
extern "C" void showMapInfo_subroutine__12JUTExceptionFUlb();
extern "C" void showGPRMap__12JUTExceptionFP9OSContext();
extern "C" void showSRR0Map__12JUTExceptionFP9OSContext();
extern "C" void printDebugInfo__12JUTExceptionFQ212JUTException9EInfoPageUsP9OSContextUlUl();
extern "C" void isEnablePad__12JUTExceptionCFv();
extern "C" void readPad__12JUTExceptionFPUlPUl();
extern "C" void printContext__12JUTExceptionFUsP9OSContextUlUl();
extern "C" void waitTime__12JUTExceptionFl();
extern "C" void createFB__12JUTExceptionFv();
extern "C" void setPreUserCallback__12JUTExceptionFPFUsP9OSContextUlUl_v();
extern "C" void setPostUserCallback__12JUTExceptionFPFUsP9OSContextUlUl_v();
extern "C" void appendMapFile__12JUTExceptionFPCc();
extern "C" void queryMapAddress__12JUTExceptionFPcUllPUlPUlPcUlbb();
extern "C" void queryMapAddress_single__12JUTExceptionFPcUllPUlPUlPcUlbb();
extern "C" void createConsole__12JUTExceptionFPvUl();
extern "C" void __ct__13JUTExternalFBFP16_GXRenderModeObj8_GXGammaPvUl();
extern "C" void __dt__12JUTExceptionFv();
extern "C" void __sinit_JUTException_cpp();
extern "C" void func_802E4194(void* _this);
extern "C" extern char const* const JUTException__stringBase0;
extern "C" u8 sMessageQueue__12JUTException[32];
extern "C" void* sCpuExpName__12JUTException[17];
extern "C" u8 sMapFileList__12JUTException[12 + 4 /* padding */];
extern "C" u8 sMessageBuffer__12JUTException[4 + 4 /* padding */];
extern "C" extern u8 data_804508F8[8];
extern "C" u8 sErrorManager__12JUTException[4];
extern "C" u8 sPreUserCallback__12JUTException[4];
extern "C" u8 sPostUserCallback__12JUTException[4];
extern "C" u8 sConsoleBuffer__12JUTException[4];
extern "C" u8 sConsoleBufferSize__12JUTException[4];
extern "C" u8 sConsole__12JUTException[4];
extern "C" u8 msr__12JUTException[4];
extern "C" u8 fpscr__12JUTException[4];

//
// External References:
//

SECTION_INIT void memcpy();
extern "C" void* __nw__FUl();
extern "C" void* __nw__FUlP7JKRHeapi();
extern "C" void __dl__FPv();
extern "C" void __ct__9JKRThreadFUlii();
extern "C" void __dt__9JKRThreadFv();
extern "C" void __ct__10JSUPtrLinkFPv();
extern "C" void __ct__10JSUPtrListFb();
extern "C" void __dt__10JSUPtrListFv();
extern "C" void append__10JSUPtrListFP10JSUPtrLink();
extern "C" void __ct__10JUTGamePadFQ210JUTGamePad8EPadPort();
extern "C" void __dt__10JUTGamePadFv();
extern "C" void read__10JUTGamePadFv();
extern "C" void checkResetCallback__10JUTGamePadFx();
extern "C" void changeFrameBuffer__14JUTDirectPrintFPvUsUs();
extern "C" void create__10JUTConsoleFUiPvUl();
extern "C" void getLineFromObjectSize__10JUTConsoleFUlUi();
extern "C" void print_f__10JUTConsoleFPCce();
extern "C" void print__10JUTConsoleFPCc();
extern "C" void scroll__10JUTConsoleFi();
extern "C" void getUsedLine__10JUTConsoleCFv();
extern "C" void getLineOffset__10JUTConsoleCFv();
extern "C" void drawDirect__17JUTConsoleManagerCFb();
extern "C" void setDirectConsole__17JUTConsoleManagerFP10JUTConsole();
extern "C" void __ct__13JUTDirectFileFv();
extern "C" void __dt__13JUTDirectFileFv();
extern "C" void fopen__13JUTDirectFileFPCc();
extern "C" void fclose__13JUTDirectFileFv();
extern "C" void fgets__13JUTDirectFileFPvi();
extern "C" void PPCMfmsr();
extern "C" void PPCMtmsr();
extern "C" void OSGetCurrentContext();
extern "C" void OSFillFPUContext();
extern "C" void OSSetErrorHandler();
extern "C" void OSProtectRange();
extern "C" void OSYieldThread();
extern "C" void VISetPreRetraceCallback();
extern "C" void VISetPostRetraceCallback();
extern "C" void VIConfigure();
extern "C" void VIFlush();
extern "C" void VISetNextFrameBuffer();
extern "C" void VIGetCurrentFrameBuffer();
extern "C" void VISetBlack();
extern "C" void VIGetRetraceCount();
extern "C" void __register_global_object();
extern "C" void _savegpr_16();
extern "C" void _savegpr_22();
extern "C" void _savegpr_24();
extern "C" void _savegpr_25();
extern "C" void _savegpr_26();
extern "C" void _savegpr_28();
extern "C" void _restgpr_16();
extern "C" void _restgpr_22();
extern "C" void _restgpr_24();
extern "C" void _restgpr_25();
extern "C" void _restgpr_26();
extern "C" void _restgpr_28();
extern "C" void __div2i();
extern "C" void vsnprintf();
extern "C" void strcmp();
extern "C" void strcat();
extern "C" void strcpy();
extern "C" void strtol();
extern "C" extern u8 GXNtsc480Int[60];
extern "C" extern u32 __OSFpscrEnableBits;
extern "C" u8 sSystemHeap__7JKRHeap[4];
extern "C" u8 sManager__17JUTConsoleManager[4];

//
// Declarations:
//

/* ############################################################################################## */
/* 8039D490-8039D490 029AF0 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_8039D490 = "SYSTEM RESET";
SECTION_DEAD static char const* const stringBase_8039D49D = "MACHINE CHECK";
SECTION_DEAD static char const* const stringBase_8039D4AB = "DSI";
SECTION_DEAD static char const* const stringBase_8039D4AF = "ISI";
SECTION_DEAD static char const* const stringBase_8039D4B3 = "EXTERNAL INTERRUPT";
SECTION_DEAD static char const* const stringBase_8039D4C6 = "ALIGNMENT";
SECTION_DEAD static char const* const stringBase_8039D4D0 = "PROGRAM";
SECTION_DEAD static char const* const stringBase_8039D4D8 = "FLOATING POINT";
SECTION_DEAD static char const* const stringBase_8039D4E7 = "DECREMENTER";
SECTION_DEAD static char const* const stringBase_8039D4F3 = "SYSTEM CALL";
SECTION_DEAD static char const* const stringBase_8039D4FF = "TRACE";
SECTION_DEAD static char const* const stringBase_8039D505 = "PERFORMACE MONITOR";
SECTION_DEAD static char const* const stringBase_8039D518 = "BREAK POINT";
SECTION_DEAD static char const* const stringBase_8039D524 = "SYSTEM INTERRUPT";
SECTION_DEAD static char const* const stringBase_8039D535 = "THERMAL INTERRUPT";
SECTION_DEAD static char const* const stringBase_8039D547 = "PROTECTION";
#pragma pop

/* 803CC620-803CC640 029740 0020+00 3/3 0/0 0/0 .data            sMessageQueue__12JUTException */
SECTION_DATA u8 JUTException::sMessageQueue[32] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 803CC640-803CC660 029760 0020+00 1/1 0/0 0/0 .data            c3bcnt */
SECTION_DATA static u8 c3bcnt[32] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 803CC660-803CC6A4 -00001 0044+00 1/1 0/0 0/0 .data            sCpuExpName__12JUTException */
SECTION_DATA void* JUTException::sCpuExpName[17] = {
    (void*)&JUTException__stringBase0,
    (void*)(((char*)&JUTException__stringBase0) + 0xD),
    (void*)(((char*)&JUTException__stringBase0) + 0x1B),
    (void*)(((char*)&JUTException__stringBase0) + 0x1F),
    (void*)(((char*)&JUTException__stringBase0) + 0x23),
    (void*)(((char*)&JUTException__stringBase0) + 0x36),
    (void*)(((char*)&JUTException__stringBase0) + 0x40),
    (void*)(((char*)&JUTException__stringBase0) + 0x48),
    (void*)(((char*)&JUTException__stringBase0) + 0x57),
    (void*)(((char*)&JUTException__stringBase0) + 0x63),
    (void*)(((char*)&JUTException__stringBase0) + 0x6F),
    (void*)(((char*)&JUTException__stringBase0) + 0x75),
    (void*)(((char*)&JUTException__stringBase0) + 0x88),
    (void*)(((char*)&JUTException__stringBase0) + 0x94),
    (void*)(((char*)&JUTException__stringBase0) + 0xA5),
    (void*)(((char*)&JUTException__stringBase0) + 0xB7),
    (void*)(((char*)&JUTException__stringBase0) + 0x48),
};

/* 803CC6A4-803CC6B8 0297C4 0010+04 2/2 0/0 0/0 .data            __vt__12JUTException */
SECTION_DATA extern void* __vt__12JUTException[4 + 1 /* padding */] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12JUTExceptionFv,
    (void*)run__12JUTExceptionFv,
    /* padding */
    NULL,
};

/* 80451508-8045150C 000A08 0004+00 4/4 3/3 0/0 .sbss            sErrorManager__12JUTException */
u8 JUTException::sErrorManager[4];

/* 8045150C-80451510 000A0C 0004+00 4/4 0/0 0/0 .sbss            sPreUserCallback__12JUTException */
u8 JUTException::sPreUserCallback[4];

/* 80451510-80451514 000A10 0004+00 3/3 0/0 0/0 .sbss            sPostUserCallback__12JUTException
 */
u8 JUTException::sPostUserCallback[4];

/* 802E1D5C-802E1E40 2DC69C 00E4+00 1/1 0/0 0/0 .text __ct__12JUTExceptionFP14JUTDirectPrint */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JUTException::JUTException(JUTDirectPrint* param_0) {
    nofralloc
#include "asm/JSystem/JUtility/JUTException/__ct__12JUTExceptionFP14JUTDirectPrint.s"
}
#pragma pop

/* 802E1E40-802E1EA8 2DC780 0068+00 0/0 1/1 0/0 .text create__12JUTExceptionFP14JUTDirectPrint */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTException::create(JUTDirectPrint* param_0) {
    nofralloc
#include "asm/JSystem/JUtility/JUTException/create__12JUTExceptionFP14JUTDirectPrint.s"
}
#pragma pop

/* ############################################################################################## */
/* 804508F0-804508F8 000370 0004+04 1/1 0/0 0/0 .sdata           sMessageBuffer__12JUTException */
SECTION_SDATA u8 JUTException::sMessageBuffer[4 + 4 /* padding */] = {
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

/* 802E1EA8-802E1FCC 2DC7E8 0124+00 1/0 0/0 0/0 .text            run__12JUTExceptionFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTException::run() {
    nofralloc
#include "asm/JSystem/JUtility/JUTException/run__12JUTExceptionFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80434578-8043458C 061298 0014+00 2/2 0/0 0/0 .bss             exCallbackObject */
static u8 exCallbackObject[20];

/* 80451514-80451518 000A14 0004+00 1/1 0/0 0/0 .sbss            sConsoleBuffer__12JUTException */
u8 JUTException::sConsoleBuffer[4];

/* 80451518-8045151C 000A18 0004+00 1/1 0/0 0/0 .sbss            sConsoleBufferSize__12JUTException
 */
u8 JUTException::sConsoleBufferSize[4];

/* 8045151C-80451520 000A1C 0004+00 13/13 1/1 0/0 .sbss            sConsole__12JUTException */
u8 JUTException::sConsole[4];

/* 80451520-80451524 000A20 0004+00 2/2 0/0 0/0 .sbss            msr__12JUTException */
u8 JUTException::msr[4];

/* 80451524-80451528 000A24 0004+00 3/3 0/0 0/0 .sbss            fpscr__12JUTException */
u8 JUTException::fpscr[4];

/* 802E1FCC-802E20C0 2DC90C 00F4+00 2/2 0/0 0/0 .text
 * errorHandler__12JUTExceptionFUsP9OSContextUlUl               */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTException::errorHandler(u16 param_0, OSContext* param_1, u32 param_2, u32 param_3) {
    nofralloc
#include "asm/JSystem/JUtility/JUTException/errorHandler__12JUTExceptionFUsP9OSContextUlUl.s"
}
#pragma pop

/* ############################################################################################## */
/* 8039D490-8039D490 029AF0 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_8039D552 = "%s in \"%s\" on line %d\n";
#pragma pop

/* 8043458C-80434598 0612AC 000C+00 1/1 0/0 0/0 .bss             @2182 */
static u8 lit_2182[12];

/* 80434598-804345A8 0612B8 000C+04 4/4 0/0 0/0 .bss             sMapFileList__12JUTException */
u8 JUTException::sMapFileList[12 + 4 /* padding */];

/* 804345A8-80434870 0612C8 02C8+00 1/1 0/0 0/0 .bss             context$2230 */
static u8 context[712];

/* 802E20C0-802E21FC 2DCA00 013C+00 1/1 0/0 0/0 .text
 * panic_f_va__12JUTExceptionFPCciPCcP16__va_list_struct        */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTException::panic_f_va(char const* param_0, int param_1, char const* param_2,
                                  __va_list_struct* param_3) {
    nofralloc
#include "asm/JSystem/JUtility/JUTException/panic_f_va__12JUTExceptionFPCciPCcP16__va_list_struct.s"
}
#pragma pop

/* 802E21FC-802E227C 2DCB3C 0080+00 0/0 16/16 0/0 .text            panic_f__12JUTExceptionFPCciPCce
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTException::panic_f(char const* param_0, int param_1, char const* param_2, ...) {
    nofralloc
#include "asm/JSystem/JUtility/JUTException/panic_f__12JUTExceptionFPCciPCce.s"
}
#pragma pop

/* 802E227C-802E22C4 2DCBBC 0048+00 1/1 0/0 0/0 .text            setFPException__12JUTExceptionFUl
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTException::setFPException(u32 param_0) {
    nofralloc
#include "asm/JSystem/JUtility/JUTException/setFPException__12JUTExceptionFUl.s"
}
#pragma pop

/* ############################################################################################## */
/* 8039D490-8039D490 029AF0 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_8039D569 = "F%02d: Nan      ";
SECTION_DEAD static char const* const stringBase_8039D57A = "F%02d:+Inf     ";
SECTION_DEAD static char const* const stringBase_8039D58A = "F%02d:-Inf     ";
SECTION_DEAD static char const* const stringBase_8039D59A = "F%02d: 0.0      ";
SECTION_DEAD static char const* const stringBase_8039D5AB = "F%02d:%+.3E";
#pragma pop

/* 80456050-80456054 004650 0004+00 1/1 0/0 0/0 .sdata2          @2293 */
SECTION_SDATA2 static u8 lit_2293[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 802E22C4-802E2454 2DCC04 0190+00 1/1 0/0 0/0 .text            showFloatSub__12JUTExceptionFif */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTException::showFloatSub(int param_0, f32 param_1) {
    nofralloc
#include "asm/JSystem/JUtility/JUTException/showFloatSub__12JUTExceptionFif.s"
}
#pragma pop

/* ############################################################################################## */
/* 8039D490-8039D490 029AF0 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_8039D5B7 =
    "-------------------------------- FPR\n";
SECTION_DEAD static char const* const stringBase_8039D5DD = " ";
SECTION_DEAD static char const* const stringBase_8039D5DF = "\n";
#pragma pop

/* 802E2454-802E2578 2DCD94 0124+00 1/1 0/0 0/0 .text showFloat__12JUTExceptionFP9OSContext */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTException::showFloat(OSContext* param_0) {
    nofralloc
#include "asm/JSystem/JUtility/JUTException/showFloat__12JUTExceptionFP9OSContext.s"
}
#pragma pop

/* 802E2578-802E2638 2DCEB8 00C0+00 1/1 0/0 0/0 .text
 * searchPartialModule__12JUTExceptionFUlPUlPUlPUlPUl           */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTException::searchPartialModule(u32 param_0, u32* param_1, u32* param_2, u32* param_3,
                                           u32* param_4) {
    nofralloc
#include "asm/JSystem/JUtility/JUTException/searchPartialModule__12JUTExceptionFUlPUlPUlPUlPUl.s"
}
#pragma pop

/* 802E2638-802E26B0 2DCF78 0078+00 1/1 0/0 0/0 .text            search_name_part__FPUcPUci */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void search_name_part(u8* param_0, u8* param_1, int param_2) {
    nofralloc
#include "asm/JSystem/JUtility/JUTException/search_name_part__FPUcPUci.s"
}
#pragma pop

/* ############################################################################################## */
/* 8039D490-8039D490 029AF0 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_8039D5E1 =
    "-------------------------------- TRACE\n";
SECTION_DEAD static char const* const stringBase_8039D609 = "Address:   BackChain   LR save\n";
SECTION_DEAD static char const* const stringBase_8039D629 = "Suppress trace.\n";
SECTION_DEAD static char const* const stringBase_8039D63A = "%08X:  %08X    %08X\n";
#pragma pop

/* 802E26B0-802E27B0 2DCFF0 0100+00 1/1 0/0 0/0 .text showStack__12JUTExceptionFP9OSContext */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTException::showStack(OSContext* param_0) {
    nofralloc
#include "asm/JSystem/JUtility/JUTException/showStack__12JUTExceptionFP9OSContext.s"
}
#pragma pop

/* ############################################################################################## */
/* 8039D490-8039D490 029AF0 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_8039D64F = "CONTEXT:%08XH  (%s EXCEPTION)\n";
SECTION_DEAD static char const* const stringBase_8039D66E = "CONTEXT:%08XH\n";
SECTION_DEAD static char const* const stringBase_8039D67D = " FPE: Invalid operation\n";
SECTION_DEAD static char const* const stringBase_8039D696 = " SNaN\n";
SECTION_DEAD static char const* const stringBase_8039D69D = " Infinity - Infinity\n";
SECTION_DEAD static char const* const stringBase_8039D6B3 = " Infinity / Infinity\n";
SECTION_DEAD static char const* const stringBase_8039D6C9 = " 0 / 0\n";
SECTION_DEAD static char const* const stringBase_8039D6D1 = " Infinity * 0\n";
SECTION_DEAD static char const* const stringBase_8039D6E0 = " Invalid compare\n";
SECTION_DEAD static char const* const stringBase_8039D6F2 = " Software request\n";
SECTION_DEAD static char const* const stringBase_8039D705 = " Invalid square root\n";
SECTION_DEAD static char const* const stringBase_8039D71B = " Invalid integer convert\n";
SECTION_DEAD static char const* const stringBase_8039D735 = " FPE: Overflow\n";
SECTION_DEAD static char const* const stringBase_8039D745 = " FPE: Underflow\n";
SECTION_DEAD static char const* const stringBase_8039D756 = " FPE: Zero division\n";
SECTION_DEAD static char const* const stringBase_8039D76B = " FPE: Inexact result\n";
SECTION_DEAD static char const* const stringBase_8039D781 = "SRR0:   %08XH   SRR1:%08XH\n";
SECTION_DEAD static char const* const stringBase_8039D79D = "DSISR:  %08XH   DAR: %08XH\n";
#pragma pop

/* 802E27B0-802E2A84 2DD0F0 02D4+00 1/1 0/0 0/0 .text
 * showMainInfo__12JUTExceptionFUsP9OSContextUlUl               */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTException::showMainInfo(u16 param_0, OSContext* param_1, u32 param_2, u32 param_3) {
    nofralloc
#include "asm/JSystem/JUtility/JUTException/showMainInfo__12JUTExceptionFUsP9OSContextUlUl.s"
}
#pragma pop

/* ############################################################################################## */
/* 8039D490-8039D490 029AF0 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_8039D7B9 =
    "-------------------------------- GPR\n";
SECTION_DEAD static char const* const stringBase_8039D7DF =
    "R%02d:%08XH  R%02d:%08XH  R%02d:%08XH\n";
SECTION_DEAD static char const* const stringBase_8039D806 = "R%02d:%08XH  R%02d:%08XH\n";
#pragma pop

/* 802E2A84-802E2B44 2DD3C4 00C0+00 1/1 0/0 0/0 .text            showGPR__12JUTExceptionFP9OSContext
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTException::showGPR(OSContext* param_0) {
    nofralloc
#include "asm/JSystem/JUtility/JUTException/showGPR__12JUTExceptionFP9OSContext.s"
}
#pragma pop

/* ############################################################################################## */
/* 8039D490-8039D490 029AF0 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_8039D820 = "";
SECTION_DEAD static char const* const stringBase_8039D821 = "%s %s:%x section:%d\n";
#pragma pop

/* 802E2B44-802E2CA0 2DD484 015C+00 3/3 0/0 0/0 .text showMapInfo_subroutine__12JUTExceptionFUlb
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTException::showMapInfo_subroutine(u32 param_0, bool param_1) {
    nofralloc
#include "asm/JSystem/JUtility/JUTException/showMapInfo_subroutine__12JUTExceptionFUlb.s"
}
#pragma pop

/* ############################################################################################## */
/* 8039D490-8039D490 029AF0 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_8039D836 =
    "-------------------------------- GPRMAP\n";
SECTION_DEAD static char const* const stringBase_8039D85F = "R%02d: %08XH";
SECTION_DEAD static char const* const stringBase_8039D86C = "  no information\n";
SECTION_DEAD static char const* const stringBase_8039D87E =
    "  no register which seem to address.\n";
#pragma pop

/* 802E2CA0-802E2DAC 2DD5E0 010C+00 1/1 0/0 0/0 .text showGPRMap__12JUTExceptionFP9OSContext */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTException::showGPRMap(OSContext* param_0) {
    nofralloc
#include "asm/JSystem/JUtility/JUTException/showGPRMap__12JUTExceptionFP9OSContext.s"
}
#pragma pop

/* ############################################################################################## */
/* 8039D490-8039D490 029AF0 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_8039D8A4 =
    "-------------------------------- SRR0MAP\n";
SECTION_DEAD static char const* const stringBase_8039D8CE = "SRR0: %08XH";
#pragma pop

/* 802E2DAC-802E2E70 2DD6EC 00C4+00 1/1 0/0 0/0 .text showSRR0Map__12JUTExceptionFP9OSContext */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTException::showSRR0Map(OSContext* param_0) {
    nofralloc
#include "asm/JSystem/JUtility/JUTException/showSRR0Map__12JUTExceptionFP9OSContext.s"
}
#pragma pop

/* ############################################################################################## */
/* 8039D490-8039D490 029AF0 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_8039D8DA = " MSR:%08XH\t FPSCR:%08XH\n";
#pragma pop

/* 802E2E70-802E2F18 2DD7B0 00A8+00 1/1 0/0 0/0 .text
 * printDebugInfo__12JUTExceptionFQ212JUTException9EInfoPageUsP9OSContextUlUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTException::printDebugInfo(JUTException::EInfoPage param_0, u16 param_1,
                                      OSContext* param_2, u32 param_3, u32 param_4) {
    nofralloc
#include "asm/JSystem/JUtility/JUTException/printDebugInfo__12JUTExceptionFQ212JUTException9EInfoPageUsP9OSContextUlUl.s"
}
#pragma pop

/* 802E2F18-802E2F54 2DD858 003C+00 1/1 1/1 0/0 .text            isEnablePad__12JUTExceptionCFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTException::isEnablePad() const {
    nofralloc
#include "asm/JSystem/JUtility/JUTException/isEnablePad__12JUTExceptionCFv.s"
}
#pragma pop

/* 802E2F54-802E34C0 2DD894 056C+00 1/1 1/1 0/0 .text            readPad__12JUTExceptionFPUlPUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTException::readPad(u32* param_0, u32* param_1) {
    nofralloc
#include "asm/JSystem/JUtility/JUTException/readPad__12JUTExceptionFPUlPUl.s"
}
#pragma pop

/* ############################################################################################## */
/* 8039D490-8039D490 029AF0 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_8039D8F3 =
    "******** EXCEPTION OCCURRED! ********\nFrameMemor"
    "y:%XH\n";
SECTION_DEAD static char const* const stringBase_8039D92A =
    "******** USER HALT ********\nFrameMemory:%XH\n";
SECTION_DEAD static char const* const stringBase_8039D957 = "--------------------------------\n";
#pragma pop

/* 802E34C0-802E3980 2DDE00 04C0+00 1/1 0/0 0/0 .text
 * printContext__12JUTExceptionFUsP9OSContextUlUl               */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTException::printContext(u16 param_0, OSContext* param_1, u32 param_2, u32 param_3) {
    nofralloc
#include "asm/JSystem/JUtility/JUTException/printContext__12JUTExceptionFUsP9OSContextUlUl.s"
}
#pragma pop

/* 802E3980-802E3A08 2DE2C0 0088+00 3/3 2/2 0/0 .text            waitTime__12JUTExceptionFl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTException::waitTime(s32 param_0) {
    nofralloc
#include "asm/JSystem/JUtility/JUTException/waitTime__12JUTExceptionFl.s"
}
#pragma pop

/* 802E3A08-802E3AEC 2DE348 00E4+00 1/1 0/0 0/0 .text            createFB__12JUTExceptionFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTException::createFB() {
    nofralloc
#include "asm/JSystem/JUtility/JUTException/createFB__12JUTExceptionFv.s"
}
#pragma pop

/* 802E3AEC-802E3AFC 2DE42C 0010+00 0/0 1/1 0/0 .text
 * setPreUserCallback__12JUTExceptionFPFUsP9OSContextUlUl_v     */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTException::setPreUserCallback(void (*param_0)(u16, OSContext*, u32, u32)) {
    nofralloc
#include "asm/JSystem/JUtility/JUTException/setPreUserCallback__12JUTExceptionFPFUsP9OSContextUlUl_v.s"
}
#pragma pop

/* 802E3AFC-802E3B0C 2DE43C 0010+00 0/0 1/1 0/0 .text
 * setPostUserCallback__12JUTExceptionFPFUsP9OSContextUlUl_v    */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTException::setPostUserCallback(void (*param_0)(u16, OSContext*, u32, u32)) {
    nofralloc
#include "asm/JSystem/JUtility/JUTException/setPostUserCallback__12JUTExceptionFPFUsP9OSContextUlUl_v.s"
}
#pragma pop

/* 802E3B0C-802E3BA0 2DE44C 0094+00 0/0 1/1 0/0 .text            appendMapFile__12JUTExceptionFPCc
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTException::appendMapFile(char const* param_0) {
    nofralloc
#include "asm/JSystem/JUtility/JUTException/appendMapFile__12JUTExceptionFPCc.s"
}
#pragma pop

/* ############################################################################################## */
/* 8039D490-8039D490 029AF0 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_8039D979 = ".map";
#pragma pop

/* 802E3BA0-802E3C90 2DE4E0 00F0+00 1/1 0/0 0/0 .text
 * queryMapAddress__12JUTExceptionFPcUllPUlPUlPcUlbb            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTException::queryMapAddress(char* param_0, u32 param_1, s32 param_2, u32* param_3,
                                       u32* param_4, char* param_5, u32 param_6, bool param_7,
                                       bool param_8) {
    nofralloc
#include "asm/JSystem/JUtility/JUTException/queryMapAddress__12JUTExceptionFPcUllPUlPUlPcUlbb.s"
}
#pragma pop

/* ############################################################################################## */
/* 8039D490-8039D490 029AF0 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_8039D97E = "  [%08X]: .%s [%08X: %XH]\n  %s\n";
/* @stringBase0 padding */
SECTION_DEAD static char const* const pad_8039D99E = "\0";
#pragma pop

/* 802E3C90-802E3FEC 2DE5D0 035C+00 1/1 0/0 0/0 .text
 * queryMapAddress_single__12JUTExceptionFPcUllPUlPUlPcUlbb     */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTException::queryMapAddress_single(char* param_0, u32 param_1, s32 param_2, u32* param_3,
                                              u32* param_4, char* param_5, u32 param_6,
                                              bool param_7, bool param_8) {
    nofralloc
#include "asm/JSystem/JUtility/JUTException/queryMapAddress_single__12JUTExceptionFPcUllPUlPUlPcUlbb.s"
}
#pragma pop

/* ############################################################################################## */
/* 80456054-80456058 004654 0004+00 1/1 0/0 0/0 .sdata2          @3034 */
SECTION_SDATA2 static f32 lit_3034 = 10.0f;

/* 80456058-80456060 004658 0004+04 1/1 0/0 0/0 .sdata2          @3035 */
SECTION_SDATA2 static f32 lit_3035[1 + 1 /* padding */] = {
    6.0f,
    /* padding */
    0.0f,
};

/* 802E3FEC-802E40CC 2DE92C 00E0+00 0/0 1/1 0/0 .text            createConsole__12JUTExceptionFPvUl
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTException::createConsole(void* param_0, u32 param_1) {
    nofralloc
#include "asm/JSystem/JUtility/JUTException/createConsole__12JUTExceptionFPvUl.s"
}
#pragma pop

/* 802E40CC-802E40EC 2DEA0C 0020+00 1/1 0/0 0/0 .text
 * __ct__13JUTExternalFBFP16_GXRenderModeObj8_GXGammaPvUl       */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JUTExternalFB::JUTExternalFB(_GXRenderModeObj* param_0, _GXGamma param_1, void* param_2,
                                 u32 param_3) {
    nofralloc
#include "asm/JSystem/JUtility/JUTException/__ct__13JUTExternalFBFP16_GXRenderModeObj8_GXGammaPvUl.s"
}
#pragma pop

/* 802E40EC-802E414C 2DEA2C 0060+00 1/0 0/0 0/0 .text            __dt__12JUTExceptionFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JUTException::~JUTException() {
    nofralloc
#include "asm/JSystem/JUtility/JUTException/__dt__12JUTExceptionFv.s"
}
#pragma pop

/* 802E414C-802E4194 2DEA8C 0048+00 0/0 1/0 0/0 .text            __sinit_JUTException_cpp */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __sinit_JUTException_cpp() {
    nofralloc
#include "asm/JSystem/JUtility/JUTException/__sinit_JUTException_cpp.s"
}
#pragma pop

#pragma push
#pragma force_active on
REGISTER_CTORS(0x802E414C, __sinit_JUTException_cpp);
#pragma pop

/* 802E4194-802E41E8 2DEAD4 0054+00 1/1 0/0 0/0 .text
 * __dt__39JSUList<Q212JUTException12JUTExMapFile>Fv            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void func_802E4194(void* _this) {
    nofralloc
#include "asm/JSystem/JUtility/JUTException/func_802E4194.s"
}
#pragma pop

/* ############################################################################################## */
/* 804508F8-80450900 000378 0008+00 0/0 3/3 0/0 .sdata           None */
SECTION_SDATA extern u8 data_804508F8[8] = {
    0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 8039D490-8039D490 029AF0 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
