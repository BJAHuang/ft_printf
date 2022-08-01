/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_hex_convert.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahuang <ahuang@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/22 19:57:35 by ahuang        #+#    #+#                 */
/*   Updated: 2022/07/22 19:57:35 by ahuang        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hex_convert(unsigned int x, int Hex_UpperlowerCase)
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
		length = length + ft_hex_convert(x / 16, Hex_UpperlowerCase);
		length = length + ft_hex_convert(x % 16, Hex_UpperlowerCase);
	}
	if ((x <= 15) && (x >= 0))
		length += ft_putchar(hex[x % 16]);
	return (length);
}
