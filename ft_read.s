global ft_read
extern ft_strlen
SECTION .text
ft_read:
	mov eax, 0
	syscall
	mov	rdi, rsi
	call ft_strlen
	ret
