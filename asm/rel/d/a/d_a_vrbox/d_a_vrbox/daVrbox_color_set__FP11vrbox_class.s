lbl_804986B8:
/* 804986B8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 804986BC  7C 08 02 A6 */	mflr r0
/* 804986C0  90 01 00 24 */	stw r0, 0x24(r1)
/* 804986C4  39 61 00 20 */	addi r11, r1, 0x20
/* 804986C8  4B EC 9B 15 */	bl _savegpr_29
/* 804986CC  3C 80 80 43 */	lis r4, g_env_light@ha /* 0x8042CA54@ha */
/* 804986D0  3B E4 CA 54 */	addi r31, r4, g_env_light@l /* 0x8042CA54@l */
/* 804986D4  A9 7F 10 CC */	lha r11, 0x10cc(r31)
/* 804986D8  A9 5F 10 CA */	lha r10, 0x10ca(r31)
/* 804986DC  A9 3F 10 C8 */	lha r9, 0x10c8(r31)
/* 804986E0  A9 1F 10 C4 */	lha r8, 0x10c4(r31)
/* 804986E4  A8 FF 10 C2 */	lha r7, 0x10c2(r31)
/* 804986E8  A8 DF 10 C0 */	lha r6, 0x10c0(r31)
/* 804986EC  A8 BF 10 E4 */	lha r5, 0x10e4(r31)
/* 804986F0  A8 9F 10 E0 */	lha r4, 0x10e0(r31)
/* 804986F4  A8 1F 10 E2 */	lha r0, 0x10e2(r31)
/* 804986F8  7C 00 2A 14 */	add r0, r0, r5
/* 804986FC  7C 00 32 14 */	add r0, r0, r6
/* 80498700  7C 00 3A 14 */	add r0, r0, r7
/* 80498704  7C 00 42 14 */	add r0, r0, r8
/* 80498708  7C 00 4A 14 */	add r0, r0, r9
/* 8049870C  7C 00 52 14 */	add r0, r0, r10
/* 80498710  7C 00 5A 14 */	add r0, r0, r11
/* 80498714  7C 04 02 15 */	add. r0, r4, r0
/* 80498718  40 82 00 14 */	bne lbl_8049872C
/* 8049871C  38 00 00 01 */	li r0, 1
/* 80498720  98 1F 12 D4 */	stb r0, 0x12d4(r31)
/* 80498724  38 60 00 01 */	li r3, 1
/* 80498728  48 00 01 10 */	b lbl_80498838
lbl_8049872C:
/* 8049872C  38 00 00 00 */	li r0, 0
/* 80498730  98 1F 12 D4 */	stb r0, 0x12d4(r31)
/* 80498734  80 63 05 6C */	lwz r3, 0x56c(r3)
/* 80498738  83 C3 00 04 */	lwz r30, 4(r3)
/* 8049873C  80 7E 00 60 */	lwz r3, 0x60(r30)
/* 80498740  83 A3 00 00 */	lwz r29, 0(r3)
/* 80498744  28 1D 00 00 */	cmplwi r29, 0
/* 80498748  41 82 00 6C */	beq lbl_804987B4
/* 8049874C  80 7D 00 24 */	lwz r3, 0x24(r29)
/* 80498750  38 80 00 00 */	li r4, 0
/* 80498754  81 83 00 00 */	lwz r12, 0(r3)
/* 80498758  81 8C 00 74 */	lwz r12, 0x74(r12)
/* 8049875C  7D 89 03 A6 */	mtctr r12
/* 80498760  4E 80 04 21 */	bctrl 
/* 80498764  7F A3 EB 78 */	mr r3, r29
/* 80498768  81 9D 00 00 */	lwz r12, 0(r29)
/* 8049876C  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 80498770  7D 89 03 A6 */	mtctr r12
/* 80498774  4E 80 04 21 */	bctrl 
/* 80498778  A8 1F 10 C0 */	lha r0, 0x10c0(r31)
/* 8049877C  B0 01 00 08 */	sth r0, 8(r1)
/* 80498780  A8 1F 10 C2 */	lha r0, 0x10c2(r31)
/* 80498784  B0 01 00 0A */	sth r0, 0xa(r1)
/* 80498788  A8 1F 10 C4 */	lha r0, 0x10c4(r31)
/* 8049878C  B0 01 00 0C */	sth r0, 0xc(r1)
/* 80498790  38 00 00 FF */	li r0, 0xff
/* 80498794  B0 01 00 0E */	sth r0, 0xe(r1)
/* 80498798  80 7D 00 2C */	lwz r3, 0x2c(r29)
/* 8049879C  38 80 00 00 */	li r4, 0
/* 804987A0  38 A1 00 08 */	addi r5, r1, 8
/* 804987A4  81 83 00 00 */	lwz r12, 0(r3)
/* 804987A8  81 8C 00 60 */	lwz r12, 0x60(r12)
/* 804987AC  7D 89 03 A6 */	mtctr r12
/* 804987B0  4E 80 04 21 */	bctrl 
lbl_804987B4:
/* 804987B4  80 7E 00 60 */	lwz r3, 0x60(r30)
/* 804987B8  83 A3 00 04 */	lwz r29, 4(r3)
/* 804987BC  28 1D 00 00 */	cmplwi r29, 0
/* 804987C0  41 82 00 74 */	beq lbl_80498834
/* 804987C4  80 7D 00 24 */	lwz r3, 0x24(r29)
/* 804987C8  38 80 00 00 */	li r4, 0
/* 804987CC  81 83 00 00 */	lwz r12, 0(r3)
/* 804987D0  81 8C 00 74 */	lwz r12, 0x74(r12)
/* 804987D4  7D 89 03 A6 */	mtctr r12
/* 804987D8  4E 80 04 21 */	bctrl 
/* 804987DC  7F A3 EB 78 */	mr r3, r29
/* 804987E0  81 9D 00 00 */	lwz r12, 0(r29)
/* 804987E4  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 804987E8  7D 89 03 A6 */	mtctr r12
/* 804987EC  4E 80 04 21 */	bctrl 
/* 804987F0  3C 60 80 43 */	lis r3, g_env_light@ha /* 0x8042CA54@ha */
/* 804987F4  38 63 CA 54 */	addi r3, r3, g_env_light@l /* 0x8042CA54@l */
/* 804987F8  A8 03 10 E8 */	lha r0, 0x10e8(r3)
/* 804987FC  B0 01 00 08 */	sth r0, 8(r1)
/* 80498800  A8 03 10 EA */	lha r0, 0x10ea(r3)
/* 80498804  B0 01 00 0A */	sth r0, 0xa(r1)
/* 80498808  A8 03 10 EC */	lha r0, 0x10ec(r3)
/* 8049880C  B0 01 00 0C */	sth r0, 0xc(r1)
/* 80498810  A8 03 10 EE */	lha r0, 0x10ee(r3)
/* 80498814  B0 01 00 0E */	sth r0, 0xe(r1)
/* 80498818  80 7D 00 2C */	lwz r3, 0x2c(r29)
/* 8049881C  38 80 00 00 */	li r4, 0
/* 80498820  38 A1 00 08 */	addi r5, r1, 8
/* 80498824  81 83 00 00 */	lwz r12, 0(r3)
/* 80498828  81 8C 00 60 */	lwz r12, 0x60(r12)
/* 8049882C  7D 89 03 A6 */	mtctr r12
/* 80498830  4E 80 04 21 */	bctrl 
lbl_80498834:
/* 80498834  38 60 00 01 */	li r3, 1
lbl_80498838:
/* 80498838  39 61 00 20 */	addi r11, r1, 0x20
/* 8049883C  4B EC 99 ED */	bl _restgpr_29
/* 80498840  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80498844  7C 08 03 A6 */	mtlr r0
/* 80498848  38 21 00 20 */	addi r1, r1, 0x20
/* 8049884C  4E 80 00 20 */	blr 
