/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javperez <javperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 20:33:43 by javperez          #+#    #+#             */
/*   Updated: 2023/08/24 16:37:25 by javperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		i ++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int		i;
	unsigned int		j;
	unsigned int		n;

	i = 0;
	while (dest[i] != '\0')
	{
		i ++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i ++;
		j ++;
	}
	n = 0;
	while (dest[n] != '\0' && n < size)
	{
		n ++;
	}
	dest[n] = '\0';
	return (n - 1);
}
/*
int main()
{
    char source[] = "Hola";
	char destino[] = "Javi";
    int resultado;
	unsigned int	size;

	size = 16;
	resultado = ft_strlcat(destino, source, size);
	printf("%d", resultado);
}*/
