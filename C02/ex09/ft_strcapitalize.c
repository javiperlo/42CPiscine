/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javperez <javperez@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 12:14:43 by javperez          #+#    #+#             */
/*   Updated: 2023/08/16 20:28:15 by javperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

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

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		f;

	i = 0;
	f = 1;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			if (f == 1)
			{
				str[i] = str[i] - 32;
				f = 0;
			}
		}
		else if (str[i] >= 48 && str[i] <= 57)
			f = 0;
		else
			f = 1;
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
int main()
{
	char frase[] = "salut, comMent tu vas ? 42mots quarante-deux; cinquante+et+un";

	printf("La frase origninal es: %s", frase);
	ft_strcapitalize(frase);
	printf ("\n\n%s", frase);
}
*/
