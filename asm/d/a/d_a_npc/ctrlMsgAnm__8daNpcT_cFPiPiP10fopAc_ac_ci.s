lbl_801493B8:
/* 801493B8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801493BC  7C 08 02 A6 */	mflr r0
/* 801493C0  90 01 00 24 */	stw r0, 0x24(r1)
/* 801493C4  39 61 00 20 */	addi r11, r1, 0x20
/* 801493C8  48 21 8E 0D */	bl _savegpr_27
/* 801493CC  7C 7E 1B 78 */	mr r30, r3
/* 801493D0  7C 9B 23 78 */	mr r27, r4
/* 801493D4  7C BC 2B 78 */	mr r28, r5
/* 801493D8  7C DD 33 78 */	mr r29, r6
/* 801493DC  7C FF 3B 79 */	or. r31, r7, r7
/* 801493E0  38 00 FF FF */	li r0, -1
/* 801493E4  90 04 00 00 */	stw r0, 0(r4)
/* 801493E8  90 05 00 00 */	stw r0, 0(r5)
/* 801493EC  40 82 00 1C */	bne lbl_80149408
/* 801493F0  A0 1E 00 F8 */	lhz r0, 0xf8(r30)
/* 801493F4  28 00 00 01 */	cmplwi r0, 1
/* 801493F8  41 82 00 10 */	beq lbl_80149408
/* 801493FC  80 1E 0D AC */	lwz r0, 0xdac(r30)
/* 80149400  2C 00 FF FF */	cmpwi r0, -1
/* 80149404  41 82 00 EC */	beq lbl_801494F0
lbl_80149408:
/* 80149408  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha /* 0x804061C0@ha */
/* 8014940C  38 83 61 C0 */	addi r4, r3, g_dComIfG_gameInfo@l /* 0x804061C0@l */
/* 80149410  38 64 4E C8 */	addi r3, r4, 0x4ec8
/* 80149414  80 84 4F 94 */	lwz r4, 0x4f94(r4)
/* 80149418  4B EF 9E D5 */	bl convPId__14dEvt_control_cFUi
/* 8014941C  7C 03 E8 40 */	cmplw r3, r29
/* 80149420  40 82 00 B4 */	bne lbl_801494D4
/* 80149424  48 0E ED 79 */	bl getActor__12dMsgObject_cFv
/* 80149428  A0 03 00 F8 */	lhz r0, 0xf8(r3)
/* 8014942C  28 00 00 02 */	cmplwi r0, 2
/* 80149430  41 82 00 0C */	beq lbl_8014943C
/* 80149434  28 00 00 03 */	cmplwi r0, 3
/* 80149438  40 82 00 10 */	bne lbl_80149448
lbl_8014943C:
/* 8014943C  38 00 FF FF */	li r0, -1
/* 80149440  90 1E 0D 9C */	stw r0, 0xd9c(r30)
/* 80149444  48 00 00 AC */	b lbl_801494F0
lbl_80149448:
/* 80149448  28 00 00 06 */	cmplwi r0, 6
/* 8014944C  40 82 00 68 */	bne lbl_801494B4
/* 80149450  80 83 00 EC */	lwz r4, 0xec(r3)
/* 80149454  80 1E 0D 9C */	lwz r0, 0xd9c(r30)
/* 80149458  7C 04 00 40 */	cmplw r4, r0
/* 8014945C  41 82 00 24 */	beq lbl_80149480
/* 80149460  3C 80 80 40 */	lis r4, g_dComIfG_gameInfo@ha /* 0x804061C0@ha */
/* 80149464  38 84 61 C0 */	addi r4, r4, g_dComIfG_gameInfo@l /* 0x804061C0@l */
/* 80149468  88 04 5E 7B */	lbz r0, 0x5e7b(r4)
/* 8014946C  90 1B 00 00 */	stw r0, 0(r27)
/* 80149470  88 04 5E 7A */	lbz r0, 0x5e7a(r4)
/* 80149474  90 1C 00 00 */	stw r0, 0(r28)
/* 80149478  80 03 00 EC */	lwz r0, 0xec(r3)
/* 8014947C  90 1E 0D 9C */	stw r0, 0xd9c(r30)
lbl_80149480:
/* 80149480  48 0E EF 25 */	bl isMouthCheck__12dMsgObject_cFv
/* 80149484  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80149488  41 82 00 14 */	beq lbl_8014949C
/* 8014948C  80 1E 0D 98 */	lwz r0, 0xd98(r30)
/* 80149490  54 00 04 A0 */	rlwinm r0, r0, 0, 0x12, 0x10
/* 80149494  90 1E 0D 98 */	stw r0, 0xd98(r30)
/* 80149498  48 00 00 10 */	b lbl_801494A8
lbl_8014949C:
/* 8014949C  80 1E 0D 98 */	lwz r0, 0xd98(r30)
/* 801494A0  60 00 40 00 */	ori r0, r0, 0x4000
/* 801494A4  90 1E 0D 98 */	stw r0, 0xd98(r30)
lbl_801494A8:
/* 801494A8  38 00 00 14 */	li r0, 0x14
/* 801494AC  90 1E 0D B4 */	stw r0, 0xdb4(r30)
/* 801494B0  48 00 00 40 */	b lbl_801494F0
lbl_801494B4:
/* 801494B4  80 7E 0D 98 */	lwz r3, 0xd98(r30)
/* 801494B8  54 60 04 63 */	rlwinm. r0, r3, 0, 0x11, 0x11
/* 801494BC  41 82 00 0C */	beq lbl_801494C8
/* 801494C0  54 60 04 A0 */	rlwinm r0, r3, 0, 0x12, 0x10
/* 801494C4  90 1E 0D 98 */	stw r0, 0xd98(r30)
lbl_801494C8:
/* 801494C8  38 00 FF FF */	li r0, -1
/* 801494CC  90 1E 0D 9C */	stw r0, 0xd9c(r30)
/* 801494D0  48 00 00 20 */	b lbl_801494F0
lbl_801494D4:
/* 801494D4  38 00 FF FF */	li r0, -1
/* 801494D8  90 1E 0D 9C */	stw r0, 0xd9c(r30)
/* 801494DC  80 1E 0D B4 */	lwz r0, 0xdb4(r30)
/* 801494E0  2C 00 00 00 */	cmpwi r0, 0
/* 801494E4  41 82 00 0C */	beq lbl_801494F0
/* 801494E8  38 00 00 01 */	li r0, 1
/* 801494EC  90 1E 0D B4 */	stw r0, 0xdb4(r30)
lbl_801494F0:
/* 801494F0  2C 1F 00 00 */	cmpwi r31, 0
/* 801494F4  40 82 00 0C */	bne lbl_80149500
/* 801494F8  38 7E 0D B4 */	addi r3, r30, 0xdb4
/* 801494FC  48 00 3E 4D */	bl func_8014D348
lbl_80149500:
/* 80149500  80 7E 0D B4 */	lwz r3, 0xdb4(r30)
/* 80149504  39 61 00 20 */	addi r11, r1, 0x20
/* 80149508  48 21 8D 19 */	bl _restgpr_27
/* 8014950C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80149510  7C 08 03 A6 */	mtlr r0
/* 80149514  38 21 00 20 */	addi r1, r1, 0x20
/* 80149518  4E 80 00 20 */	blr 
