CC = gcc

CFLAGS = -Wall -Werror -Wextra

SOURCEFILES = 	ft_printf.c \
	ft_putchar.c \
	ft_putnbr.c \
	ft_putstr.c \
	ft_strlen.c \
	ft_hex_convert.c \
	ft_hex_voidpointer.c \
	ft_putnbr_unsigned_int.c

OBJS = $(SOURCEFILES:.c=.o)

NAME_LIBFILE = libftprintf.a

all:$(NAME_LIBFILE)

$(NAME_LIBFILE): $(OBJS)
	ar rcs $(NAME_LIBFILE) $(OBJS)
#replace create sort 

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME_LIBFILE)

re: fclean all

.PHONY: all clean fclean re
