/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javperez <javperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 20:39:31 by javperez          #+#    #+#             */
/*   Updated: 2023/08/26 23:05:04 by javperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int		result;
	int		sign;
	int		sign_count;

	result = 0;
	sign_count = 0;
	sign = 0;
	while (*str == ' ' || *str == '\t' || *str == '\r')
		str ++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign_count ++;
		str ++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str ++;
	}
	if (sign_count % 2 != 0)
		sign = -1;
	return (result * sign);
}
int main()
{
	char str[] = "--+---+--1 234ab567";
	int		val;

	val = ft_atoi(str);
	printf("%d", val);
	return (0);
}