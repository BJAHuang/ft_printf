#include "ft_printf.h"

int ft_putchar(char x)
{
    write(1, &x, 1);
    return (1);
}