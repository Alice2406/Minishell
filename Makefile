# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aniezgod <aniezgod@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/06 15:29:56 by aniezgod          #+#    #+#              #
#    Updated: 2024/06/03 11:23:34 by aniezgod         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

## ----------------------------------COLORS------------------------------------#

BOLD = \e[1;37m
END = \e[0;37m
UNDER = \e[4;37m
GREY = \e[0;30m
RED = \e[0;31m
GREEN = \e[0;32m
YELLOW = \e[0;33m
BLUE = \e[0;34m
PURPLE = \e[0;35m
CYAN = \e[0;36m
WHITE = \e[0;37m

SRCS = ./srcs/main.c

OBJS = ${SRCS:.c=.o}

NAME = minishell
INCS = -I ./includes -I ./libft/includes
READLINE_FLAGS = -L /usr/lib/x86_64-linux-gnu -lreadline
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
CC = cc

all: ${NAME}

%.o: %.c
	@$(CC) $(CFLAGS) $(INCS) -c $< -o $@

$(NAME): $(OBJS)
			@printf "${WHITE}${BOLD}╔════════════════════════════════════════════════════════════════════════════╗\n"
			@printf "${BOLD}║                              .: COMPILATION :.                             ║\n"
			@printf "${BOLD}╚════════════════════════════════════════════════════════════════════════════╝\n"
			@${MAKE} -C ./libft
			@printf "${BOLD}║                                    ${PURPLE}libft                                   ${WHITE}║\n"
			@$(CC) $(CFLAGS) $(INCS) $(OBJS) -o $(NAME) $(READLINE_FLAGS) libft/libft.a
			@printf "${BOLD}║                                   ${PURPLE}${NAME}                                    ${WHITE}║\n"
			@printf "${BOLD}╚════════════════════════════════════════════════════════════════════════════╝\n"

clean:
			@${RM} ${OBJS} 
			@${MAKE} -C libft clean
			
fclean: clean
			@printf "${BOLD}Entreprise de nettoyage bonjour ?\n"
			@${RM} ${NAME} 
			@${MAKE} -C libft fclean
			@printf "${BOLD}${GREEN}Tout est propre !✨\n"

re: fclean all

.PHONY:		all clean fclean re