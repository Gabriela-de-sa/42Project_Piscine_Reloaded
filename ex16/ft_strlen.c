/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-sa <gde-sa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 16:16:16 by gde-sa            #+#    #+#             */
/*   Updated: 2023/07/11 16:26:58 by gde-sa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int		count;
	int		i;

	count = 0;
	i = 0;
	while (str[i])
	{
		count++;
		i++;
	}
	return (count);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	printf("%i\n", ft_strlen("gabriela"));
// 	printf("%lu", strlen("gabriela"));
// }
