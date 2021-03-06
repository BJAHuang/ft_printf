/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahuang <ahuang@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/22 19:58:08 by ahuang        #+#    #+#                 */
/*   Updated: 2022/07/22 19:58:08 by ahuang        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_strlen(char *s)
{
	size_t	x;

	x = 0;
	while (s[x])
		x++;
	return (x);
}
