/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahuang <ahuang@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/22 19:57:56 by ahuang        #+#    #+#                 */
/*   Updated: 2022/07/22 19:57:56 by ahuang        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int x)
{
	long long	number;
	int			length;

	number = (long long) x;
	length = 0;
	if (number < 0)
	{
		length = length + ft_putchar('-');
		number = number * -1;
	}
	if (number > 9)
	{
		length += ft_putnbr(number / 10);
		length += ft_putnbr(number % 10);
	}
	if ((number <= 9) && (number >= 0))
		length += ft_putchar(number + '0');
	return (length);
}
