global _ft_write

section .text

_test:
		mov rax, 0x2000004
		mov rdi, 1
		mov rsi, str
		mov rdx, str.len
		syscall
		ret
