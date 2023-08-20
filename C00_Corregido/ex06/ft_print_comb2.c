/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javperez <javperez@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 14:49:24 by javperez          #+#    #+#             */
/*   Updated: 2023/08/15 13:32:12 by javperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	int		num1;
	int		num2;
	char	list_numbers[5];

	num1 = 0;
	while (num1 <= 98)
	{
		num2 = num1 + 1;
		while (num2 <= 99)
		{
			list_numbers[0] = '0' + num1 / 10;
			list_numbers[1] = '0' + num1 % 10;
			list_numbers[2] = ' ';
			list_numbers[3] = '0' + num2 / 10;
			list_numbers[4] = '0' + num2 % 10;
			write(1, &list_numbers, 5);
			if (num1 != 98 || num2 != 99)
			{
				write (1, ", ", 2);
			}
			num2 ++;
		}
		num1 ++;
	}
}
