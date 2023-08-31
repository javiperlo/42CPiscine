/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javperez <javperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 21:31:57 by javperez          #+#    #+#             */
/*   Updated: 2023/08/31 15:53:14 by javperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	unsigned int	res;

	res = 1;
	if (nb > 0)
	{
		res = nb * ft_recursive_factorial (nb - 1);
	}
	if (nb < 0)
	{
		return (0);
	}
	return (res);
}
/*
int main() {
    int num;
	int	res;
	num = 4;

	res = ft_recursive_factorial(num);
    printf("%d", res);
}*/