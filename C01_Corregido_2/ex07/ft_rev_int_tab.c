/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javperez <javperez@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 14:02:54 by javperez          #+#    #+#             */
/*   Updated: 2023/08/14 21:56:42 by javperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int		i;
	int		temp_array;

	i = 0;
	while (i < size / 2)
	{
		temp_array = tab[i];
		tab [i] = tab [size - i - 1];
		tab[size - i - 1] = temp_array;
		i++;
	}
}
