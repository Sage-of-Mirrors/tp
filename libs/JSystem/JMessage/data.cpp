//
// Generated By: dol2asm
// Translation Unit: data
//

#include "JSystem/JMessage/data.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct JMessage {
    struct data {
        static f32 ga4cSignature[1 + 1 /* padding */];
    };
};

//
// Forward References:
//

extern "C" f32 ga4cSignature__Q28JMessage4data[1 + 1 /* padding */];

//
// External References:
//

//
// Declarations:
//

/* ############################################################################################## */
/* 80455818-80455820 003E18 0004+04 0/0 1/1 0/0 .sdata2          ga4cSignature__Q28JMessage4data */
SECTION_SDATA2 f32 JMessage::data::ga4cSignature[1 + 1 /* padding */] = {
    206910576.0f,
    /* padding */
    0.0f,
};
