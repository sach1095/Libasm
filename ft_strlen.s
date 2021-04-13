global _ft_strlen

section .text

_ft_strlen:		mov		rax, -1
.loop:			add		rax, 1
				add		rdi, 1
				cmp		byte [rdi - 1], 0
				jne		.loop
				ret
