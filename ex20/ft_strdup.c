/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-sa <gde-sa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 12:06:23 by gde-sa            #+#    #+#             */
/*   Updated: 2023/07/17 12:12:27 by gde-sa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	cont;

	cont = 0;
	while (*str)
	{
		cont += 1;
		str++;
	}
	return (cont + 1);
}

char	*ft_strdup(char *src)
{
	int		result;
	char	*duplicate;
	int		i;

	result = ft_strlen(src);
	if (result == 0)
	{
		return (NULL);
	}
	duplicate = (char *) malloc(result);
	i = 0;
	while (src[i])
	{
		duplicate[i] = src[i];
		i++;
	}
	duplicate[i] = '\0';
	return (duplicate);
}

// #include <string.h>
// #include <stdio.h>

// int	main(void)
// {
// 	char    a[] = "gabriela";
// 	char    b[] = "naruto";

// 	printf("%s", ft_strdup(a));
// 	printf("%s", strdup(b));
// }
