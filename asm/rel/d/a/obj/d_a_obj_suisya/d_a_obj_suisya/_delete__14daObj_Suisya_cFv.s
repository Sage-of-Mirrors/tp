lbl_80CF0234:
/* 80CF0234  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80CF0238  7C 08 02 A6 */	mflr r0
/* 80CF023C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80CF0240  3C 80 80 CF */	lis r4, d_a_obj_suisya__stringBase0@ha /* 0x80CF0544@ha */
/* 80CF0244  38 84 05 44 */	addi r4, r4, d_a_obj_suisya__stringBase0@l /* 0x80CF0544@l */
/* 80CF0248  38 63 05 68 */	addi r3, r3, 0x568
/* 80CF024C  4B 33 CD BD */	bl dComIfG_resDelete__FP30request_of_phase_process_classPCc
/* 80CF0250  38 60 00 01 */	li r3, 1
/* 80CF0254  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80CF0258  7C 08 03 A6 */	mtlr r0
/* 80CF025C  38 21 00 10 */	addi r1, r1, 0x10
/* 80CF0260  4E 80 00 20 */	blr 
