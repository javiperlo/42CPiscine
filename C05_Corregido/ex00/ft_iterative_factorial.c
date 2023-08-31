/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javperez <javperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 21:04:20 by javperez          #+#    #+#             */
/*   Updated: 2023/08/31 15:50:43 by javperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{	
	unsigned int		res;

	res = 1;
	while (nb > 1)
	{
		res = res * nb;
		nb -= 1;
	}
	if (nb < 0)
	{
		return (0);
	}
	return (res);
}
/*
int main()
{
	int n;
	int res;
	
	n = 10;
	res = ft_iterative_factorial(n);
	printf("%d", res);
}*/