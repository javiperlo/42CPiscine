/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javperez <javperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 22:14:51 by javperez          #+#    #+#             */
/*   Updated: 2023/08/31 16:23:15 by javperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int		res;

	res = nb;
	if (power > 1)
	{		
		while (power > 1)
		{
			res = res * nb;
			power--;
		}
	}
	else if ((nb == 0 && power == 0) || power == 0)
	{
		return (1);
	}
	else if (power < 0)
		return (0);
	return (res);
}
/*
int main()
{
	int	number;
	int	potencia;
	int resultado;

	number = 10;
	potencia = 3;
	resultado = ft_iterative_power(number, potencia);
	printf("%d", resultado);
}*/