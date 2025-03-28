//
// Generated By: dol2asm
// Translation Unit: J2DScreen
//

#include "JSystem/J2DGraph/J2DScreen.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct _GXCullMode {};

struct ResTIMG {};

struct ResNTAB {};

struct ResFONT {};

struct JUTNameTab {
    /* 802DE9E0 */ JUTNameTab(ResNTAB const*);
};

struct JSUStreamSeekFrom {};

struct JSURandomInputStream {
    /* 802DC458 */ void peek(void*, s32);
    /* 802DC4DC */ void seek(s32, JSUStreamSeekFrom);
};

struct JSUMemoryInputStream {
    /* 802DC520 */ void setBuffer(void const*, s32);
};

struct JSUInputStream {
    /* 802DC23C */ ~JSUInputStream();
    /* 802DC298 */ void read(void*, s32);
};

struct JKRFileLoader {
    /* 802D4270 */ void getGlbResource(char const*, JKRFileLoader*);
};

struct JKRArchive {};

struct JGeometry {
    template <typename A1>
    struct TBox2 {};
    /* TBox2<f32> */
    struct TBox2__template0 {};
};

struct J2DAnmVisibilityFull {};

struct J2DAnmBase {};

struct J2DGrafContext {};

struct J2DAnmTransform {};

struct J2DAnmVtxColor {};

struct J2DPane {
    /* 80053C00 */ void makeMatrix(f32, f32);
    /* 802F7540 */ void makeMatrix(f32, f32, f32, f32);
    /* 802F5F9C */ J2DPane(J2DPane*, JSURandomInputStream*, u8);
    /* 802F5D40 */ J2DPane(J2DPane*, bool, u64, JGeometry::TBox2<f32> const&);
    /* 802F658C */ ~J2DPane();
    /* 802F67E0 */ void draw(f32, f32, J2DGrafContext const*, bool, bool);
    /* 802F6D18 */ void place(JGeometry::TBox2<f32> const&);
    /* 802F6F60 */ void move(f32, f32);
    /* 802F6FB4 */ void add(f32, f32);
    /* 802F6FF8 */ void resize(f32, f32);
    /* 802F72E0 */ void search(u64);
    /* 802F7388 */ void searchUserInfo(u64);
    /* 802F7430 */ void isUsed(ResTIMG const*);
    /* 802F74B8 */ void isUsed(ResFONT const*);
    /* 802F7680 */ void setCullBack(_GXCullMode);
    /* 802F8428 */ void setCullBack(bool);
    /* 802F7EF4 */ void setAnimation(J2DAnmBase*);
    /* 802F8080 */ void animationTransform(J2DAnmTransform const*);
    /* 802F8118 */ void setVisibileAnimation(J2DAnmVisibilityFull*);
    /* 802F81A0 */ void setVtxColorAnimation(J2DAnmVtxColor*);
    /* 802F8228 */ void animationPane(J2DAnmTransform const*);
    /* 802F83CC */ void rewriteAlpha();
    /* 802F8464 */ void setConnectParent(bool);
    /* 802F8474 */ void update();
    /* 802F8478 */ void drawSelf(f32, f32);
};

struct J2DAnmTexPattern {};

struct J2DAnmTevRegKey {};

struct J2DAnmTextureSRTKey {};

struct J2DAnmColor {};

struct J2DMaterial {
    /* 802EA1AC */ J2DMaterial();
    /* 802EA2CC */ ~J2DMaterial();
    /* 802EAA2C */ void setAnimation(J2DAnmTexPattern*);
    /* 802EA94C */ void setAnimation(J2DAnmTextureSRTKey*);
    /* 802EAB0C */ void setAnimation(J2DAnmTevRegKey*);
    /* 802EA89C */ void setAnimation(J2DAnmColor*);
    /* 802EAC78 */ void animation();
};

struct J2DWindowEx {
    /* 80300C94 */ J2DWindowEx(J2DPane*, JSURandomInputStream*, u32, J2DMaterial*);
};

struct J2DWindow {
    /* 802F9C10 */ J2DWindow(J2DPane*, JSURandomInputStream*, J2DMaterial*);
    /* 802F9B74 */ J2DWindow(J2DPane*, JSURandomInputStream*, JKRArchive*);
};

