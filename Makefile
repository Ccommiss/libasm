# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ccommiss <ccommiss@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/16 15:08:11 by ccommiss          #+#    #+#              #
#    Updated: 2021/03/17 18:06:29 by ccommiss         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libasm.a

SRCS = ft_read.s \
	ft_strcmp.s \
	ft_strcpy.s \
	ft_strlen.s \
	ft_read.s \
	ft_write.s \
	ft_strdup.s

SRCS_C = main.c

FLAGS = -Wall -Werror -Wextra
NASM = nasm -f elf64 -g
OBJS = $(SRCS:.s=.o)
NORME = norminette


# This is a minimal set of ANSI/VT100 color codes
_END=$'\e[0m\e
_BOLD=$'\e[1m\e
_UNDER=$'\e[4m\e
_REV=$'\e[7m\e
_LIGHT=$'\e[2m\e

# Colors
_GREY=$'\e[30m\e
_RED=$'\e[31m\e
_GREEN=$'\e[32m\e
_YELLOW=$'\e[33m\e
_BLUE=$'\e[34m\e
_PURPLE=$'\e[35m\e
_CYAN=$'\e[36m\e
_WHITE=$'\e[37m\e
_LBLUE=$'\e[94m\e
_ORANGE=$'\e[38;5;215m\e
_PINK=$'\e[38;5;95m\e
_GRASS=$'\e[38;5;119m\e
_UNIC=$'🦄
_LETTER = $'💌

WP = `pwd | sed 's!.*/!!'`


all : message $(NAME)
	@printf "$(_BOLD)$(_PINK)%-30s$(_END) $(_GRASS)$(_BOLD)%s$(_END)\n" [$(WP)] "YYour $(NAME) is ready."

message :
	@printf "$(_BOLD)$(_PINK)%-30s$(_END) $(_WHITE)$(_LIGHT)%s$(_END)\n" [$(WP)] "YYour $(NAME) files are compiling..."

%.o: %.s
	$(NASM) $< -o $@

$(NAME): $(OBJS)
	@ar -rc $(NAME) $(OBJS)
	@ranlib $(NAME)


test: all
	gcc $(SRCS_C) $(NAME)
	@printf "Launching test..."
	@sleep 3
	./a.out

clean:
	@rm -f $(OBJS)
	@printf "$(_BOLD)$(_PINK)%-30s$(_END) $(_LIGHT)%s\n$(_END)" [$(WP)] "YYour .o files have been deleted."

fclean: clean
	@rm -f $(NAME)
	@printf "$(_BOLD)$(_PINK)%-30s$(_END) $(_BOLD)%s\n$(_END)" "[$(WP)]" "YYour $(NAME) have been deleted."

re: fclean all

.PHONY: all clean re test
