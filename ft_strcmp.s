global ft_strcmp
SECTION .text
ft_strcmp :
	cmp byte [rdi], 0
	je finishrdi
	cmp byte [rsi], 0
	je finishrsi
	movzx ax, [rdi]
	movzx bx, [rsi]
	cmp ax, bx
	jne notequ
	inc rdi
	inc rsi
	jmp ft_strcmp
finishrdi :
	cmp byte [rsi], 0 ;;si les deux = 0, alors les chaines sont pareilles
	je equal
	movzx rbx, byte[rdi]
	movzx rax, byte[rsi]
	sub rbx, rax
	mov rax, rbx
	ret
finishrsi :
	cmp byte [rdi], 0 ;;si les deux = 0, alors les chaines sont pareilles
	je equal
	movzx rbx, byte[rdi]
	movzx rax, byte[rsi]
	sub rbx, rax
	mov rax, rbx
	ret
equal :
	mov rax, 0
 	ret
notequ :
	cmp ax, bx
	jg finishrsi
	jl finishrdi