struct J2DTextBoxEx {
    /* 803071E4 */ J2DTextBoxEx(J2DPane*, JSURandomInputStream*, u32, J2DMaterial*);
};

struct J2DTextBox {
    /* 802FF6D8 */ J2DTextBox(J2DPane*, JSURandomInputStream*, JKRArchive*);
    /* 802FF75C */ J2DTextBox(J2DPane*, JSURandomInputStream*, u32, J2DMaterial*);
};

struct J2DScrnBlockHeader {};

struct J2DScreen {
    /* 80053BA0 */ void clearAnmTransform();
    /* 802F9704 */ void setAnimation(J2DAnmColor*);
    /* 80192414 */ void setAnimation(J2DAnmTransform*);
    /* 802F9798 */ void setAnimation(J2DAnmTextureSRTKey*);
    /* 802F99A8 */ void setAnimation(J2DAnmVtxColor*);
    /* 802F9838 */ void setAnimation(J2DAnmTexPattern*);
    /* 802F99C8 */ void setAnimation(J2DAnmVisibilityFull*);
    /* 802F98CC */ void setAnimation(J2DAnmTevRegKey*);
    /* 802F9A54 */ void setAnimation(J2DAnmBase*);
    /* 802F8498 */ J2DScreen();
    /* 802F8540 */ ~J2DScreen();
    /* 802F85A8 */ void clean();
    /* 802F8648 */ void setPriority(char const*, u32, JKRArchive*);
    /* 802F8748 */ void setPriority(JSURandomInputStream*, u32, JKRArchive*);
    /* 802F8778 */ void private_set(JSURandomInputStream*, u32, JKRArchive*);
    /* 802F8834 */ void checkSignature(JSURandomInputStream*);
    /* 802F8894 */ void getScreenInformation(JSURandomInputStream*);
    /* 802F8990 */ void makeHierarchyPanes(J2DPane*, JSURandomInputStream*, u32, JKRArchive*);
    /* 802F8B98 */ void createPane(J2DScrnBlockHeader const&, JSURandomInputStream*, J2DPane*, u32,
                                   JKRArchive*);
    /* 802F99E8 */ void createPane(J2DScrnBlockHeader const&, JSURandomInputStream*, J2DPane*, u32);
    /* 802F8ED4 */ void draw(f32, f32, J2DGrafContext const*);
    /* 802F90A0 */ void search(u64);
    /* 802F90E0 */ void searchUserInfo(u64);
    /* 802F9120 */ void drawSelf(f32, f32, f32 (*)[3][4]);
    /* 802F9280 */ void getResReference(JSURandomInputStream*, u32);
    /* 802F937C */ void createMaterial(JSURandomInputStream*, u32, JKRArchive*);
    /* 802F9600 */ void isUsed(ResTIMG const*);
    /* 802F9620 */ void isUsed(ResFONT const*);
    /* 802F9640 */ void getNameResource(char const*);
    /* 802F9690 */ void animation();
    /* 802F9A18 */ s32 getTypeID() const;
    /* 802F9A20 */ void calcMtx();
    /* 802F9A74 */ void setAnimationVF(J2DAnmVisibilityFull*);
    /* 802F9A78 */ void setAnimationVC(J2DAnmVtxColor*);

    static u8 mDataManage[4 + 4 /* padding */];
};

struct J2DResReference {};

struct J2DPictureEx {
    /* 803036EC */ J2DPictureEx(J2DPane*, JSURandomInputStream*, u32, J2DMaterial*);
};

struct J2DPicture {
    /* 802FC118 */ J2DPicture(J2DPane*, JSURandomInputStream*, JKRArchive*);
    /* 802FC1D4 */ J2DPicture(J2DPane*, JSURandomInputStream*, J2DMaterial*);
};

struct J2DOrthoGraph {
    /* 802E96D0 */ J2DOrthoGraph(f32, f32, f32, f32, f32, f32);
    /* 802E97B4 */ void setPort();
};

struct J2DMaterialBlock {};

