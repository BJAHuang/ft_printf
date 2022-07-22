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

int	ft_hex_voidpointer(unsigned long long x)
{
	int	length;

	length = 0;
	length += ft_putstr("0x");
	length += ft_hex_convert(x, 1);
	return (length);
}