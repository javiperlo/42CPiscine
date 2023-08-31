/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javperez <javperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 21:53:23 by javperez          #+#    #+#             */
/*   Updated: 2023/08/31 17:04:09 by javperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>

int	ft_is_prime(int nb)
{
	int		i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i ++;
	}
	return (1);
}
/*
int	main(void)
{
	int		nb;
	int		res;

	nb = 997;
	res = ft_is_prime(nb);
	if (res == 1)
	{
		printf("%d Es un numero primo.", nb);
	}
	else
		printf("%d No es un número primo", nb);
}*/