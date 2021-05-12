global ft_strdup
extern malloc
extern ft_strlen
extern ft_strcpy
SECTION .text



ft_strdup :
	mov 	r9, rdi
	call	ft_strlen		
	add		rax, 1
	call	malloc  wrt ..plt
	mov		rdi, r9
	mov		rsi, rdi ; rdi qui est la dest est mis dans rsi qui sera le 2e arg envoye a strcpy
	call	ft_strcpy
	ret						
