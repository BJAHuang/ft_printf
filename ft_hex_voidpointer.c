#include "ft_printf.h"

int ft_hex_voidpointer (unsigned long long x)
{
    int length;
    
    length = 0;
    length += ft_putstr("0x"); //write with ft_putstr
    length += ft_hex_convert(x, 1); //use hex converted to 
    // free (x);
    return(length);
}