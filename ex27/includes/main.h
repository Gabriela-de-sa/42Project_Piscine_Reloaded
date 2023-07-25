/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-sa <gde-sa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 15:51:05 by gde-sa            #+#    #+#             */
/*   Updated: 2023/07/24 15:51:10 by gde-sa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H
# define MAIN_H

# include <fcntl.h>
# include <unistd.h>

void	ft_putchar(int channel, char c);
void	ft_putstr(int channel, char *str);
void	ft_display_file(char *filename);

#endif