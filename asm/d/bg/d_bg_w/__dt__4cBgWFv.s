lbl_8007933C:
/* 8007933C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80079340  7C 08 02 A6 */	mflr r0
/* 80079344  90 01 00 14 */	stw r0, 0x14(r1)
/* 80079348  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8007934C  93 C1 00 08 */	stw r30, 8(r1)
/* 80079350  7C 7E 1B 79 */	or. r30, r3, r3
/* 80079354  7C 9F 23 78 */	mr r31, r4
/* 80079358  41 82 00 30 */	beq lbl_80079388
/* 8007935C  3C 80 80 3B */	lis r4, __vt__4cBgW@ha /* 0x803ABBA8@ha */
/* 80079360  38 04 BB A8 */	addi r0, r4, __vt__4cBgW@l /* 0x803ABBA8@l */
/* 80079364  90 1E 00 04 */	stw r0, 4(r30)
/* 80079368  48 00 00 3D */	bl FreeArea__4cBgWFv
/* 8007936C  7F C3 F3 78 */	mr r3, r30
/* 80079370  38 80 00 00 */	li r4, 0
/* 80079374  48 00 52 CD */	bl __dt__9dBgW_BaseFv
/* 80079378  7F E0 07 35 */	extsh. r0, r31
/* 8007937C  40 81 00 0C */	ble lbl_80079388
/* 80079380  7F C3 F3 78 */	mr r3, r30
/* 80079384  48 25 59 B9 */	bl __dl__FPv
lbl_80079388:
/* 80079388  7F C3 F3 78 */	mr r3, r30
/* 8007938C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80079390  83 C1 00 08 */	lwz r30, 8(r1)
/* 80079394  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80079398  7C 08 03 A6 */	mtlr r0
/* 8007939C  38 21 00 10 */	addi r1, r1, 0x10
/* 800793A0  4E 80 00 20 */	blr 
