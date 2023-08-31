/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javperez <javperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 20:53:18 by javperez          #+#    #+#             */
/*   Updated: 2023/08/31 18:52:15 by javperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_fibonacci(int index)
{
	int	i;

	if (index < 0)
		return (-1);
	if (index < 2)
		return (index);
	i = ft_fibonacci(index - 2) + ft_fibonacci(index - 1);
	return (i);
}
/*
 int main()
 {
	int index;
	int	res;
	
	index = -3;
	res = ft_fibonacci(index);
	printf("El resultado de la sucesión de fibonacci de %d es: %d",index,  res);
 }*/