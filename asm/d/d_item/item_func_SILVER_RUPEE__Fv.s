lbl_80097FE0:
/* 80097FE0  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha /* 0x804061C0@ha */
/* 80097FE4  38 83 61 C0 */	addi r4, r3, g_dComIfG_gameInfo@l /* 0x804061C0@l */
/* 80097FE8  80 64 5D C4 */	lwz r3, 0x5dc4(r4)
/* 80097FEC  38 03 00 C8 */	addi r0, r3, 0xc8
/* 80097FF0  90 04 5D C4 */	stw r0, 0x5dc4(r4)
/* 80097FF4  4E 80 00 20 */	blr 
