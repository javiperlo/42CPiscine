/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javperez <javperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 22:21:29 by javperez          #+#    #+#             */
/*   Updated: 2023/08/31 18:43:43 by javperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_sqrt(int nb)
{
	int		i;

	i = 1;
	while (i < nb / i)
		i ++;
	if (i * i == nb)
		return (i);
	return (0);
}
/*
int main(void)
{
	int     number;
	int     resultado;

	number = 2;
	resultado = ft_sqrt(number);
	printf("La √ de el número %d, es: %d", number, resultado);
	return (0);
}*/
