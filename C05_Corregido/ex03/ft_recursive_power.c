/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javperez <javperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 22:46:15 by javperez          #+#    #+#             */
/*   Updated: 2023/08/31 16:24:55 by javperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int		res;

	res = 1;
	if (power > 0)
	{
		res = nb * ft_recursive_power(nb, power - 1);
	}
	else if (power < 0)
	{
		return (0);
	}
	else if ((nb == 0 && power == 0) || power == 0)
	{
		return (1);
	}
	return (res);
}
/*
int	main(void)
{
	int	num;
	int	power;
	int	res;

	num = 0;
	power = 0;
	res = ft_recursive_power(num, power);
	printf("%d", res);
}*/