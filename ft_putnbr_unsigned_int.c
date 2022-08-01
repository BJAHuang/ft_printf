/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_unsigned_int.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahuang <ahuang@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/22 19:58:17 by ahuang        #+#    #+#                 */
/*   Updated: 2022/07/22 19:58:17 by ahuang        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_unsigned_int(unsigned int x)
{
	unsigned int	number;
	int				length;

	number = x;
	length = 0;
	if (number > 9)
	{
		length += ft_putnbr_unsigned_int(number / 10);
		length += ft_putnbr_unsigned_int(number % 10);
	}
	if ((number <= 9) && (number >= 0))
		length += ft_putchar(number + '0');
	return (length);
}
