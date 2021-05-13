global ft_read
extern  __errno_location
extern ft_strlen
SECTION .text
ft_read:
	mov rax, 0
	syscall
	cmp	rax, 0
	jl error
	mov	rdi, rsi
	call ft_strlen
	ret

error :
	neg		rax			; car le syscall renvoie dans rax errno mais en negatif
	mov		r9, rax		; rdi sert de tampon car apres rax prendera le retour de errno location
	call	__errno_location wrt ..plt	; errno location renvoie un pointeur sur errno
	mov		[rax], r9		; ici rax contient l'adresse de errno donc en faisant ca on met rdi dans errno
	mov		rax, -1			; on met rax à -1 pour renvoyer la bonne valeur d'un appel à write
	ret					; return rax
