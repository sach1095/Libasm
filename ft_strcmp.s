global _ft_strcmp
extern ___error

_ft_strcmp:
.loop:		movzx	r8, byte [rdi]
			movzx	r9, byte [rsi]
			cmp		r8, r9
			jne		.end
			cmp		byte [rdi], 0
			je		.end
			cmp		byte [rsi], 0
			je		.end
			add		rdi, 1
			add		rsi, 1
			jmp		.loop
.end:		mov		rax, r8
			sub		rax, r9
			ret
