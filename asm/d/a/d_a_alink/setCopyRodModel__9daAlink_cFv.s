lbl_800E1748:
/* 800E1748  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800E174C  7C 08 02 A6 */	mflr r0
/* 800E1750  90 01 00 14 */	stw r0, 0x14(r1)
/* 800E1754  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800E1758  93 C1 00 08 */	stw r30, 8(r1)
/* 800E175C  7C 7F 1B 78 */	mr r31, r3
/* 800E1760  4B FC 25 2D */	bl setItemHeap__9daAlink_cFv
/* 800E1764  7C 7E 1B 78 */	mr r30, r3
/* 800E1768  7F E3 FB 78 */	mr r3, r31
/* 800E176C  38 80 03 15 */	li r4, 0x315
/* 800E1770  38 A0 54 00 */	li r5, 0x5400
/* 800E1774  4B FD E6 D5 */	bl loadAramBmd__9daAlink_cFUsUl
/* 800E1778  7C 64 1B 78 */	mr r4, r3
/* 800E177C  7F E3 FB 78 */	mr r3, r31
/* 800E1780  3C A0 00 08 */	lis r5, 8
/* 800E1784  3C C0 01 00 */	lis r6, 0x100
/* 800E1788  4B FC 25 F5 */	bl initModel__9daAlink_cFP12J3DModelDataUlUl
/* 800E178C  90 7F 07 08 */	stw r3, 0x708(r31)
/* 800E1790  7F E3 FB 78 */	mr r3, r31
/* 800E1794  38 80 03 23 */	li r4, 0x323
/* 800E1798  80 BF 07 08 */	lwz r5, 0x708(r31)
/* 800E179C  4B FD E7 D5 */	bl loadAramItemBrk__9daAlink_cFUsP8J3DModel
/* 800E17A0  90 7F 07 24 */	stw r3, 0x724(r31)
/* 800E17A4  7F C3 F3 78 */	mr r3, r30
/* 800E17A8  4B F2 DA 25 */	bl mDoExt_setCurrentHeap__FP7JKRHeap
/* 800E17AC  C0 02 92 C0 */	lfs f0, lit_6108(r2)
/* 800E17B0  80 7F 07 24 */	lwz r3, 0x724(r31)
/* 800E17B4  D0 03 00 08 */	stfs f0, 8(r3)
/* 800E17B8  38 00 00 02 */	li r0, 2
/* 800E17BC  98 1F 2F 94 */	stb r0, 0x2f94(r31)
/* 800E17C0  38 60 00 00 */	li r3, 0
/* 800E17C4  98 7F 12 A3 */	stb r3, 0x12a3(r31)
/* 800E17C8  98 7F 12 40 */	stb r3, 0x1240(r31)
/* 800E17CC  38 00 00 14 */	li r0, 0x14
/* 800E17D0  98 1F 12 A0 */	stb r0, 0x12a0(r31)
/* 800E17D4  38 00 00 01 */	li r0, 1
/* 800E17D8  98 1F 12 A2 */	stb r0, 0x12a2(r31)
/* 800E17DC  80 1F 12 2C */	lwz r0, 0x122c(r31)
/* 800E17E0  60 00 00 01 */	ori r0, r0, 1
/* 800E17E4  90 1F 12 2C */	stw r0, 0x122c(r31)
/* 800E17E8  90 7F 12 8C */	stw r3, 0x128c(r31)
/* 800E17EC  98 7F 12 A1 */	stb r3, 0x12a1(r31)
/* 800E17F0  80 7F 06 50 */	lwz r3, 0x650(r31)
/* 800E17F4  80 63 00 84 */	lwz r3, 0x84(r3)
/* 800E17F8  80 63 00 0C */	lwz r3, 0xc(r3)
/* 800E17FC  A0 1F 30 C0 */	lhz r0, 0x30c0(r31)
/* 800E1800  1C 00 00 30 */	mulli r0, r0, 0x30
/* 800E1804  7C 63 02 14 */	add r3, r3, r0
/* 800E1808  80 9F 07 08 */	lwz r4, 0x708(r31)
/* 800E180C  38 84 00 24 */	addi r4, r4, 0x24
/* 800E1810  48 26 4C A1 */	bl PSMTXCopy
/* 800E1814  80 7F 07 08 */	lwz r3, 0x708(r31)
/* 800E1818  81 83 00 00 */	lwz r12, 0(r3)
/* 800E181C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 800E1820  7D 89 03 A6 */	mtctr r12
/* 800E1824  4E 80 04 21 */	bctrl 
/* 800E1828  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800E182C  83 C1 00 08 */	lwz r30, 8(r1)
/* 800E1830  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800E1834  7C 08 03 A6 */	mtlr r0
/* 800E1838  38 21 00 10 */	addi r1, r1, 0x10
/* 800E183C  4E 80 00 20 */	blr 
