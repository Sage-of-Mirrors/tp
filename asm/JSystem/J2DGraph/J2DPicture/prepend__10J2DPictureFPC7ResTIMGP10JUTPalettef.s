lbl_802FF3B0:
/* 802FF3B0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802FF3B4  7C 08 02 A6 */	mflr r0
/* 802FF3B8  90 01 00 14 */	stw r0, 0x14(r1)
/* 802FF3BC  38 C0 00 00 */	li r6, 0
/* 802FF3C0  81 83 00 00 */	lwz r12, 0(r3)
/* 802FF3C4  81 8C 00 C8 */	lwz r12, 0xc8(r12)
/* 802FF3C8  7D 89 03 A6 */	mtctr r12
/* 802FF3CC  4E 80 04 21 */	bctrl 
/* 802FF3D0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802FF3D4  7C 08 03 A6 */	mtlr r0
/* 802FF3D8  38 21 00 10 */	addi r1, r1, 0x10
/* 802FF3DC  4E 80 00 20 */	blr 
