lbl_8009A8E0:
/* 8009A8E0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8009A8E4  7C 08 02 A6 */	mflr r0
/* 8009A8E8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8009A8EC  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha /* 0x804061C0@ha */
/* 8009A8F0  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l /* 0x804061C0@l */
/* 8009A8F4  38 63 00 9C */	addi r3, r3, 0x9c
/* 8009A8F8  38 80 00 73 */	li r4, 0x73
/* 8009A8FC  4B F9 8D E5 */	bl checkBottle__17dSv_player_item_cFUc
/* 8009A900  54 63 06 3E */	clrlwi r3, r3, 0x18
/* 8009A904  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8009A908  7C 08 03 A6 */	mtlr r0
/* 8009A90C  38 21 00 10 */	addi r1, r1, 0x10
/* 8009A910  4E 80 00 20 */	blr 
