lbl_801A75E0:
/* 801A75E0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801A75E4  7C 08 02 A6 */	mflr r0
/* 801A75E8  90 01 00 24 */	stw r0, 0x24(r1)
/* 801A75EC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801A75F0  7C 7F 1B 78 */	mr r31, r3
/* 801A75F4  A8 03 03 48 */	lha r0, 0x348(r3)
/* 801A75F8  98 01 00 0C */	stb r0, 0xc(r1)
/* 801A75FC  A8 03 03 4A */	lha r0, 0x34a(r3)
/* 801A7600  98 01 00 0D */	stb r0, 0xd(r1)
/* 801A7604  A8 03 03 4C */	lha r0, 0x34c(r3)
/* 801A7608  98 01 00 0E */	stb r0, 0xe(r1)
/* 801A760C  A8 03 03 4E */	lha r0, 0x34e(r3)
/* 801A7610  98 01 00 0F */	stb r0, 0xf(r1)
/* 801A7614  88 03 03 7A */	lbz r0, 0x37a(r3)
/* 801A7618  28 00 00 02 */	cmplwi r0, 2
/* 801A761C  41 82 00 0C */	beq lbl_801A7628
/* 801A7620  28 00 00 03 */	cmplwi r0, 3
/* 801A7624  40 82 00 54 */	bne lbl_801A7678
lbl_801A7628:
/* 801A7628  48 00 4F 55 */	bl dKy_darkworld_check__Fv
/* 801A762C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801A7630  41 82 00 80 */	beq lbl_801A76B0
/* 801A7634  88 1F 03 7A */	lbz r0, 0x37a(r31)
/* 801A7638  28 00 00 02 */	cmplwi r0, 2
/* 801A763C  40 82 00 20 */	bne lbl_801A765C
/* 801A7640  38 00 00 12 */	li r0, 0x12
/* 801A7644  98 01 00 0C */	stb r0, 0xc(r1)
/* 801A7648  98 01 00 0D */	stb r0, 0xd(r1)
/* 801A764C  98 01 00 0E */	stb r0, 0xe(r1)
/* 801A7650  38 00 00 00 */	li r0, 0
/* 801A7654  98 01 00 0F */	stb r0, 0xf(r1)
/* 801A7658  48 00 00 58 */	b lbl_801A76B0
lbl_801A765C:
/* 801A765C  38 00 00 0C */	li r0, 0xc
/* 801A7660  98 01 00 0C */	stb r0, 0xc(r1)
/* 801A7664  98 01 00 0D */	stb r0, 0xd(r1)
/* 801A7668  98 01 00 0E */	stb r0, 0xe(r1)
/* 801A766C  38 00 00 00 */	li r0, 0
/* 801A7670  98 01 00 0F */	stb r0, 0xf(r1)
/* 801A7674  48 00 00 3C */	b lbl_801A76B0
lbl_801A7678:
/* 801A7678  28 00 00 01 */	cmplwi r0, 1
/* 801A767C  41 80 00 0C */	blt lbl_801A7688
/* 801A7680  28 00 00 07 */	cmplwi r0, 7
/* 801A7684  40 81 00 18 */	ble lbl_801A769C
lbl_801A7688:
/* 801A7688  28 00 00 09 */	cmplwi r0, 9
/* 801A768C  40 82 00 24 */	bne lbl_801A76B0
/* 801A7690  48 00 4E ED */	bl dKy_darkworld_check__Fv
/* 801A7694  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801A7698  41 82 00 18 */	beq lbl_801A76B0
lbl_801A769C:
/* 801A769C  38 00 00 00 */	li r0, 0
/* 801A76A0  98 01 00 0C */	stb r0, 0xc(r1)
/* 801A76A4  98 01 00 0D */	stb r0, 0xd(r1)
/* 801A76A8  98 01 00 0E */	stb r0, 0xe(r1)
/* 801A76AC  98 01 00 0F */	stb r0, 0xf(r1)
lbl_801A76B0:
/* 801A76B0  80 01 00 0C */	lwz r0, 0xc(r1)
/* 801A76B4  90 01 00 08 */	stw r0, 8(r1)
/* 801A76B8  38 60 00 04 */	li r3, 4
/* 801A76BC  38 81 00 08 */	addi r4, r1, 8
/* 801A76C0  48 1B 62 A1 */	bl GXSetChanAmbColor
/* 801A76C4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801A76C8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801A76CC  7C 08 03 A6 */	mtlr r0
/* 801A76D0  38 21 00 20 */	addi r1, r1, 0x20
/* 801A76D4  4E 80 00 20 */	blr 
