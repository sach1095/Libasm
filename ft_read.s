global _ft_read
extern ___error

section .text

_ft_read:
		mov	rax, 0x2000003
		syscall
		jc	.error
		mov rax, 1
		ret

.error:	mov rdi, rax
		push rdi
		call ___error
		pop rdi
		mov [rax], rdi
		mov rax, -1
		ret
