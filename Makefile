SRCS	=	ft_printf.c ft_print_exec.c ft_putnbr_base_p.c ft_putnbr_base_xx.c \
 ft_putnbr_base_x.c ft_putnbr_u.c ft_search_s.c ft_search_p.c ft_search_d_i.c \
 ft_search_xx.c ft_search_x.c ft_search_c.c ft_search_u.c ft_putchar.c \
  ft_putnbr.c ft_putstr.c

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
