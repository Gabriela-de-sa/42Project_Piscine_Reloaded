/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-sa <gde-sa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 12:51:57 by gde-sa            #+#    #+#             */
/*   Updated: 2023/07/11 12:56:45 by gde-sa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a);

void	ft_print_numbers(void)
{
	char	number;

	number = '0';
	while (number <= '9')
	{
		ft_putchar(number);
		number++;
	}
}
