lbl_800AFB14:
/* 800AFB14  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800AFB18  7C 08 02 A6 */	mflr r0
/* 800AFB1C  90 01 00 14 */	stw r0, 0x14(r1)
/* 800AFB20  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800AFB24  93 C1 00 08 */	stw r30, 8(r1)
/* 800AFB28  7C 7E 1B 78 */	mr r30, r3
/* 800AFB2C  1C A4 00 0C */	mulli r5, r4, 0xc
/* 800AFB30  3C 80 80 39 */	lis r4, m_anmDataTable__9daAlink_c@ha /* 0x8038FCA8@ha */
/* 800AFB34  38 04 FC A8 */	addi r0, r4, m_anmDataTable__9daAlink_c@l /* 0x8038FCA8@l */
/* 800AFB38  7F E0 2A 14 */	add r31, r0, r5
/* 800AFB3C  A0 9F 00 06 */	lhz r4, 6(r31)
/* 800AFB40  4B FF FF 69 */	bl setFacePriTexture__9daAlink_cFQ29daAlink_c13daAlink_FTANM
/* 800AFB44  7F C3 F3 78 */	mr r3, r30
/* 800AFB48  A0 9F 00 08 */	lhz r4, 8(r31)
/* 800AFB4C  38 A0 00 01 */	li r5, 1
/* 800AFB50  3C C0 00 01 */	lis r6, 0x0001 /* 0x0000FFFF@ha */
/* 800AFB54  38 C6 FF FF */	addi r6, r6, 0xFFFF /* 0x0000FFFF@l */
/* 800AFB58  4B FF F9 59 */	bl setFaceBck__9daAlink_cFUsiUs
/* 800AFB5C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800AFB60  83 C1 00 08 */	lwz r30, 8(r1)
/* 800AFB64  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800AFB68  7C 08 03 A6 */	mtlr r0
/* 800AFB6C  38 21 00 10 */	addi r1, r1, 0x10
/* 800AFB70  4E 80 00 20 */	blr 