struct J2DMaterialFactory {
    /* 802F2AD0 */ J2DMaterialFactory(J2DMaterialBlock const&);
    /* 802F2D1C */ void create(J2DMaterial*, int, u32, J2DResReference*, J2DResReference*,
                               JKRArchive*) const;
};

struct J2DDataManage {
    /* 8030CE18 */ void get(char const*);
};

//
// Forward References:
//

extern "C" void __ct__9J2DScreenFv();
extern "C" void __dt__9J2DScreenFv();
extern "C" void clean__9J2DScreenFv();
extern "C" void setPriority__9J2DScreenFPCcUlP10JKRArchive();
extern "C" void setPriority__9J2DScreenFP20JSURandomInputStreamUlP10JKRArchive();
extern "C" void private_set__9J2DScreenFP20JSURandomInputStreamUlP10JKRArchive();
extern "C" void checkSignature__9J2DScreenFP20JSURandomInputStream();
extern "C" void getScreenInformation__9J2DScreenFP20JSURandomInputStream();
extern "C" void makeHierarchyPanes__9J2DScreenFP7J2DPaneP20JSURandomInputStreamUlP10JKRArchive();
extern "C" void
createPane__9J2DScreenFRC18J2DScrnBlockHeaderP20JSURandomInputStreamP7J2DPaneUlP10JKRArchive();
extern "C" void draw__9J2DScreenFffPC14J2DGrafContext();
extern "C" void search__9J2DScreenFUx();
extern "C" void searchUserInfo__9J2DScreenFUx();
extern "C" void drawSelf__9J2DScreenFffPA3_A4_f();
extern "C" void getResReference__9J2DScreenFP20JSURandomInputStreamUl();
extern "C" void createMaterial__9J2DScreenFP20JSURandomInputStreamUlP10JKRArchive();
extern "C" void isUsed__9J2DScreenFPC7ResTIMG();
extern "C" void isUsed__9J2DScreenFPC7ResFONT();
extern "C" void getNameResource__9J2DScreenFPCc();
extern "C" void animation__9J2DScreenFv();
extern "C" void setAnimation__9J2DScreenFP11J2DAnmColor();
extern "C" void setAnimation__9J2DScreenFP19J2DAnmTextureSRTKey();
extern "C" void setAnimation__9J2DScreenFP16J2DAnmTexPattern();
extern "C" void setAnimation__9J2DScreenFP15J2DAnmTevRegKey();
extern "C" void setAnimation__9J2DScreenFP14J2DAnmVtxColor();
extern "C" void setAnimation__9J2DScreenFP20J2DAnmVisibilityFull();
extern "C" void createPane__9J2DScreenFRC18J2DScrnBlockHeaderP20JSURandomInputStreamP7J2DPaneUl();
extern "C" s32 getTypeID__9J2DScreenCFv();
extern "C" void calcMtx__9J2DScreenFv();
extern "C" void setAnimation__9J2DScreenFP10J2DAnmBase();
extern "C" void setAnimationVF__9J2DScreenFP20J2DAnmVisibilityFull();
extern "C" void setAnimationVC__9J2DScreenFP14J2DAnmVtxColor();
extern "C" u8 mDataManage__9J2DScreen[4 + 4 /* padding */];

//
// External References:
//

