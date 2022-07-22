/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahuang <ahuang@student.42.fr>                +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/14 10:23:25 by ahuang        #+#    #+#                 */
/*   Updated: 2022/07/22 18:50:55 by ahuang        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//checks format and parses/converts text based on type Single Char "c"; String "s"; 
//Void * pointer in Hexadecimal "p"; A decimal base 10 and int base 10 "d" + "i", Unsigned base 10 "u", x, X, % and '\0'/nullterminator
int check_format(char x, va_list Parse_Args)
{
	if (x == 'c')
		return (ft_putchar(va_arg(Parse_Args, int)));
	if (x == 's')
		return (ft_putstr(va_arg(Parse_Args, char *)));
	if (x == 'p')
		return (ft_hex_voidpointer(va_arg(Parse_Args, unsigned long long))); //void pointer (hex);
	if (x == 'd' || x == 'i')
		return (ft_putnbr(va_arg(Parse_Args, int)));	// decimal and int;
	if (x == 'u')
		return (ft_unsigned_int(va_arg(Parse_Args, unsigned int))); //unsigned decimal;
	if (x == 'x')
		return (ft_hex_convert(va_arg(Parse_Args, unsigned int), 1));//hex lowercase;
	if (x == 'X')
		return (ft_hex_convert(va_arg(Parse_Args, unsigned int), 0));//hex uppercase;
	if (x == '%')
		return (ft_putchar('%')); //textinput = (textinput + write (1, "%", 1));
	return (0);
}

int ft_printf (const char *format, ...)

{
	int	x;
	int	length;
	va_list arguments; //why char *format_s; deref?
	
	va_start(arguments, format);
	x = 0;
	length = 0;
	while (format[x])
	{
		if (format[x] == '\0') //protection
			return (0); //or (NULL)???
		if (format[x] == '%') //already put in checkformat //removed from checkformat
		{
			length = length + check_format(format[x + 1], arguments);
			x++;
		}
		else 
			length = length + ft_putchar(format[x]);
		x++;
	}	
	va_end(arguments);
	return (length);
}

//cast to farmat_s?

// int main (char )