/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javperez <javperez@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 21:53:20 by javperez          #+#    #+#             */
/*   Updated: 2023/08/17 18:24:09 by javperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 48 && str[i] <= 57))
		{
			return (0);
		}
		else
		{
			return (1);
		}	
		i++;
	}
	if (str[0] == '\0')
	{
		return (1);
	}
	return (0);
}
/*
int main()
{
	char string[] = "sadad";
	int resultado;
	resultado = ft_str_is_numeric(string);

	printf("%d", resultado);
}
*/
