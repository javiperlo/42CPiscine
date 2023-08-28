/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   excepciones.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javperez <javperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 17:56:13 by javperez          #+#    #+#             */
/*   Updated: 2023/08/27 23:06:51 by javperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	one_digit_number(int *num);
void	two_digits_number(int *num);
void	three_digits_number(int *num);
void	four_digits_number(int *num);
void	seven_digits_numbers(int *num);
char	search_word(char *to_find_str);

struct s_Variables{
	int		div_num;
	int		mod_num;
	char	to_char[11];
	int		i;
};

int	excepciones_two_digits(int *num)
{	
	if (*num > 10 && *num < 20)
		return (1);
	else
		return (0);
}

void	mod_seven_digits(int mod_num)
{
	if (mod_num != 0 && mod_num <= 9)
		one_digit_number(&mod_num);
	else if (mod_num != 0 && mod_num < 100)
		two_digits_number(&mod_num);
	else if (mod_num != 0 && mod_num >= 100 && mod_num < 1000)
		three_digits_number(&mod_num);
	else if (mod_num != 0 && mod_num >= 1000)
		four_digits_number(&mod_num);
}

void	mod_ten_digits(int mod_num)
{
	if (mod_num != 0 && mod_num <= 9)
		one_digit_number(&mod_num);
	else if (mod_num != 0 && mod_num < 100)
		two_digits_number(&mod_num);
	else if (mod_num != 0 && mod_num >= 100 && mod_num < 1000)
		three_digits_number(&mod_num);
	else if (mod_num != 0 && mod_num >= 1000 && mod_num < 1000000)
		four_digits_number(&mod_num);
	else if (mod_num != 0 && mod_num >= 1000000)
		seven_digits_numbers(&mod_num);
}

void	ten_digits(int *num)
{
	struct s_Variables	variable;

	variable.i = 1;
	variable.div_num = *num / 1000000000;
	variable.mod_num = *num % 1000000000;
	variable.to_char[0] = 1 + '0';
	while (variable.i < 10)
	{
		variable.to_char[variable.i] = '0';
		variable.i++;
	}
	variable.to_char[variable.i] = '\0';
	one_digit_number(&variable.div_num);
	write(1, " ", 1);
	search_word(variable.to_char);
	write (1, " ", 1);
	if (variable.mod_num != 0)
		mod_ten_digits(variable.mod_num);
}
