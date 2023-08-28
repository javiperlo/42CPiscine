/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javperez <javperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 12:19:28 by javperez          #+#    #+#             */
/*   Updated: 2023/08/27 23:17:35 by javperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	two_digits_number(int *num);
void	three_digits_number(int *num);
void	one_digit_number(int *num);
void	four_digits_number(int *num);
void	seven_digits_numbers(int *num);
void	ten_digits(int *num);

struct s_Variables{
	int		i;
	int		con;
	int		temp;
};

void	error(void)
{
	write (1, "Error\n", 6);
}

void	count_digits(int *num)
{
	struct s_Variables		variables;

	variables.temp = *num;
	variables.con = 0;
	if (*num == 0)
		one_digit_number(num);
	while (variables.temp > 0)
	{
		variables.i = variables.temp % 10;
		variables.con++;
		variables.temp = variables.temp / 10;
	}
	if (variables.con == 1)
		one_digit_number(num);
	else if (variables.con == 2)
		two_digits_number(num);
	else if (variables.con == 3)
		three_digits_number(num);
	else if (variables.con > 3 && variables.con < 7)
		four_digits_number(num);
	else if (variables.con > 6 && variables.con < 10)
		seven_digits_numbers(num);
	else if (variables.con == 10)
		ten_digits(num);
}

void	ft_atoi(char *str)
{
	int		res;
	int		i;

	res = 0;
	i = 0;
	while (str[i] != '\0')
	{
			res = res * 10 + str[i] - '0';
			i++;
	}
	if (res < 0)
	{
		error();
		return ;
	}
	count_digits(&res);
}

int	main(int argc, char *argv[])
{
	int		i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] >= 48 && argv[1][i] <= 57)
				i++;
			else
			{
				error();
				return (0);
			}
		}
		ft_atoi(argv[1]);
	}
	else
		error ();
}
