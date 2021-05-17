global ft_read
extern  __errno_location
extern ft_strlen

SECTION .text
ft_read:
	mov rax, 0		; syscall require putting 0 in rax
	syscall
	cmp	rax, 0		; compare rax to 0
	jl error		; if rax < 0, jump to error label
	ret				; otherwise, return rax which contains syscall return aka nb of byte read


error:
	neg        rax							; rax is set to minus error code to be given to errno (ex : -9 if bad fd)
											; so we put it in positive (-x * -1 = +x)
    mov        rdi, rax       				; give the code to rdi so it is sent to errno
    call        __errno_location  wrt ..plt ; errno location return a pointer on int
    mov        [rax], rdi            		; put the error code (int) at the place pointed by errno location address
    mov        rax, -1                		; rax shall ret -1 in case of error
    ret                        				; return rax
