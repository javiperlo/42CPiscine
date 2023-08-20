/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javperez <javperez@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 23:13:22 by javperez          #+#    #+#             */
/*   Updated: 2023/08/15 23:33:50 by javperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 126))
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
	char string[] = "";
	int resultado;

	resultado = ft_str_is_printable(string);
	printf("%d", resultado);
}
*/
