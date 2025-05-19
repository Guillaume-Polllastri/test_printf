/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 16:57:46 by gpollast          #+#    #+#             */
/*   Updated: 2025/05/19 11:09:20 by gpollast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_printf(const char *str, ...);
int 	ft_putchar_len(char c);
int     ft_putstr_len(char *str);
int     ft_putnbr_len(int n);
int     ft_putadress(void *ptr);
int     ft_putUnbr_len(unsigned int i);
int     ft_puthex_low(const unsigned long n);
int     ft_puthex_up(const unsigned long n);

#endif
