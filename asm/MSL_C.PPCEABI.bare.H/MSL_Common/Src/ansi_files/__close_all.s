lbl_8036307C:
/* 8036307C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80363080  7C 08 02 A6 */	mflr r0
/* 80363084  3C 80 80 3D */	lis r4, __files@ha /* 0x803D29B0@ha */
/* 80363088  38 60 00 02 */	li r3, 2
/* 8036308C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80363090  38 04 29 B0 */	addi r0, r4, __files@l /* 0x803D29B0@l */
/* 80363094  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80363098  7C 1F 03 78 */	mr r31, r0
/* 8036309C  48 00 23 CD */	bl __begin_critical_region
/* 803630A0  48 00 00 60 */	b lbl_80363100
lbl_803630A4:
/* 803630A4  A0 1F 00 04 */	lhz r0, 4(r31)
/* 803630A8  54 00 D7 7F */	rlwinm. r0, r0, 0x1a, 0x1d, 0x1f
/* 803630AC  41 82 00 0C */	beq lbl_803630B8
/* 803630B0  7F E3 FB 78 */	mr r3, r31
/* 803630B4  48 00 29 45 */	bl fclose
lbl_803630B8:
/* 803630B8  7F E3 FB 78 */	mr r3, r31
/* 803630BC  83 FF 00 4C */	lwz r31, 0x4c(r31)
/* 803630C0  88 03 00 0C */	lbz r0, 0xc(r3)
/* 803630C4  28 00 00 00 */	cmplwi r0, 0
/* 803630C8  41 82 00 0C */	beq lbl_803630D4
/* 803630CC  4B FF FA 8D */	bl free
/* 803630D0  48 00 00 30 */	b lbl_80363100
lbl_803630D4:
/* 803630D4  A0 03 00 04 */	lhz r0, 4(r3)
/* 803630D8  38 80 00 03 */	li r4, 3
/* 803630DC  50 80 35 F2 */	rlwimi r0, r4, 6, 0x17, 0x19
/* 803630E0  28 1F 00 00 */	cmplwi r31, 0
/* 803630E4  B0 03 00 04 */	sth r0, 4(r3)
/* 803630E8  41 82 00 18 */	beq lbl_80363100
/* 803630EC  88 1F 00 0C */	lbz r0, 0xc(r31)
/* 803630F0  28 00 00 00 */	cmplwi r0, 0
/* 803630F4  41 82 00 0C */	beq lbl_80363100
/* 803630F8  38 00 00 00 */	li r0, 0
/* 803630FC  90 03 00 4C */	stw r0, 0x4c(r3)
lbl_80363100:
/* 80363100  28 1F 00 00 */	cmplwi r31, 0
/* 80363104  40 82 FF A0 */	bne lbl_803630A4
/* 80363108  38 60 00 02 */	li r3, 2
/* 8036310C  48 00 23 59 */	bl __end_critical_region
/* 80363110  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80363114  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80363118  7C 08 03 A6 */	mtlr r0
/* 8036311C  38 21 00 10 */	addi r1, r1, 0x10
/* 80363120  4E 80 00 20 */	blr 
