lbl_8014EF28:
/* 8014EF28  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8014EF2C  7C 08 02 A6 */	mflr r0
/* 8014EF30  90 01 00 14 */	stw r0, 0x14(r1)
/* 8014EF34  7C 83 23 78 */	mr r3, r4
/* 8014EF38  7C A4 2B 78 */	mr r4, r5
/* 8014EF3C  3C A0 80 40 */	lis r5, g_dComIfG_gameInfo@ha /* 0x804061C0@ha */
/* 8014EF40  38 A5 61 C0 */	addi r5, r5, g_dComIfG_gameInfo@l /* 0x804061C0@l */
/* 8014EF44  3C A5 00 02 */	addis r5, r5, 2
/* 8014EF48  38 C0 00 80 */	li r6, 0x80
/* 8014EF4C  38 A5 C2 F8 */	addi r5, r5, -15624
/* 8014EF50  4B EE D3 9D */	bl getRes__14dRes_control_cFPCclP11dRes_info_ci
/* 8014EF54  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8014EF58  7C 08 03 A6 */	mtlr r0
/* 8014EF5C  38 21 00 10 */	addi r1, r1, 0x10
/* 8014EF60  4E 80 00 20 */	blr 
