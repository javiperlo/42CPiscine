/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javperez <javperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 18:35:21 by javperez          #+#    #+#             */
/*   Updated: 2023/08/20 20:22:07 by javperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		while (str[i + j] == to_find[j] && str[i + j] != '\0')
			j++;
		if (to_find[j] == '\0')
		{
			return (str + i);
		}
		i ++;
		j = 0;
	}
	if (to_find[j] == '\0')
	{
		return (str);
	}
	return (0);
}

int	main(void)
{
	char	string[] = "hola que tal";
	char	toFind[] = "que";
	
	printf("%s", ft_strstr (string, toFind));
}
