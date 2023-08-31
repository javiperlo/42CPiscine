/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javperez <javperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 10:37:57 by javperez          #+#    #+#             */
/*   Updated: 2023/08/31 17:14:14 by javperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_is_prime(int nb)
{
	int		i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i ++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int		siguiente_primo;

	siguiente_primo = nb;
	while (ft_is_prime(siguiente_primo) == 0)
	{
		siguiente_primo++;
	}
	return (siguiente_primo);
}
/*
int main()
{
	int		num;
	num = 5100;
	printf("%d", ft_find_next_prime(num));
}*/
