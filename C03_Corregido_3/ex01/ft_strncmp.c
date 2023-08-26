/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javperez <javperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 15:34:12 by javperez          #+#    #+#             */
/*   Updated: 2023/08/26 12:10:20 by javperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n > 0)
	{
		while (s1[i] != '\0' && s2[i] != '\0' && i < n - 1)
		{
			if (s1[i] != s2[i])
				return (s1[i] - s2[i]);
			i++;
		}
	}
	else
		return (0);
	return (s1[i] - s2[i]);
}
/*
int	main(void)
{
	char	string1[] = "Hola";
	char	string2[] = "HPla";
	int		size = 3;
	int result = ft_strncmp(string1, string2, size);
	printf("%d %d", result, strncmp(string1, string2, size));
	return(0);
}
*/