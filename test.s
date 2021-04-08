bits 64

global _test

section .rodata
		str: db "hello world", 10, 0
		len equ $-str

section .text

_test:
		mov rax, 1
		mov rdi, 0x1
		mov rsi, str
		mov rdx, len
		syscall
		jmp _exit

_exit:
		mov rax, 0x03C
		mov rdi, 0
		syscall
