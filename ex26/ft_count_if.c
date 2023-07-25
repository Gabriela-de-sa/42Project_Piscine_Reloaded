/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-sa <gde-sa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 14:07:41 by gde-sa            #+#    #+#             */
/*   Updated: 2023/07/24 12:04:32 by gde-sa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab,	int (*f)(char*))
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (tab[i])
	{
		if (f(tab[i]) == 1)
		{
			count++;
		}
		i++;
	}
	return (count);
}

// int	ft_print(char *n)
// {
// 	if (*n == '1')
// 		return (1);
// 	return (0);
// }

// #include <stdio.h>

// int	main(void)
// {
//     char *array[] = {"1", "2", "1", "7", 0};

// 	printf("%d", ft_count_if(array, ft_print));
// }

/*
int(*f)(char*))

primeiro int é o retorno
f é um ponteiro
o char é o parametro que tem que ser passado
*/
