lbl_80030ECC:
/* 80030ECC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80030ED0  7C 08 02 A6 */	mflr r0
/* 80030ED4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80030ED8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80030EDC  7C 7F 1B 79 */	or. r31, r3, r3
/* 80030EE0  41 82 00 1C */	beq lbl_80030EFC
/* 80030EE4  3C A0 80 3A */	lis r5, __vt__15cCcD_DivideInfo@ha /* 0x803A7224@ha */
/* 80030EE8  38 05 72 24 */	addi r0, r5, __vt__15cCcD_DivideInfo@l /* 0x803A7224@l */
/* 80030EEC  90 1F 00 0C */	stw r0, 0xc(r31)
/* 80030EF0  7C 80 07 35 */	extsh. r0, r4
/* 80030EF4  40 81 00 08 */	ble lbl_80030EFC
/* 80030EF8  48 29 DE 45 */	bl __dl__FPv
lbl_80030EFC:
/* 80030EFC  7F E3 FB 78 */	mr r3, r31
/* 80030F00  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80030F04  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80030F08  7C 08 03 A6 */	mtlr r0
/* 80030F0C  38 21 00 10 */	addi r1, r1, 0x10
/* 80030F10  4E 80 00 20 */	blr 
