#include "ft_printf.h"

int ft_putstr(char *x)
{
	int numbers; //number to return and display in the terminal
	numbers = 0;

	if (!x) //when not x condition
	{
		// return ; //removed in favor of ft_putstr
		ft_putstr("[NULL]"); //when error return this
		return (6); //
	}
	while ((x[numbers] != '\0') && (x))
	{
		write (1, &x[numbers], 1);
		numbers++;
	}
	return (ft_strlen(x));
}