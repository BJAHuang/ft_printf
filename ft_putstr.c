/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahuang <ahuang@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/22 19:58:02 by ahuang        #+#    #+#                 */
/*   Updated: 2022/07/22 19:58:02 by ahuang        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *x)
{
	int	numbers;

	numbers = 0;
	if (!x)
	{
		ft_putstr("(null)");
		return (6);
	}
	while ((x[numbers] != '\0') && (x))
	{
		write (1, &x[numbers], 1);
		numbers++;
	}
	return (ft_strlen(x));
}