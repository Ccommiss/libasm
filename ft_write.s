global ft_write
SECTION .text
ft_write:
	mov eax, 1
	syscall
	mov rax, rdx
	ret
