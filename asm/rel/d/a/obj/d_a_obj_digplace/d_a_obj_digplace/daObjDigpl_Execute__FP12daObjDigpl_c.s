lbl_8057C880:
/* 8057C880  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8057C884  7C 08 02 A6 */	mflr r0
/* 8057C888  90 01 00 14 */	stw r0, 0x14(r1)
/* 8057C88C  4B FF F9 61 */	bl execute__12daObjDigpl_cFv
/* 8057C890  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8057C894  7C 08 03 A6 */	mtlr r0
/* 8057C898  38 21 00 10 */	addi r1, r1, 0x10
/* 8057C89C  4E 80 00 20 */	blr 
