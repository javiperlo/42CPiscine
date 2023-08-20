/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javperez <javperez@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 17:16:35 by javperez          #+#    #+#             */
/*   Updated: 2023/08/16 13:37:35 by javperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (dest[n] != '\0')
	{
		dest[n] = '\0';
		n++;
	}
	return (dest);
}
/*
int main()
{
	char source[] = "javih";
	char destiny[] = "dasdadadadad";
	int number = 3;
	ft_strncpy(destiny, source, number);
	printf("%s", destiny);
}
*/
