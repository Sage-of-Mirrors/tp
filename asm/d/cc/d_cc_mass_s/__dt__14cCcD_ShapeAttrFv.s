lbl_8008556C:
/* 8008556C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80085570  7C 08 02 A6 */	mflr r0
/* 80085574  90 01 00 14 */	stw r0, 0x14(r1)
/* 80085578  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8008557C  7C 7F 1B 79 */	or. r31, r3, r3
/* 80085580  41 82 00 30 */	beq lbl_800855B0
/* 80085584  3C 60 80 3C */	lis r3, __vt__14cCcD_ShapeAttr@ha /* 0x803C36D0@ha */
/* 80085588  38 03 36 D0 */	addi r0, r3, __vt__14cCcD_ShapeAttr@l /* 0x803C36D0@l */
/* 8008558C  90 1F 00 1C */	stw r0, 0x1c(r31)
/* 80085590  41 82 00 10 */	beq lbl_800855A0
/* 80085594  3C 60 80 3A */	lis r3, __vt__8cM3dGAab@ha /* 0x803A7218@ha */
/* 80085598  38 03 72 18 */	addi r0, r3, __vt__8cM3dGAab@l /* 0x803A7218@l */
/* 8008559C  90 1F 00 18 */	stw r0, 0x18(r31)
lbl_800855A0:
/* 800855A0  7C 80 07 35 */	extsh. r0, r4
/* 800855A4  40 81 00 0C */	ble lbl_800855B0
/* 800855A8  7F E3 FB 78 */	mr r3, r31
/* 800855AC  48 24 97 91 */	bl __dl__FPv
lbl_800855B0:
/* 800855B0  7F E3 FB 78 */	mr r3, r31
/* 800855B4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800855B8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800855BC  7C 08 03 A6 */	mtlr r0
/* 800855C0  38 21 00 10 */	addi r1, r1, 0x10
/* 800855C4  4E 80 00 20 */	blr 
