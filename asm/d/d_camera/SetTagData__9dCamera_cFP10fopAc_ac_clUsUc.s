lbl_80163558:
/* 80163558  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8016355C  7C 08 02 A6 */	mflr r0
/* 80163560  90 01 00 14 */	stw r0, 0x14(r1)
/* 80163564  7C 8A 23 79 */	or. r10, r4, r4
/* 80163568  7C C9 33 78 */	mr r9, r6
/* 8016356C  7C E8 3B 78 */	mr r8, r7
/* 80163570  7C A4 2B 78 */	mr r4, r5
/* 80163574  38 63 08 60 */	addi r3, r3, 0x860
/* 80163578  41 82 00 10 */	beq lbl_80163588
/* 8016357C  88 0A 04 E2 */	lbz r0, 0x4e2(r10)
/* 80163580  7C 05 07 74 */	extsb r5, r0
/* 80163584  48 00 00 0C */	b lbl_80163590
lbl_80163588:
/* 80163588  88 AD 87 E4 */	lbz r5, struct_80450D64+0x0(r13)
/* 8016358C  7C A5 07 74 */	extsb r5, r5
lbl_80163590:
/* 80163590  7D 46 53 78 */	mr r6, r10
/* 80163594  7D 27 4B 78 */	mr r7, r9
/* 80163598  4B FF C9 21 */	bl Set__15dCamMapToolDataFllP10fopAc_ac_cUsUc
/* 8016359C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801635A0  7C 08 03 A6 */	mtlr r0
/* 801635A4  38 21 00 10 */	addi r1, r1, 0x10
/* 801635A8  4E 80 00 20 */	blr 
