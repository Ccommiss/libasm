global ft_write
extern  __errno_location
SECTION .text
ft_write:
	mov eax, 1
	syscall
	cmp rax, 0
	jl error
	mov rax, rdx
	ret
error:
	call	__errno_location wrt ..plt
	ret
