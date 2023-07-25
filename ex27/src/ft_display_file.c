/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-sa <gde-sa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 15:49:35 by gde-sa            #+#    #+#             */
/*   Updated: 2023/07/24 15:49:38 by gde-sa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/main.h"

void	ft_display_file(char *filename)
{
	int		fd;
	int		nbytes;
	char	buff[1];

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return ;
	nbytes = 1;
	while (nbytes)
	{
		nbytes = read(fd, buff, 1);
		if (nbytes == 1)
			ft_putchar(1, buff[0]);
	}
	close(fd);
}
