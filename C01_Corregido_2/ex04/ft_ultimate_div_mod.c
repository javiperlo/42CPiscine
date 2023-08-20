/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javperez <javperez@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 18:02:43 by javperez          #+#    #+#             */
/*   Updated: 2023/08/14 21:58:32 by javperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int		resultado_division;
	int		resto_division;

	resto_division = *a % *b;
	resultado_division = *a / *b;
	*a = resultado_division;
	*b = resto_division;
}
