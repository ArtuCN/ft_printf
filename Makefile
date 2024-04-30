# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aconti <aconti@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/06 15:10:53 by aconti            #+#    #+#              #
#    Updated: 2023/11/13 15:33:38 by aconti           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
MANDATORY_SRCS = ft_hexadecimal.c ft_printf.c ft_putchar.c ft_putstr.c ft_putadrs.c ft_putuns.c ft_itoa.c ft_itoau.c ft_strlen.c ft_putnbr.c
MANDATORY_OBJS = ${MANDATORY_SRCS:.c=.o}

HEADER = ft_printf.h

all: ${NAME}

${NAME}: ${MANDATORY_OBJS}
	ar rc ${NAME} ${MANDATORY_OBJS}
	ranlib ${NAME}

%.o: %.c ${HEADER}
	cc -Wall -Wextra -Werror -c $< -o $@

clean:
	rm -f ${MANDATORY_OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re bonus

