#include "ft_printf.h"

size_t	ft_strlen(char *s) //no constant needed
{
	size_t x;

	x = 0;
	while (s[x])// same as while (s[x] != '\0')
		x++;
	return (x);
}
