	.file	"main.c"
	.intel_syntax noprefix
# GNU C17 (GCC) version 11.2.1 20220127 (Red Hat 11.2.1-9) (x86_64-redhat-linux)
#	compiled by GNU C version 11.2.1 20220127 (Red Hat 11.2.1-9), GMP version 6.2.0, MPFR version 4.1.0-p13, MPC version 1.2.1, isl version none
# GGC heuristics: --param ggc-min-expand=100 --param ggc-min-heapsize=131072
# options passed: -masm=intel -mtune=generic -march=x86-64 -Og
	.text
	.section	.rodata.str1.1,"aMS",@progbits,1
.LC0:
	.string	"Holberton School"
	.text
	.globl	main
	.type	main, @function
main:
.LFB11:
	.cfi_startproc
	sub	rsp, 8	#,
	.cfi_def_cfa_offset 16
# main.c:10: 	printf("Holberton School");
	mov	edi, OFFSET FLAT:.LC0	#,
	mov	eax, 0	#,
	call	printf	#
# main.c:12: }
	mov	eax, 0	#,
	add	rsp, 8	#,
	.cfi_def_cfa_offset 8
	ret	
	.cfi_endproc
.LFE11:
	.size	main, .-main
	.ident	"GCC: (GNU) 11.2.1 20220127 (Red Hat 11.2.1-9)"
	.section	.note.GNU-stack,"",@progbits
