/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putUnbr_len.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 16:45:14 by gpollast          #+#    #+#             */
/*   Updated: 2025/05/16 17:05:39 by gpollast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>

int	ft_putUnbr_len(unsigned int n)
{
	int		len;
	char	res;

	len = 0;
	if (n > 9)
		ft_putUnbr_len((n / 10));
	res = (n % 10) + '0';
	len = len + ft_putchar_len(res);
	return(len);
}