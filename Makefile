# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mecauchy <mecauchy@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/27 11:34:50 by mecauchy          #+#    #+#              #
#    Updated: 2022/12/28 18:15:16 by mecauchy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	ft_printf.c ft_print_exec.c ft_search_c_u.c \
			ft_search.c srcs_hexa.c srcs_nbr.c srcs.c
			
OBJS	=	$(SRCS:.c=.o)

CC		=	cc

CFLAGS	=	-Wall -Wextra -Werror

DEBUG	=	-g3

NAME	=	libftprintf.a

HEADER	=	ft_printf.h

all		:	$(NAME)

$(NAME)	:	$(OBJS)
			ar rc $@ $^
			ranlib $@

main	:	all
			$(CC) main.c libftprintf.a -o main

%.o		:	%.c
			$(CC) $(CFLAGS) -o $@ -c $^

clean	:	
			/bin/rm -rf $(OBJS) main.o

fclean	:	clean
			/bin/rm -rf $(NAME) main

re		:	fclean all
