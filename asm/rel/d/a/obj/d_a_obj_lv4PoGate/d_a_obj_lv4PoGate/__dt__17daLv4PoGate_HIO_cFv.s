lbl_80C60758:
/* 80C60758  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80C6075C  7C 08 02 A6 */	mflr r0
/* 80C60760  90 01 00 14 */	stw r0, 0x14(r1)
/* 80C60764  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80C60768  7C 7F 1B 79 */	or. r31, r3, r3
/* 80C6076C  41 82 00 30 */	beq lbl_80C6079C
/* 80C60770  3C 60 80 C6 */	lis r3, __vt__17daLv4PoGate_HIO_c@ha /* 0x80C60994@ha */
/* 80C60774  38 03 09 94 */	addi r0, r3, __vt__17daLv4PoGate_HIO_c@l /* 0x80C60994@l */
/* 80C60778  90 1F 00 00 */	stw r0, 0(r31)
/* 80C6077C  41 82 00 10 */	beq lbl_80C6078C
/* 80C60780  3C 60 80 C6 */	lis r3, __vt__14mDoHIO_entry_c@ha /* 0x80C609A0@ha */
/* 80C60784  38 03 09 A0 */	addi r0, r3, __vt__14mDoHIO_entry_c@l /* 0x80C609A0@l */
/* 80C60788  90 1F 00 00 */	stw r0, 0(r31)
lbl_80C6078C:
/* 80C6078C  7C 80 07 35 */	extsh. r0, r4
/* 80C60790  40 81 00 0C */	ble lbl_80C6079C
/* 80C60794  7F E3 FB 78 */	mr r3, r31
/* 80C60798  4B 66 E5 A5 */	bl __dl__FPv
lbl_80C6079C:
/* 80C6079C  7F E3 FB 78 */	mr r3, r31
/* 80C607A0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80C607A4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80C607A8  7C 08 03 A6 */	mtlr r0
/* 80C607AC  38 21 00 10 */	addi r1, r1, 0x10
/* 80C607B0  4E 80 00 20 */	blr 
