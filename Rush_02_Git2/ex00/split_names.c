/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_names.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javperez <javperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 12:15:56 by javperez          #+#    #+#             */
/*   Updated: 2023/08/27 22:07:56 by javperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	split_names(char *input)
{
	int		i;

	i = 0;
	while (input[i] != '\0')
	{
		if (input[i] > 96 && input[i] < 123)
			write(1, &input[i], 1);
		i++;
	}
}
