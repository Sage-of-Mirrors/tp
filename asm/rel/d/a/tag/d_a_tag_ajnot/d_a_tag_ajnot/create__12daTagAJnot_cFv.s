lbl_805A2658:
/* 805A2658  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 805A265C  7C 08 02 A6 */	mflr r0
/* 805A2660  90 01 00 14 */	stw r0, 0x14(r1)
/* 805A2664  93 E1 00 0C */	stw r31, 0xc(r1)
/* 805A2668  7C 7F 1B 78 */	mr r31, r3
/* 805A266C  80 03 04 A0 */	lwz r0, 0x4a0(r3)
/* 805A2670  54 00 07 39 */	rlwinm. r0, r0, 0, 0x1c, 0x1c
/* 805A2674  40 82 00 1C */	bne lbl_805A2690
/* 805A2678  28 1F 00 00 */	cmplwi r31, 0
/* 805A267C  41 82 00 08 */	beq lbl_805A2684
/* 805A2680  4B A7 64 E5 */	bl __ct__10fopAc_ac_cFv
lbl_805A2684:
/* 805A2684  80 1F 04 A0 */	lwz r0, 0x4a0(r31)
/* 805A2688  60 00 00 08 */	ori r0, r0, 8
/* 805A268C  90 1F 04 A0 */	stw r0, 0x4a0(r31)
lbl_805A2690:
/* 805A2690  38 60 00 04 */	li r3, 4
/* 805A2694  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 805A2698  80 01 00 14 */	lwz r0, 0x14(r1)
/* 805A269C  7C 08 03 A6 */	mtlr r0
/* 805A26A0  38 21 00 10 */	addi r1, r1, 0x10
/* 805A26A4  4E 80 00 20 */	blr 
