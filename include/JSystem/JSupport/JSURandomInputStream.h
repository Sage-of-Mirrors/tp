#ifndef JSURANDOMINPUTSTREAM_H_
#define JSURANDOMINPUTSTREAM_H_

#include "JSystem/JSupport/JSUInputStream.h"
#include "dolphin/types.h"

class JSURandomInputStream : public JSUInputStream {
public:
    JSURandomInputStream();
    virtual ~JSURandomInputStream();

    /* vt[3] */ virtual s32 getAvailable() const; /* override */
    /* vt[4] */ virtual s32 skip(s32);            /* override */
    /* vt[5] */ virtual s32 readData(void*, s32) = 0;
    /* vt[6] */ virtual s32 getLength() const = 0;
    /* vt[7] */ virtual s32 getPosition() const = 0;
    /* vt[7] */ virtual s32 seekPos() = 0;

    // TODO: fix return types
    /* 802DC370 */ void align(s32);
    /* 802DC458 */ void peek(void*, s32);
    /* 802DC4DC */ void seek(s32, JSUStreamSeekFrom);
};

#endif
