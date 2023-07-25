/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-sa <gde-sa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 15:24:42 by gde-sa            #+#    #+#             */
/*   Updated: 2023/07/11 15:33:47 by gde-sa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// #include <stdio.h>

// int	main(void)
// {
// 	int		a;
// 	int		b;
// 	int		*div;
// 	int		*mod;

// 	a = 10;
// 	b = 7;
// 	div = &a;
// 	mod = &b;
// 	ft_div_mod(a, b, div, mod);
// 	printf("div: %i ", *div);
// 	printf("mod: %i", *mod);
// }
