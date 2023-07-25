/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-sa <gde-sa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 12:09:37 by gde-sa            #+#    #+#             */
/*   Updated: 2023/07/17 12:12:14 by gde-sa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(int min, int max)
{
	int		count;
	int		a;

	count = 0;
	a = min;
	while (a <= max)
	{
		count++;
		a++;
	}
	return (count);
}

int	*ft_range(int min, int max)
{
	int		*prt;
	int		*array;
	int		i;

	prt = NULL;
	if (min >= max)
		return (prt);
	array = malloc(sizeof(int) * ft_strlen(min, max));
	i = 0;
	while (min < max)
	{
		array[i] = min;
		min++;
		i++;
	}
	array[i] = '\0';
	return (array);
}

// int	main(void)
// {
// 	int		min;
// 	int		max;

// 	min = 2;
// 	max = 12;
// 	ft_range(min, max);
// }
