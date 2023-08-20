/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javperez <javperez@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 20:41:19 by javperez          #+#    #+#             */
/*   Updated: 2023/08/15 22:06:35 by javperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 97 && str[i] <= 122) || (str[i] >= 65 && str[i] <= 90))
		{
			return (0);
		}
		else
		{
			return (1);
		}
		i ++;
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
	char string[] = "javi";
	int resultado;
	resultado = ft_str_is_alpha(string);
	
	printf("%d", resultado);
}
*/