extern "C" void setAlpha__7J2DPaneFUc();
extern "C" void clearAnmTransform__9J2DScreenFv();
extern "C" void makeMatrix__7J2DPaneFff();
extern "C" void setAnimation__9J2DScreenFP15J2DAnmTransform();
extern "C" void* __nw__FUl();
extern "C" void* __nwa__FUl();
extern "C" void* __nwa__FUli();
extern "C" void __dl__FPv();
extern "C" void __dla__FPv();
extern "C" void getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader();
extern "C" void __dt__14JSUInputStreamFv();
extern "C" void read__14JSUInputStreamFPvl();
extern "C" void peek__20JSURandomInputStreamFPvl();
extern "C" void seek__20JSURandomInputStreamFl17JSUStreamSeekFrom();
extern "C" void setBuffer__20JSUMemoryInputStreamFPCvl();
extern "C" void __ct__10JUTNameTabFPC7ResNTAB();
extern "C" void __ct__13J2DOrthoGraphFffffff();
extern "C" void setPort__13J2DOrthoGraphFv();
extern "C" void __ct__11J2DMaterialFv();
extern "C" void __dt__11J2DMaterialFv();
extern "C" void setAnimation__11J2DMaterialFP11J2DAnmColor();
extern "C" void setAnimation__11J2DMaterialFP19J2DAnmTextureSRTKey();
extern "C" void setAnimation__11J2DMaterialFP16J2DAnmTexPattern();
extern "C" void setAnimation__11J2DMaterialFP15J2DAnmTevRegKey();
extern "C" void animation__11J2DMaterialFv();
extern "C" void __ct__18J2DMaterialFactoryFRC16J2DMaterialBlock();
extern "C" void
create__18J2DMaterialFactoryCFP11J2DMaterialiUlP15J2DResReferenceP15J2DResReferenceP10JKRArchive();
extern "C" void func_802F5D40();
extern "C" void __ct__7J2DPaneFP7J2DPaneP20JSURandomInputStreamUc();
extern "C" void __dt__7J2DPaneFv();
extern "C" void draw__7J2DPaneFffPC14J2DGrafContextbb();
extern "C" void func_802F6D18();
extern "C" void move__7J2DPaneFff();
extern "C" void add__7J2DPaneFff();
extern "C" void resize__7J2DPaneFff();
extern "C" void search__7J2DPaneFUx();
extern "C" void searchUserInfo__7J2DPaneFUx();
extern "C" void isUsed__7J2DPaneFPC7ResTIMG();
extern "C" void isUsed__7J2DPaneFPC7ResFONT();
extern "C" void makeMatrix__7J2DPaneFffff();
extern "C" void setCullBack__7J2DPaneF11_GXCullMode();
extern "C" void setAnimation__7J2DPaneFP10J2DAnmBase();
extern "C" void animationTransform__7J2DPaneFPC15J2DAnmTransform();
extern "C" void setVisibileAnimation__7J2DPaneFP20J2DAnmVisibilityFull();
extern "C" void setVtxColorAnimation__7J2DPaneFP14J2DAnmVtxColor();
extern "C" void animationPane__7J2DPaneFPC15J2DAnmTransform();
extern "C" void rewriteAlpha__7J2DPaneFv();
extern "C" void setCullBack__7J2DPaneFb();
extern "C" void setConnectParent__7J2DPaneFb();
extern "C" void update__7J2DPaneFv();
extern "C" void drawSelf__7J2DPaneFff();
extern "C" void __ct__9J2DWindowFP7J2DPaneP20JSURandomInputStreamP10JKRArchive();
extern "C" void __ct__9J2DWindowFP7J2DPaneP20JSURandomInputStreamP11J2DMaterial();
extern "C" void __ct__10J2DPictureFP7J2DPaneP20JSURandomInputStreamP10JKRArchive();
extern "C" void __ct__10J2DPictureFP7J2DPaneP20JSURandomInputStreamP11J2DMaterial();
extern "C" void __ct__10J2DTextBoxFP7J2DPaneP20JSURandomInputStreamP10JKRArchive();
extern "C" void __ct__10J2DTextBoxFP7J2DPaneP20JSURandomInputStreamUlP11J2DMaterial();
extern "C" void __ct__11J2DWindowExFP7J2DPaneP20JSURandomInputStreamUlP11J2DMaterial();
extern "C" void __ct__12J2DPictureExFP7J2DPaneP20JSURandomInputStreamUlP11J2DMaterial();
extern "C" void __ct__12J2DTextBoxExFP7J2DPaneP20JSURandomInputStreamUlP11J2DMaterial();
extern "C" void get__13J2DDataManageFPCc();
extern "C" void GXSetVtxDesc();
extern "C" void GXSetVtxAttrFmt();
extern "C" void GXSetNumTexGens();
extern "C" void GXBegin();
extern "C" void GXSetCullMode();
extern "C" void GXSetChanCtrl();
extern "C" void GXSetNumIndStages();
extern "C" void GXSetTevDirect();
extern "C" void GXSetTevOp();
extern "C" void GXSetTevSwapModeTable();
extern "C" void GXSetTevOrder();
extern "C" void GXSetNumTevStages();
extern "C" void GXSetBlendMode();
extern "C" void GXSetScissor();
extern "C" void GXGetScissor();
extern "C" void __destroy_new_array();
extern "C" void __construct_new_array();
extern "C" void _savegpr_25();
extern "C" void _savegpr_26();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _restgpr_25();
extern "C" void _restgpr_26();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" extern void* __vt__10JSUIosBase[3];
extern "C" extern void* __vt__20JSURandomInputStream[9];
extern "C" extern void* __vt__14JSUInputStream[6 + 1 /* padding */];
extern "C" extern void* __vt__20JSUMemoryInputStream[9 + 1 /* padding */];
extern "C" extern void* __vt__14J2DGrafContext[10];
extern "C" extern void* __vt__13J2DOrthoGraph[10];

