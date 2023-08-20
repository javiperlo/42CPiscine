/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javperez <javperez@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 19:27:45 by javperez          #+#    #+#             */
/*   Updated: 2023/08/16 18:29:39 by javperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{	
	char	num;

	if (n >= 0)
	{
		num = 'P';
		write (1, &num, 1);
	}
	else
	{
		num = 'N';
		write (1, &num, 1);
	}
}
