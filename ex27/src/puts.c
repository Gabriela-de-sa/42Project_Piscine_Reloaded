/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   puts.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-sa <gde-sa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 15:50:30 by gde-sa            #+#    #+#             */
/*   Updated: 2023/07/24 15:50:36 by gde-sa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/main.h"

void	ft_putchar(int channel, char c)
{
	write(channel, &c, 1);
}

void	ft_putstr(int channel, char *str)
{
	while (*str != '\0')
	{
		ft_putchar(channel, *str);
		str++;
	}
}