//
// Declarations:
//

/* ############################################################################################## */
/* 803CD068-803CD108 02A188 009C+04 2/2 0/0 0/0 .data            __vt__9J2DScreen */
SECTION_DATA extern void* __vt__9J2DScreen[39 + 1 /* padding */] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__9J2DScreenFv,
    (void*)getTypeID__9J2DScreenCFv,
    (void*)move__7J2DPaneFff,
    (void*)add__7J2DPaneFff,
    (void*)resize__7J2DPaneFff,
    (void*)setCullBack__7J2DPaneFb,
    (void*)setCullBack__7J2DPaneF11_GXCullMode,
    (void*)setAlpha__7J2DPaneFUc,
    (void*)setConnectParent__7J2DPaneFb,
    (void*)calcMtx__9J2DScreenFv,
    (void*)update__7J2DPaneFv,
    (void*)drawSelf__7J2DPaneFff,
    (void*)drawSelf__9J2DScreenFffPA3_A4_f,
    (void*)search__9J2DScreenFUx,
    (void*)searchUserInfo__9J2DScreenFUx,
    (void*)makeMatrix__7J2DPaneFff,
    (void*)makeMatrix__7J2DPaneFffff,
    (void*)isUsed__9J2DScreenFPC7ResTIMG,
    (void*)isUsed__9J2DScreenFPC7ResFONT,
    (void*)clearAnmTransform__9J2DScreenFv,
    (void*)rewriteAlpha__7J2DPaneFv,
    (void*)setAnimation__9J2DScreenFP10J2DAnmBase,
    (void*)setAnimation__9J2DScreenFP15J2DAnmTransform,
    (void*)setAnimation__9J2DScreenFP11J2DAnmColor,
    (void*)setAnimation__9J2DScreenFP16J2DAnmTexPattern,
    (void*)setAnimation__9J2DScreenFP19J2DAnmTextureSRTKey,
    (void*)setAnimation__9J2DScreenFP15J2DAnmTevRegKey,
    (void*)setAnimation__9J2DScreenFP20J2DAnmVisibilityFull,
    (void*)setAnimation__9J2DScreenFP14J2DAnmVtxColor,
    (void*)animationTransform__7J2DPaneFPC15J2DAnmTransform,
    (void*)setVisibileAnimation__7J2DPaneFP20J2DAnmVisibilityFull,
    (void*)setAnimationVF__9J2DScreenFP20J2DAnmVisibilityFull,
    (void*)setVtxColorAnimation__7J2DPaneFP14J2DAnmVtxColor,
    (void*)setAnimationVC__9J2DScreenFP14J2DAnmVtxColor,
    (void*)animationPane__7J2DPaneFPC15J2DAnmTransform,
    (void*)createPane__9J2DScreenFRC18J2DScrnBlockHeaderP20JSURandomInputStreamP7J2DPaneUl,
    (void*)
        createPane__9J2DScreenFRC18J2DScrnBlockHeaderP20JSURandomInputStreamP7J2DPaneUlP10JKRArchive,
    /* padding */
    NULL,
};

