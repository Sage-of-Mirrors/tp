#ifndef M_DO_M_DO_RESET_H
#define M_DO_M_DO_RESET_H

#include "dolphin/types.h"

struct mDoRstData {
    /* 0x00 */ int mReset;
    /* 0x04 */ int mResetPrepare;
    /* 0x08 */ int m3ButtonReset;
    /* 0x0C */ int m3ButtonResetPort;
    /* 0x10 */ bool mShutdown;
    /* 0x11 */ bool mReturnToMenu;
    /* 0x12 */ u8 mLogoScnFlag;
    /* 0x13 */ u8 mProgSeqFlag;
    /* 0x14 */ u8 mProgChgFlag;
    /* 0x15 */ u8 mWarningDispFlag;
};  // Size = 0x18

class mDoRst {
public:
    static void offReturnToMenu() { mResetData->mReturnToMenu = false; }
    static void offShutdown() { mResetData->mShutdown = false; }
    static void setWarningDispFlag(u8 flag) { mResetData->mWarningDispFlag = flag; }
    static void setProgChgFlag(u8 flag) { mResetData->mProgChgFlag = flag; }
    static void setProgSeqFlag(u8 flag) { mResetData->mProgSeqFlag = flag; }
    static void setLogoScnFlag(u8 flag) { mResetData->mLogoScnFlag = flag; }
    static void set3ButtonResetPort(int port) { mResetData->m3ButtonResetPort = port; }
    static void off3ButtonReset() { mResetData->m3ButtonReset = 0; }
    static void offResetPrepare() { mResetData->mResetPrepare = 0; }
    static void offReset() { mResetData->mReset = 0; }
    static u8 getLogoScnFlag() { return mResetData->mLogoScnFlag; }
    static bool isReturnToMenu() { return mResetData->mReturnToMenu; }
    static bool isShutdown() { return mResetData->mShutdown; }
    static int isReset() { return mResetData->mReset; }
    static int get3ButtonResetPort() { return mResetData->m3ButtonResetPort; }
    static int is3ButtonReset() { return mResetData->m3ButtonReset; }
    static void onReset() { mResetData->mReset = 1; }
    static void onReturnToMenu() { mResetData->mReturnToMenu = true; }
    static void on3ButtonReset() { mResetData->m3ButtonReset = 1; }
    static void onShutdown() { mResetData->mShutdown = true; }

    static mDoRstData* getResetData();
    static void setResetData(mDoRstData* rstData) { mResetData = rstData; }

    static mDoRstData* mResetData;
};

#endif /* M_DO_M_DO_RESET_H */
