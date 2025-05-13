/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 15:56:09 by gpollast          #+#    #+#             */
/*   Updated: 2025/05/13 16:52:33 by gpollast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_printf(const char *p_conv, char *str)
{
	char	*conv_str;
	char	*tmp;
	char	a;

	conv_str = (char *) ft_calloc(10, sizeof(char));
	conv_str = ft_memcpy(conv_str, "cspdiuxX%", 9);
	tmp = ft_strchr(p_conv, '%');
	if (!tmp)
		return (0);
	a = *(tmp + 1);
	if (!ft_strchr(conv_str, a))
		return (0);
	if (a == 'c')
		ft_putchar_fd(*str, 1);
	if (a == 's')
		ft_putstr_fd(str, 1);
	/*if (a == 'p')
	if (a == 'd')
	if (a == 'i')
	if (a == 'u')
	if (a == 'x')
	if (a == 'X')
	if (a == '%')*/
	return (0);
}
