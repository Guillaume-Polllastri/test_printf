/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 16:56:03 by gpollast          #+#    #+#             */
/*   Updated: 2025/05/16 16:24:51 by gpollast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libftprintf.h"
#include <stdio.h>

int	main(void)
{
	ft_printf("%d\n", ft_printf("Resulat s : %r%s %s\n", "toto", "tata"));
	printf("%d\n", printf("Resulat s : %r%s %s\n", "toto", "tata"));
	ft_printf("%d\n", ft_printf("Resultat c : %c\n", 'a'));
}
