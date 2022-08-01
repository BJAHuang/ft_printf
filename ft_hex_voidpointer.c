/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_hex_voidpointer.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahuang <ahuang@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/22 19:57:43 by ahuang        #+#    #+#                 */
/*   Updated: 2022/07/22 19:57:43 by ahuang        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_p_hex_convert(unsigned long long x, int Hex_UpperlowerCase)
{
	char	*hex;
	int		length;

	length = 0;
	if (Hex_UpperlowerCase == 0)
	{
		hex = "0123456789ABCDEF";
	}
	else if (Hex_UpperlowerCase == 1)
	{
		hex = "0123456789abcdef";
	}
	if (x > 15)
	{
		length = length + ft_p_hex_convert(x / 16, Hex_UpperlowerCase);
		length = length + ft_p_hex_convert(x % 16, Hex_UpperlowerCase);
	}
	if ((x <= 15) && (x >= 0))
		length += ft_putchar(hex[x % 16]);
	return (length);
}

int	ft_hex_voidpointer(unsigned long long x)
{
	int	length;

	length = 0;
	length += write(1, "0x", 2);
	length += ft_p_hex_convert(x, 1);
	return (length);
}