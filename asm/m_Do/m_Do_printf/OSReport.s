lbl_80006ABC:
/* 80006ABC  94 21 FF 80 */	stwu r1, -0x80(r1)
/* 80006AC0  7C 08 02 A6 */	mflr r0
/* 80006AC4  90 01 00 84 */	stw r0, 0x84(r1)
/* 80006AC8  40 86 00 24 */	bne cr1, lbl_80006AEC
/* 80006ACC  D8 21 00 28 */	stfd f1, 0x28(r1)
/* 80006AD0  D8 41 00 30 */	stfd f2, 0x30(r1)
/* 80006AD4  D8 61 00 38 */	stfd f3, 0x38(r1)
/* 80006AD8  D8 81 00 40 */	stfd f4, 0x40(r1)
/* 80006ADC  D8 A1 00 48 */	stfd f5, 0x48(r1)
/* 80006AE0  D8 C1 00 50 */	stfd f6, 0x50(r1)
/* 80006AE4  D8 E1 00 58 */	stfd f7, 0x58(r1)
/* 80006AE8  D9 01 00 60 */	stfd f8, 0x60(r1)
lbl_80006AEC:
/* 80006AEC  90 61 00 08 */	stw r3, 8(r1)
/* 80006AF0  90 81 00 0C */	stw r4, 0xc(r1)
/* 80006AF4  90 A1 00 10 */	stw r5, 0x10(r1)
/* 80006AF8  90 C1 00 14 */	stw r6, 0x14(r1)
/* 80006AFC  90 E1 00 18 */	stw r7, 0x18(r1)
/* 80006B00  91 01 00 1C */	stw r8, 0x1c(r1)
/* 80006B04  91 21 00 20 */	stw r9, 0x20(r1)
/* 80006B08  91 41 00 24 */	stw r10, 0x24(r1)
/* 80006B0C  38 81 00 68 */	addi r4, r1, 0x68
/* 80006B10  3C 00 01 00 */	lis r0, 0x100
/* 80006B14  90 01 00 68 */	stw r0, 0x68(r1)
/* 80006B18  38 01 00 88 */	addi r0, r1, 0x88
/* 80006B1C  90 01 00 6C */	stw r0, 0x6c(r1)
/* 80006B20  38 01 00 08 */	addi r0, r1, 8
/* 80006B24  90 01 00 70 */	stw r0, 0x70(r1)
/* 80006B28  4B FF FF 75 */	bl OSVReport
/* 80006B2C  80 01 00 84 */	lwz r0, 0x84(r1)
/* 80006B30  7C 08 03 A6 */	mtlr r0
/* 80006B34  38 21 00 80 */	addi r1, r1, 0x80
/* 80006B38  4E 80 00 20 */	blr 
