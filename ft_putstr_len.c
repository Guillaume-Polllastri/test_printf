
#include "libftprintf.h"

int	ft_putstr_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar_len(str[i]);
		i++;
	}
	return(i);
}
