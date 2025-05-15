/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 15:56:09 by gpollast          #+#    #+#             */
/*   Updated: 2025/05/15 11:53:18 by gpollast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libftprintf.h"

void	convert(char a, va_list ap)
{
	if (a == 'c')
		return(ft_putchar((char) va_arg(ap, int)));
	if (a == 's')
		return(ft_putstr(va_arg(ap, char *)));
	//if (a == 'p')
	if (a == 'd')
		return(ft_putnbr( (int) va_arg(ap, int)));
	/*if (a == 'i')
	if (a == 'u')
	if (a == 'x')
	if (a == 'X')
	if (a == '%')*/
}

int	ft_printf(const char *str, ...)
{
	char	*conv_str;
	int		i;
	char	a;
	va_list	ap;  

	conv_str = (char *) ft_calloc(10, sizeof(char));
	conv_str = ft_memcpy(conv_str, "cspdiuxX%", 9);
	i = 0;
	va_start(ap, str);
	while (str[i])
	{
		a = *ft_strchr(conv_str, str[i + 1]);
		if (str[i] == '%' && a)
		{
			convert(a, ap);
			i++;
		}
		else
		{
			ft_putchar(str[i]);
			i++;
		}
	}
	va_end(ap);
	return (0);
}
