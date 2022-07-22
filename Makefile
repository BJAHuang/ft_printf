# CC = gcc

# CFLAGS = -Wall -Werror -Wextra

# SOURCEFILES = 	ft_printf.c \
# 	ft_putchar.c \
# 	ft_putnbr.c \
# 	ft_putstr.c \
# 	ft_strlen.c \
# 	ft_hex_convert.c \
# 	ft_hex_voidpointer.c \
# 	ft_unsigned_int.c

# OBJS = $(SOURCEFILES: .c-.o)

# NAME_LIBFILE = libftprintf.a

# all:$(NAME_LIBFILE)

# $(NAME_LIBFILE): $(OBJS)
# 	ar rcs $(NAME_LIBFILE) $(OBJS)
# #replace create sort 

# clean:
# 	rm -f $(OBJS)

# fclean: clean
# 	rm -f *.all

# re: fclean all

# .PHONY: all clean fclean re





SRC = ft_printf.c \
	ft_putchar.c \
	ft_putnbr.c \
	ft_putstr.c \
	ft_strlen.c \
	ft_hex_convert.c \
	ft_hex_voidpointer.c \
	ft_unsigned_int.c

OBJ = $(SRC:.c=.o)

NAME = libftprintf.a

all: $(NAME)

$(NAME): $(OBJ)
		@$(MAKE)
		@ar rcs $(NAME) $(OBJ)

%.o: %.c
		gcc -Wall -Werror -Wextra -c $< -o $@

clean:
		@$(MAKE) clean
		@rm -rf $(OBJ)

fclean: clean
		@$(MAKE) fclean
		@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re