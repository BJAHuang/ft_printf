#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

//  printf parsing flags
int ft_printf (const char *format, ...);
int check_format(char x, va_list argslist);
int ft_putchar(char x);
int ft_putstr(char *x);
// int ft_putnbr_fd(int x, int fd);
int ft_putnbr(int x);
int ft_unsigned_int(unsigned int x);
size_t	ft_strlen(char *s);

//Printing functions
int ft_unsigned_int(unsigned int x);
int ft_hex_convert(unsigned int x, int Hex_UpperlowerCase);
int ft_hex_voidpointer (unsigned long long x);

#endif