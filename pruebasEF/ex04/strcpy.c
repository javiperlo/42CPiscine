/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javperez <javperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 20:14:43 by javperez          #+#    #+#             */
/*   Updated: 2023/08/31 20:29:33 by javperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] != '\0')
	{
		s2[i] = s1[i];
		i ++;
	}
	return (s2);
}

int	main()
{
	char s1[] = "Javi";
	char s2[] = "Hola";
	printf("La cadena dest antes era:\t %s\n\n", s2);

	ft_strcpy(s1, s2);

	printf("La cadena dest es ahora:\t %s", s2);
}