/* 80456220-80456224 004820 0004+00 4/4 0/0 0/0 .sdata2          @1561 */
SECTION_SDATA2 static u8 lit_1561[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 80456224-80456228 004824 0004+00 2/2 0/0 0/0 .sdata2          @1562 */
SECTION_SDATA2 static f32 lit_1562 = 640.0f;

/* 80456228-80456230 004828 0004+04 2/2 0/0 0/0 .sdata2          @1563 */
SECTION_SDATA2 static f32 lit_1563[1 + 1 /* padding */] = {
    480.0f,
    /* padding */
    0.0f,
};

/* 802F8498-802F8540 2F2DD8 00A8+00 0/0 59/59 4/4 .text            __ct__9J2DScreenFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J2DScreen::J2DScreen() {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DScreen/__ct__9J2DScreenFv.s"
}
#pragma pop

/* 802F8540-802F85A8 2F2E80 0068+00 1/0 0/0 0/0 .text            __dt__9J2DScreenFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J2DScreen::~J2DScreen() {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DScreen/__dt__9J2DScreenFv.s"
}
#pragma pop

/* 802F85A8-802F8648 2F2EE8 00A0+00 3/3 0/0 0/0 .text            clean__9J2DScreenFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DScreen::clean() {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DScreen/clean__9J2DScreenFv.s"
}
#pragma pop

/* 802F8648-802F8748 2F2F88 0100+00 0/0 58/58 4/4 .text setPriority__9J2DScreenFPCcUlP10JKRArchive
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DScreen::setPriority(char const* param_0, u32 param_1, JKRArchive* param_2) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DScreen/setPriority__9J2DScreenFPCcUlP10JKRArchive.s"
}
#pragma pop

/* 802F8748-802F8778 2F3088 0030+00 1/1 1/1 0/0 .text
 * setPriority__9J2DScreenFP20JSURandomInputStreamUlP10JKRArchive */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DScreen::setPriority(JSURandomInputStream* param_0, u32 param_1, JKRArchive* param_2) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DScreen/setPriority__9J2DScreenFP20JSURandomInputStreamUlP10JKRArchive.s"
}
#pragma pop

/* 802F8778-802F8834 2F30B8 00BC+00 1/1 0/0 0/0 .text
 * private_set__9J2DScreenFP20JSURandomInputStreamUlP10JKRArchive */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DScreen::private_set(JSURandomInputStream* param_0, u32 param_1, JKRArchive* param_2) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DScreen/private_set__9J2DScreenFP20JSURandomInputStreamUlP10JKRArchive.s"
}
#pragma pop

/* 802F8834-802F8894 2F3174 0060+00 1/1 0/0 0/0 .text
 * checkSignature__9J2DScreenFP20JSURandomInputStream           */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DScreen::checkSignature(JSURandomInputStream* param_0) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DScreen/checkSignature__9J2DScreenFP20JSURandomInputStream.s"
}
#pragma pop

/* ############################################################################################## */
/* 80456230-80456238 004830 0008+00 1/1 0/0 0/0 .sdata2          @1705 */
SECTION_SDATA2 static f64 lit_1705 = 4503599627370496.0 /* cast u32 to float */;

/* 802F8894-802F8990 2F31D4 00FC+00 1/1 0/0 0/0 .text
 * getScreenInformation__9J2DScreenFP20JSURandomInputStream     */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DScreen::getScreenInformation(JSURandomInputStream* param_0) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DScreen/getScreenInformation__9J2DScreenFP20JSURandomInputStream.s"
}
#pragma pop

/* 802F8990-802F8B98 2F32D0 0208+00 1/1 0/0 0/0 .text
 * makeHierarchyPanes__9J2DScreenFP7J2DPaneP20JSURandomInputStreamUlP10JKRArchive */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DScreen::makeHierarchyPanes(J2DPane* param_0, JSURandomInputStream* param_1, u32 param_2,
                                       JKRArchive* param_3) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DScreen/makeHierarchyPanes__9J2DScreenFP7J2DPaneP20JSURandomInputStreamUlP10JKRArchive.s"
}
#pragma pop

/* 802F8B98-802F8ED4 2F34D8 033C+00 1/0 0/0 0/0 .text
 * createPane__9J2DScreenFRC18J2DScrnBlockHeaderP20JSURandomInputStreamP7J2DPaneUlP10JKRArchive */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DScreen::createPane(J2DScrnBlockHeader const& param_0, JSURandomInputStream* param_1,
                               J2DPane* param_2, u32 param_3, JKRArchive* param_4) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DScreen/func_802F8B98.s"
}
#pragma pop

