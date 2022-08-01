/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahuang <ahuang@student.42.fr>                +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/14 10:23:25 by ahuang        #+#    #+#                 */
/*   Updated: 2022/08/01 17:09:02 by ahuang        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	check_format(char x, va_list Parse_Args)
{
	if (x == 'c')
		return (ft_putchar(va_arg(Parse_Args, int)));
	if (x == 's')
		return (ft_putstr(va_arg(Parse_Args, char *)));
	if (x == 'p')
		return (ft_hex_voidpointer(va_arg(Parse_Args, unsigned long long)));
	if (x == 'd' || x == 'i')
		return (ft_putnbr(va_arg(Parse_Args, int)));
	if (x == 'u')
		return (ft_putnbr_unsigned_int(va_arg(Parse_Args, unsigned int)));
	if (x == 'x')
		return (ft_hex_convert(va_arg(Parse_Args, unsigned int), 1));
	if (x == 'X')
		return (ft_hex_convert(va_arg(Parse_Args, unsigned int), 0));
	if (x == '%')
		return (ft_putchar('%'));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	int		x;
	int		length;
	va_list	arguments;

	va_start(arguments, format);
	x = 0;
	length = 0;
	while (format[x])
	{
		if (format[x] == '\0')
			return (0);
		if (format[x] == '%')
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
