/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-sa <gde-sa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 16:40:34 by gde-sa            #+#    #+#             */
/*   Updated: 2023/07/12 10:52:21 by gde-sa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int		i;

	i = 0;
	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0' && s2[i] == '\0')
		{
			return (0);
		}
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	a[] = "gabriela";
// 	char	b[] = "gabriel";
// 	char	c[] = "gabriela";
// 	char	d[] = "gabriel";

// 	printf("%d",ft_strcmp(a, b));
// 	printf("\n%d",strcmp(c, d));
// }
