lbl_802C48E8:
/* 802C48E8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802C48EC  7C 08 02 A6 */	mflr r0
/* 802C48F0  90 01 00 14 */	stw r0, 0x14(r1)
/* 802C48F4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802C48F8  7C 7F 1B 78 */	mr r31, r3
/* 802C48FC  38 80 00 00 */	li r4, 0
/* 802C4900  4B FE 62 95 */	bl __ct__14Z2SoundStarterFb
/* 802C4904  3C 60 80 3D */	lis r3, __vt__18Z2LinkSoundStarter@ha /* 0x803CB96C@ha */
/* 802C4908  38 03 B9 6C */	addi r0, r3, __vt__18Z2LinkSoundStarter@l /* 0x803CB96C@l */
/* 802C490C  90 1F 00 00 */	stw r0, 0(r31)
/* 802C4910  7F E3 FB 78 */	mr r3, r31
/* 802C4914  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802C4918  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802C491C  7C 08 03 A6 */	mtlr r0
/* 802C4920  38 21 00 10 */	addi r1, r1, 0x10
/* 802C4924  4E 80 00 20 */	blr 
