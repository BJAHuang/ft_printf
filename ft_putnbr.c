#include "ft_printf.h"

//putnbr method
int ft_putnbr(int x)
{
	long long	number;
	int			length;

	number = (long long) x; //cast x to Long datatype
	length = 0;
	// if (number == -2147283648) //Long doesnt need this?
	// {
	// 	ft_putchar('-');
	// 	ft_putchar('2');
	// 	number = 2147483648;
	// }
	if (number < 0)
	{
		ft_putchar('-'); 		// length = length + ft_putchar('-');
		number = number * -1;
	}
	if (number > 9)
	{
		length += ft_putnbr(number / 10);
		length += ft_putnbr(number % 10);
	}
	if ((number <= 9) && (number >=0))
		length += ft_putchar(number + '0');
	return (length);
}