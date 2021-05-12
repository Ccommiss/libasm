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

SRCS = *.s

FLAGS = -Wall -Werror -Wextra
OBJS = $(SRCS:.s=.o)
NORME = norminette
CC = nasm -f elf64 -g


# This is a minimal set of ANSI/VT100 color codes
_END=$'\x1b[0m
_BOLD=$'\x1b[1m
_UNDER=$'\x1b[4m
_REV=$'\x1b[7m
_LIGHT=$'\x1b[2m

# Colors
_GREY=$'\x1b[30m
_RED=$'\x1b[31m
_GREEN=$'\x1b[32m
_YELLOW=$'\x1b[33m
_BLUE=$'\x1b[34m
_PURPLE=$'\x1b[35m
_CYAN=$'\x1b[36m
_WHITE=$'\x1b[37m
_LBLUE=$'\x1b[94m
_ORANGE=$'\x1b[38;5;215m
_PINK=$'\x1b[38;5;95m
_GRASS=$'\x1b[38;5;119m
_UNICORN= $'\360\237\246\204
_UNIC=$'🦄
_LETTER = $'💌

WP = `pwd | sed 's!.*/!!'`


all : message $(NAME)
	@printf "$(_BOLD)$(_PINK)%-30s$(_END) $(_GRASS)$(_BOLD)%s$(_END)\n" [$(WP)] "✅	Your $(NAME) is ready."

message :
	@printf "$(_BOLD)$(_PINK)%-30s$(_END) $(_WHITE)$(_LIGHT)%s$(_END)\n" [$(WP)] "Your $(NAME) files are compiling..."

$(NAME): 
	@ar -rc $(NAME) $(OBJS)
	@ranlib $(NAME)

bonus : all $(BONUS) $(OBJS_BONUS)
	@ar -rc $(NAME) $(OBJS_BONUS)
	@ranlib $(NAME)
	@printf "$(_BOLD)$(_PINK)%-30s$(_END) %s\n" [$(NAME)] "Your $(NAME) is ready, bonuses included."

norme:
	@$(NORME) $(SRCS) $(BONUS)

normebonus: norme
	@$(NORME) $(BONUS)

clean:
	@rm -f $(OBJS) $(OBJS_BONUS)
	@printf "$(_BOLD)$(_PINK)%-30s$(_END) $(_LIGHT)%s\n$(_END)" [$(WP)] "Your .o files have been deleted."

fclean: clean
	@rm -f $(NAME)
	@printf "$(_BOLD)$(_PINK)%-30s$(_END) $(_BOLD)%s\n$(_END)" [$(WP)] "🗑️	Your $(NAME) have been deleted. "

re: fclean all

.PHONY: all clean re norme bonus normebonus
