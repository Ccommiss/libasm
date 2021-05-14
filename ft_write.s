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
	neg        rax            ; rax is set to minus error code to be given to errno
    mov        rdi, rax       ; give the code to rdi so it is sent to errno
    call        __errno_location  wrt ..plt    ; errno location puts
    mov        [rax], rdi            ; put the error code at the place pointed by errnolocation address
    mov        rax, -1                ; rax = -1
    ret                        ; return rax
