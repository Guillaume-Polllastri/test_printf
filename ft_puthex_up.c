/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_up.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 11:08:34 by gpollast          #+#    #+#             */
/*   Updated: 2025/05/19 11:15:31 by gpollast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_puthex_up(const unsigned long n)
{
	if (n / 16)
		return (ft_puthex_up((n / 16)) + ft_puthex_up(n % 16));
	else if (!(n / 10))
		ft_putchar_len(n + '0');
	else
		ft_putchar_len((char) n - 10 + 'A');
	return (1);
}