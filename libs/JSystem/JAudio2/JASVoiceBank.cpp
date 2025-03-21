//
// Generated By: dol2asm
// Translation Unit: JASVoiceBank
//

#include "JSystem/JAudio2/JASVoiceBank.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct JASInstParam {};

struct JASVoiceBank {
    /* 80297F74 */ void getInstParam(int, int, int, JASInstParam*) const;
    /* 80297FAC */ ~JASVoiceBank();
    /* 80298008 */ void getType() const;

    static u8 const sOscData[24];
    static u8 sOscTable[4 + 4 /* padding */];
};

//
// Forward References:
//

extern "C" void getInstParam__12JASVoiceBankCFiiiP12JASInstParam();
extern "C" void __dt__12JASVoiceBankFv();
extern "C" void getType__12JASVoiceBankCFv();
extern "C" u8 const sOscData__12JASVoiceBank[24];
extern "C" u8 sOscTable__12JASVoiceBank[4 + 4 /* padding */];

//
// External References:
//

extern "C" void __dl__FPv();
extern "C" extern void* __vt__7JASBank[5];

//
// Declarations:
//

/* ############################################################################################## */
/* 8039B1B8-8039B1D0 027818 0018+00 1/1 0/0 0/0 .rodata          sOscData__12JASVoiceBank */
SECTION_RODATA u8 const JASVoiceBank::sOscData[24] = {
    0x00, 0x00, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x8039B1B8, &JASVoiceBank::sOscData);

/* 80451268-80451270 000768 0004+04 1/1 0/0 0/0 .sbss            sOscTable__12JASVoiceBank */
u8 JASVoiceBank::sOscTable[4 + 4 /* padding */];

/* 80297F74-80297FAC 2928B4 0038+00 1/0 0/0 0/0 .text
 * getInstParam__12JASVoiceBankCFiiiP12JASInstParam             */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASVoiceBank::getInstParam(int param_0, int param_1, int param_2,
                                    JASInstParam* param_3) const {
    nofralloc
#include "asm/JSystem/JAudio2/JASVoiceBank/getInstParam__12JASVoiceBankCFiiiP12JASInstParam.s"
}
#pragma pop

/* ############################################################################################## */
/* 803C76D0-803C76E8 0247F0 0014+04 1/1 1/1 0/0 .data            __vt__12JASVoiceBank */
SECTION_DATA extern void* __vt__12JASVoiceBank[5 + 1 /* padding */] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12JASVoiceBankFv,
    (void*)getInstParam__12JASVoiceBankCFiiiP12JASInstParam,
    (void*)getType__12JASVoiceBankCFv,
    /* padding */
    NULL,
};

/* 80297FAC-80298008 2928EC 005C+00 1/0 0/0 0/0 .text            __dt__12JASVoiceBankFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JASVoiceBank::~JASVoiceBank() {
    nofralloc
#include "asm/JSystem/JAudio2/JASVoiceBank/__dt__12JASVoiceBankFv.s"
}
#pragma pop

/* 80298008-80298014 292948 000C+00 1/0 0/0 0/0 .text            getType__12JASVoiceBankCFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JASVoiceBank::getType() const {
    nofralloc
#include "asm/JSystem/JAudio2/JASVoiceBank/getType__12JASVoiceBankCFv.s"
}
#pragma pop
