lbl_80BC962C:
/* 80BC962C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80BC9630  7C 08 02 A6 */	mflr r0
/* 80BC9634  90 01 00 14 */	stw r0, 0x14(r1)
/* 80BC9638  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80BC963C  93 C1 00 08 */	stw r30, 8(r1)
/* 80BC9640  7C 7E 1B 79 */	or. r30, r3, r3
/* 80BC9644  7C 9F 23 78 */	mr r31, r4
/* 80BC9648  41 82 00 38 */	beq lbl_80BC9680
/* 80BC964C  3C 60 80 BD */	lis r3, __vt__12dBgS_AcchCir@ha /* 0x80BCA174@ha */
/* 80BC9650  38 03 A1 74 */	addi r0, r3, __vt__12dBgS_AcchCir@l /* 0x80BCA174@l */
/* 80BC9654  90 1E 00 0C */	stw r0, 0xc(r30)
/* 80BC9658  38 7E 00 14 */	addi r3, r30, 0x14
/* 80BC965C  38 80 FF FF */	li r4, -1
/* 80BC9660  4B 6A 58 B9 */	bl __dt__8cM3dGCirFv
/* 80BC9664  7F C3 F3 78 */	mr r3, r30
/* 80BC9668  38 80 00 00 */	li r4, 0
/* 80BC966C  4B 69 EA 45 */	bl __dt__13cBgS_PolyInfoFv
/* 80BC9670  7F E0 07 35 */	extsh. r0, r31
/* 80BC9674  40 81 00 0C */	ble lbl_80BC9680
/* 80BC9678  7F C3 F3 78 */	mr r3, r30
/* 80BC967C  4B 70 56 C1 */	bl __dl__FPv
lbl_80BC9680:
/* 80BC9680  7F C3 F3 78 */	mr r3, r30
/* 80BC9684  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80BC9688  83 C1 00 08 */	lwz r30, 8(r1)
/* 80BC968C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80BC9690  7C 08 03 A6 */	mtlr r0
/* 80BC9694  38 21 00 10 */	addi r1, r1, 0x10
/* 80BC9698  4E 80 00 20 */	blr 
