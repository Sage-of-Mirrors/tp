lbl_80C606F8:
/* 80C606F8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80C606FC  7C 08 02 A6 */	mflr r0
/* 80C60700  90 01 00 14 */	stw r0, 0x14(r1)
/* 80C60704  4B 41 82 4D */	bl MoveBGExecute__16dBgS_MoveBgActorFv
/* 80C60708  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80C6070C  7C 08 03 A6 */	mtlr r0
/* 80C60710  38 21 00 10 */	addi r1, r1, 0x10
/* 80C60714  4E 80 00 20 */	blr 
