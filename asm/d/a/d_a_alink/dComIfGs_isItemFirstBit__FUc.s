lbl_80141264:
/* 80141264  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80141268  7C 08 02 A6 */	mflr r0
/* 8014126C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80141270  7C 64 1B 78 */	mr r4, r3
/* 80141274  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha /* 0x804061C0@ha */
/* 80141278  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l /* 0x804061C0@l */
/* 8014127C  38 63 00 CC */	addi r3, r3, 0xcc
/* 80141280  4B EF 2C 49 */	bl isFirstBit__21dSv_player_get_item_cCFUc
/* 80141284  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80141288  7C 08 03 A6 */	mtlr r0
/* 8014128C  38 21 00 10 */	addi r1, r1, 0x10
/* 80141290  4E 80 00 20 */	blr 
