/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-sa <gde-sa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 12:58:20 by gde-sa            #+#    #+#             */
/*   Updated: 2023/07/18 17:06:46 by gde-sa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int		fac;
	int		result;

	fac = 1;
	result = 1;
	if ((nb < 0) || (nb >= 13))
	{
		return (0);
	}
	if (nb == 0 || nb == 1)
	{
		return (1);
	}
	while (fac <= nb)
	{
		result *= fac;
		fac++;
	}
	return (result);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d", ft_iterative_factorial(13));
// }
