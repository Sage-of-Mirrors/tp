lbl_80046C74:
/* 80046C74  80 03 04 9C */	lwz r0, 0x49c(r3)
/* 80046C78  60 00 08 00 */	ori r0, r0, 0x800
/* 80046C7C  90 03 04 9C */	stw r0, 0x49c(r3)
/* 80046C80  38 60 00 00 */	li r3, 0
/* 80046C84  4E 80 00 20 */	blr 
