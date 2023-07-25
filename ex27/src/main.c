/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-sa <gde-sa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 15:49:56 by gde-sa            #+#    #+#             */
/*   Updated: 2023/07/24 15:50:05 by gde-sa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/main.h"

int	main(int argc, char *argv[])
{
	if (argc == 1)
	{
		ft_putstr(2, "File name missing.\n");
		return (1);
	}
	else if (argc > 2)
	{
		ft_putstr(2, "Too many arguments.\n");
		return (1);
	}
	ft_display_file(argv[1]);
	return (0);
}
