

#include "libftprintf.h"

int	ft_putnbr_len(int n)
{
	int		len;
	char	res;

	len = 0;
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (0);
	}
	if (n < 0)
	{
		ft_putchar_len('-');
		n *= -1;
	}
	if (n > 9)
		ft_putnbr_len((n / 10));
	res = (n % 10) + '0';
	len += ft_putchar_len(res);
	return(len);
}
