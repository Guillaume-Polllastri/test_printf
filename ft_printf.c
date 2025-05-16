/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 15:56:09 by gpollast          #+#    #+#             */
/*   Updated: 2025/05/16 18:11:43 by gpollast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libftprintf.h"

int	convert(char a, va_list ap)
{
	if (a == 'c')
		return(ft_putchar_len((char) va_arg(ap, int)));
	if (a == 's')
		return(ft_putstr_len(va_arg(ap, char *)));
	if (a == 'p')
		return(ft_putadress(va_arg(ap, void *)));
	if (a == 'd' || a == 'i')
		return(ft_putnbr_len((int) va_arg(ap, int)));
	/*if (a == 'u')
	if (a == 'x')
	if (a == 'X')*/
	if (a == '%')
		return(ft_putchar_len('%'));
	return(0);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	ap;
	int		len;
	char	conv_str[10];

	ft_memcpy(conv_str, "cspdiuxX%", 9);
	i = 0;
	len = 0;
	va_start(ap, str);
	while (str[i])
	{
		if (str[i] == '%' && ft_strchr(conv_str, str[i +1]))
		{
			len += convert(str[i + 1], ap);
			i++;
		}
		else
		{
			ft_putchar_len(str[i]);
			len++;
		}
		i++;
	}
	va_end(ap);
	return (len);
}