/* ############################################################################################## */
/* 80456238-8045623C 004838 0004+00 1/1 0/0 0/0 .sdata2          @1829 */
SECTION_SDATA2 static f32 lit_1829 = -1.0f;

/* 8045623C-80456240 00483C 0004+00 1/1 0/0 0/0 .sdata2          @1830 */
SECTION_SDATA2 static f32 lit_1830 = 1.0f;

/* 802F8ED4-802F90A0 2F3814 01CC+00 0/0 51/51 4/4 .text draw__9J2DScreenFffPC14J2DGrafContext */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DScreen::draw(f32 param_0, f32 param_1, J2DGrafContext const* param_2) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DScreen/draw__9J2DScreenFffPC14J2DGrafContext.s"
}
#pragma pop

/* 802F90A0-802F90E0 2F39E0 0040+00 1/0 0/0 0/0 .text            search__9J2DScreenFUx */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DScreen::search(u64 param_0) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DScreen/search__9J2DScreenFUx.s"
}
#pragma pop

/* 802F90E0-802F9120 2F3A20 0040+00 1/0 0/0 0/0 .text            searchUserInfo__9J2DScreenFUx */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DScreen::searchUserInfo(u64 param_0) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DScreen/searchUserInfo__9J2DScreenFUx.s"
}
#pragma pop

/* 802F9120-802F9280 2F3A60 0160+00 1/0 0/0 0/0 .text            drawSelf__9J2DScreenFffPA3_A4_f */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DScreen::drawSelf(f32 param_0, f32 param_1, f32 (*param_2)[3][4]) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DScreen/drawSelf__9J2DScreenFffPA3_A4_f.s"
}
#pragma pop

/* 802F9280-802F937C 2F3BC0 00FC+00 1/1 0/0 0/0 .text
 * getResReference__9J2DScreenFP20JSURandomInputStreamUl        */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DScreen::getResReference(JSURandomInputStream* param_0, u32 param_1) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DScreen/getResReference__9J2DScreenFP20JSURandomInputStreamUl.s"
}
#pragma pop

/* 802F937C-802F9600 2F3CBC 0284+00 1/1 0/0 0/0 .text
 * createMaterial__9J2DScreenFP20JSURandomInputStreamUlP10JKRArchive */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DScreen::createMaterial(JSURandomInputStream* param_0, u32 param_1,
                                   JKRArchive* param_2) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DScreen/createMaterial__9J2DScreenFP20JSURandomInputStreamUlP10JKRArchive.s"
}
#pragma pop

/* 802F9600-802F9620 2F3F40 0020+00 1/0 0/0 0/0 .text            isUsed__9J2DScreenFPC7ResTIMG */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DScreen::isUsed(ResTIMG const* param_0) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DScreen/isUsed__9J2DScreenFPC7ResTIMG.s"
}
#pragma pop

/* 802F9620-802F9640 2F3F60 0020+00 1/0 0/0 0/0 .text            isUsed__9J2DScreenFPC7ResFONT */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DScreen::isUsed(ResFONT const* param_0) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DScreen/isUsed__9J2DScreenFPC7ResFONT.s"
}
#pragma pop

/* ############################################################################################## */
/* 80451590-80451598 000A90 0004+04 1/1 3/3 0/0 .sbss            mDataManage__9J2DScreen */
u8 J2DScreen::mDataManage[4 + 4 /* padding */];

/* 802F9640-802F9690 2F3F80 0050+00 0/0 6/6 0/0 .text            getNameResource__9J2DScreenFPCc */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DScreen::getNameResource(char const* param_0) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DScreen/getNameResource__9J2DScreenFPCc.s"
}
#pragma pop

/* 802F9690-802F9704 2F3FD0 0074+00 0/0 30/30 3/3 .text            animation__9J2DScreenFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DScreen::animation() {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DScreen/animation__9J2DScreenFv.s"
}
#pragma pop

/* 802F9704-802F9798 2F4044 0094+00 1/0 0/0 0/0 .text setAnimation__9J2DScreenFP11J2DAnmColor */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DScreen::setAnimation(J2DAnmColor* param_0) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DScreen/setAnimation__9J2DScreenFP11J2DAnmColor.s"
}
#pragma pop

