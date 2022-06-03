# include "stdio.h"

void	*ft_calloc(int count, int size)
{
	void			*ptr;
	int			i;
	int			len;
	unsigned char	*b_uc;
	unsigned char	c;

	ptr = malloc(count * size);
	if (!(ptr))
		return (NULL);
	i = 0;
	len = count * size;
	b_uc = (unsigned char *)ptr;
	c = 0;
	while (i < len)
	{
		b_uc[i] = c;
		i++;
	}
	return (ptr);
}

int	number_of_digits(long long nbr, int base)
{
	int	i;

	i = 0;
	if (nbr < 0)
	{
		nbr = nbr * -1;
		i++;
	}
	while (nbr > 0)
	{
		nbr /= base;
		i++;
	}
	return (i);
}

int ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strdup(const char *str)
{
	int	i;
	char	*dup;

	i = 0;
	dup = malloc((ft_strlen(str) + 1) * sizeof(char));
	if (!(dup))
		return (NULL);
	while (str[i])
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

char *ah_itoa_base(long long nbr, int base)
{
    int     number_of_digits;
    char    *output_str;

    number_of_digits = number_of_digits(nbr, base);
    output_str = ft_calloc(number_of_digits + 1, sizeof(char));
    char_set = ft_strdup("0123456789abcdef");
    if (!output_str || !char_set)
        return (NULL);
    

    
    

    return ;
}

int main(void)
{
    int nbr;
    int base;
    char *output;

    nbr = 123;
    base = 10;

    output = ah_itoa_base(nbr, base);
    printf("%s", output);
    printf("\n");
    return (0);
}