/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 16:56:03 by gpollast          #+#    #+#             */
/*   Updated: 2025/05/19 11:51:30 by gpollast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libftprintf.h"
#include <stdio.h>

int	main(void)
{
	char	toto[10];

	ft_memcpy(toto, "cspdiuxX%", 9);
	ft_printf("%c", '\n');
	// %c
	ft_printf("%d\n", ft_printf("Resultat c : %c\n", 'a'));
	ft_printf("%c", '\n');
	// %s et %%
	ft_printf("%d\n", ft_printf("Resulat s : %% %r%s %s\n", "toto", "tata"));
	printf("%d\n", printf("Resulat s : %% %r%s %s\n", "toto", "tata"));\
	ft_printf("%c", '\n');
	// %p
	ft_printf("%d\n", ft_printf("Resultat p : %p\n", toto));
	printf("%d\n", printf("Resultat p : %p\n", toto));
	ft_printf("%c", '\n');
	// %d et %i
	ft_printf("%d\n", ft_printf("Resultat d : %d\n", 1));
	ft_printf("%d\n", ft_printf("Resultat i : %i\n", 1));
	ft_printf("%c", '\n');
	// %u
	ft_printf("%d\n", ft_printf("Resultat u : %u\n", 1));
	printf("%d\n", printf("Resultat u : %u\n", 1));
	ft_printf("%c", '\n');
	// %x
	ft_printf("%d\n", ft_printf("Resultat x : %x\n", 42));
	printf("%d\n", printf("Resultat x : %x\n", 42));
	ft_printf("%c", '\n');
	// %X
	ft_printf("%d\n", ft_printf("Resultat X : %X\n", 42));
	printf("%d\n", printf("Resultat X : %X\n", 42));
	ft_printf("%c", '\n');
}
