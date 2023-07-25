/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-sa <gde-sa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 12:09:05 by gde-sa            #+#    #+#             */
/*   Updated: 2023/07/24 12:54:45 by gde-sa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

void	ft_print(int argc, char*argv[])
{
	int		i;

	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i++;
	}
}

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

int	main(int argc, char *argv[])
{
	int		i;
	int		d;
	char	*temp;

	i = 1;
	while (i < argc)
	{
		d = 1;
		while (d < argc - 1)
		{
			if (ft_strcmp(argv[d], argv[d + 1]) > 0)
			{
				temp = argv[d];
				argv[d] = argv[d + 1];
				argv[d + 1] = temp;
			}
			d++;
		}
		i++;
	}
	ft_print(argc, argv);
}
