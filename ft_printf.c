/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 15:56:09 by gpollast          #+#    #+#             */
/*   Updated: 2025/05/14 11:36:21 by gpollast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libftprintf.h"

void	convert(char a, va_list arg)
{
	if (a == 'c')
		ft_putchar(arg);
	if (a == 's')
		ft_putstr(arg);
	/*if (a == 'p')
	if (a == 'd')
	if (a == 'i')
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
	va_list	arg;

	conv_str = (char *) ft_calloc(10, sizeof(char));
	conv_str = ft_memcpy(conv_str, "cspdiuxX%", 9);
	i = 0;
	va_start(arg, str);
	while (str[i])
	{
		a = *ft_strchr(conv_str, str[i + 1]);
		if (str[i] == '%' && a)
			convert(a, arg);
		if (str[i] == ft_isascii)
			ft_putchar(str[i]);
		i++;
	}
	va_end(arg);
	return (0);
}
