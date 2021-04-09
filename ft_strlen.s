global _ft_strlen

section .text

_ft_strlen:		mov		eax, -1
.loop:			add		eax, 1
				cmp		byte [rdi], 0
				add		rdi, 1
				jne		.loop
				ret
