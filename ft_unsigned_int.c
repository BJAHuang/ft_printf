#include "ft_printf.h"

int ft_unsigned_int(unsigned int x)
{
	unsigned int	number;
	int				length;

	number = (unsigned int) x;
	length = 0;
	if ((number <= 9) && (number >= 0))
		length += ft_putchar(number + '0');
	if (number > 9)
	{
		length += ft_putchar(number / 10);
		length += ft_putchar(number % 10);
	}
	// free (x); // why doesnt anyone recommend free here ??
	return (length);
}
