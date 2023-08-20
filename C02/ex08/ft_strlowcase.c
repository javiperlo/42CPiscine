/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javperez <javperez@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 12:02:37 by javperez          #+#    #+#             */
/*   Updated: 2023/08/16 16:53:27 by javperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] + 32;
		}
		else
		{
			i++;	
		}
		i++;
	}
	str[i] = '\0';
	return (str);
}

int main()
{
	char string[] = "ADUHADAHDAKJJHDAKD, sdsd232HAKDHADKJJAHDKAJHD";

	ft_strlowcase(string);
	printf("%s", string);
}

