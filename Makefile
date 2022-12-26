SRCS	=	ft_printf.c ft_print_exec.c

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

%.o		:	%.c $(HEADER)
			$(CC) $(CFLAGS) $(DEBUG) -o $@ -c $^

clean	:	
			/bin/rm -rf $(OBJS)

fclean	:	clean
			bin/rm -rf $(NAME)

re		:	fclean all