/* 802F9798-802F9838 2F40D8 00A0+00 1/0 0/0 0/0 .text
 * setAnimation__9J2DScreenFP19J2DAnmTextureSRTKey              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DScreen::setAnimation(J2DAnmTextureSRTKey* param_0) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DScreen/setAnimation__9J2DScreenFP19J2DAnmTextureSRTKey.s"
}
#pragma pop

/* 802F9838-802F98CC 2F4178 0094+00 1/0 0/0 0/0 .text setAnimation__9J2DScreenFP16J2DAnmTexPattern
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DScreen::setAnimation(J2DAnmTexPattern* param_0) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DScreen/setAnimation__9J2DScreenFP16J2DAnmTexPattern.s"
}
#pragma pop

/* 802F98CC-802F99A8 2F420C 00DC+00 1/0 0/0 0/0 .text setAnimation__9J2DScreenFP15J2DAnmTevRegKey
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DScreen::setAnimation(J2DAnmTevRegKey* param_0) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DScreen/setAnimation__9J2DScreenFP15J2DAnmTevRegKey.s"
}
#pragma pop

/* 802F99A8-802F99C8 2F42E8 0020+00 1/0 0/0 0/0 .text setAnimation__9J2DScreenFP14J2DAnmVtxColor
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DScreen::setAnimation(J2DAnmVtxColor* param_0) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DScreen/setAnimation__9J2DScreenFP14J2DAnmVtxColor.s"
}
#pragma pop

/* 802F99C8-802F99E8 2F4308 0020+00 1/0 0/0 0/0 .text
 * setAnimation__9J2DScreenFP20J2DAnmVisibilityFull             */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DScreen::setAnimation(J2DAnmVisibilityFull* param_0) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DScreen/setAnimation__9J2DScreenFP20J2DAnmVisibilityFull.s"
}
#pragma pop

/* 802F99E8-802F9A18 2F4328 0030+00 1/0 0/0 0/0 .text
 * createPane__9J2DScreenFRC18J2DScrnBlockHeaderP20JSURandomInputStreamP7J2DPaneUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DScreen::createPane(J2DScrnBlockHeader const& param_0, JSURandomInputStream* param_1,
                               J2DPane* param_2, u32 param_3) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DScreen/createPane__9J2DScreenFRC18J2DScrnBlockHeaderP20JSURandomInputStreamP7J2DPaneUl.s"
}
#pragma pop

/* 802F9A18-802F9A20 2F4358 0008+00 1/0 0/0 0/0 .text            getTypeID__9J2DScreenCFv */
s32 J2DScreen::getTypeID() const {
    return 8;
}

/* 802F9A20-802F9A54 2F4360 0034+00 1/0 0/0 0/0 .text            calcMtx__9J2DScreenFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DScreen::calcMtx() {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DScreen/calcMtx__9J2DScreenFv.s"
}
#pragma pop

/* 802F9A54-802F9A74 2F4394 0020+00 1/0 0/0 0/0 .text setAnimation__9J2DScreenFP10J2DAnmBase */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J2DScreen::setAnimation(J2DAnmBase* param_0) {
    nofralloc
#include "asm/JSystem/J2DGraph/J2DScreen/setAnimation__9J2DScreenFP10J2DAnmBase.s"
}
#pragma pop

/* 802F9A74-802F9A78 2F43B4 0004+00 1/0 0/0 0/0 .text
 * setAnimationVF__9J2DScreenFP20J2DAnmVisibilityFull           */
void J2DScreen::setAnimationVF(J2DAnmVisibilityFull* param_0) {
    /* empty function */
}

/* 802F9A78-802F9A7C 2F43B8 0004+00 1/0 0/0 0/0 .text setAnimationVC__9J2DScreenFP14J2DAnmVtxColor
 */
void J2DScreen::setAnimationVC(J2DAnmVtxColor* param_0) {
    /* empty function */
}
