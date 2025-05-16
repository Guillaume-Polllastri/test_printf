/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadress.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 10:04:03 by gpollast          #+#    #+#             */
/*   Updated: 2025/05/16 14:56:52 by gpollast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_putadress(void *ptr)
{
	char	res;

	if (*ptr > 15)
		ft_putnbr((*ptr / 16));
	res = (*ptr % 16) + '0';
	ft_putchar(res);
}