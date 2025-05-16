
#include "libftprintf.h"

int	ft_putchar_len(char c)
{
	write(1, &c, 1);
	return(1);
}
