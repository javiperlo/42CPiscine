/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javperez <javperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 12:18:58 by javperez          #+#    #+#             */
/*   Updated: 2023/08/31 01:48:21 by javperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int		p;
	char	c;
	int		i;

	i = argc - 1;
	p = 0;
	while (i > 0)
	{
		p = 0;
		while (argv[i][p] != '\0')
		{
			c = argv[i][p];
			write (1, &c, 1);
			p ++;
		}
		write (1, "\n", 1);
		i --;
	}
	return (0);
}
