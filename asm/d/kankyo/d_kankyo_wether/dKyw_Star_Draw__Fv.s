lbl_80057270:
/* 80057270  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80057274  7C 08 02 A6 */	mflr r0
/* 80057278  90 01 00 14 */	stw r0, 0x14(r1)
/* 8005727C  38 60 00 01 */	li r3, 1
/* 80057280  4B FF FF C1 */	bl dKyw_drawStar__Fi
/* 80057284  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80057288  7C 08 03 A6 */	mtlr r0
/* 8005728C  38 21 00 10 */	addi r1, r1, 0x10
/* 80057290  4E 80 00 20 */	blr 
