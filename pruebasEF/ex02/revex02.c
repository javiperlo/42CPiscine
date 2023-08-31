/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   revex02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javperez <javperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 19:54:38 by javperez          #+#    #+#             */
/*   Updated: 2023/08/31 20:06:22 by javperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_strlen(char *str)
{
    int     i;

    i = 0;
    while (str[i] != '\0')
    {
        i ++;
    }
    return (i);
    
}

char    *ft_rev_print(char *str)
{
    int     i;
    int     len;
    
    i = 0;
    len = ft_strlen(str);
    while (str[i] != '\0')
    {
        i ++;
        write (1, &str[len - i], 1);
    }
    return (0);
}

int main()
{
    char str[] = "hola que tal";

    ft_rev_print (str);
    return (0);
}