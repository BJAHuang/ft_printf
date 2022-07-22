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

int ft_unsigned_int(unsigned int x)
{
	unsigned int	number;
	int				length;

	number = (unsigned int) x;
	length = 0;
	if ((number <= 9) && (number >= 0))
		length = length + ft_putchar(number + '0');
	if (number > 9)
	{
		length = length + ft_putchar(number / 10);
		length = length + ft_putchar(number % 10);
	}
	return (length);
}
