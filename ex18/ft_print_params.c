/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-sa <gde-sa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 12:03:53 by gde-sa            #+#    #+#             */
/*   Updated: 2023/07/17 15:44:40 by gde-sa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a);

int	main(int argc, char *argv[])
{
	int		i;
	int		d;

	i = 1;
	while (i < argc)
	{
		d = 0;
		while (argv[i][d])
		{
			ft_putchar(argv[i][d]);
			d++;
		}
		i++;
		ft_putchar('\n');
	}
}
