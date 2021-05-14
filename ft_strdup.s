
global ft_strdup
extern malloc
extern ft_strlen
extern ft_strcpy

SECTION .text

ft_strdup :
	mov 	rbx, rdi ; on save val de rdi
	call	ft_strlen ; recup la size voulue
	add		rax, 1 ; pour le /0
	call	malloc  wrt ..plt ;; mets dans rax
	mov		rdi, rax ; on met chaine malloc dans rdi pour lenvoyer a strcpy
	mov		rsi, rbx ; rdi saved dans r9 qui est la dest est mis dans rsi qui sera le 2e arg envoye a strcpy
	call	ft_strcpy
	ret
