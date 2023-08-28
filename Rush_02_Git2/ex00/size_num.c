/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   size_num.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javperez <javperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 14:31:18 by javperez          #+#    #+#             */
/*   Updated: 2023/08/27 23:19:17 by javperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

struct s_Variables{
	int		div_num;
	int		mod_num;
	char	to_char[11];
	int		i;
};

char	search_word(char *to_find_str);
int		excepciones_two_digits(int *num);
void	mod_seven_digits(int mod_num);

void	one_digit_number(int *num)
{
	char	to_char[10];

	to_char[0] = *num + '0';
	to_char[1] = '\0';
	search_word(to_char);
}

void	two_digits_number(int *num)
{
	struct s_Variables	variable;

	variable.i = 0;
	variable.div_num = *num / 10;
	variable.mod_num = *num % 10;
	if (excepciones_two_digits(num) == 1)
	{	
		variable.to_char[0] = variable.div_num + '0';
		variable.to_char[1] = variable.mod_num + '0';
		variable.to_char[2] = '\0';
		write (1, " ", 1);
		search_word(variable.to_char);
		return ;
	}
	variable.to_char[0] = variable.div_num + '0';
	variable.to_char[1] = 0 + '0';
	variable.to_char[2] = '\0';
	write(1, " ", 1);
	search_word(variable.to_char);
	if (variable.mod_num != 0)
	{
		write(1, "-", 1);
		one_digit_number(&variable.mod_num);
	}	
}

void	three_digits_number(int *num)
{
	struct s_Variables	variable;

	variable.i = 1;
	variable.div_num = *num / 100;
	variable.mod_num = *num % 100;
	variable.to_char[0] = 1 + '0';
	variable.to_char[1] = 0 + '0';
	variable.to_char[2] = 0 + '0';
	variable.to_char[3] = '\0';
	one_digit_number(&variable.div_num);
	write(1, " ", 1);
	search_word(variable.to_char);
	if (variable.mod_num != 0 && variable.mod_num <= 9)
	{
		one_digit_number(&variable.mod_num);
	}
	else if (variable.mod_num != 0 && variable.mod_num > 9)
		two_digits_number(&variable.mod_num);
}

void	four_digits_number(int *num)
{
	struct s_Variables	variable;

	variable.i = 1;
	variable.div_num = *num / 1000;
	variable.mod_num = *num % 1000;
	if (variable.div_num > 9 && variable.div_num < 100)
		two_digits_number(&variable.div_num);
	else if (variable.div_num >= 100)
		three_digits_number(&variable.div_num);
	variable.to_char[0] = 1 + '0';
	variable.to_char[1] = 0 + '0';
	variable.to_char[2] = 0 + '0';
	variable.to_char[3] = 0 + '0';
	variable.to_char[4] = '\0';
	one_digit_number(&variable.div_num);
	write(1, " ", 1);
	search_word(variable.to_char);
	write (1, " ", 1);
	if (variable.mod_num != 0 && variable.mod_num <= 9)
		one_digit_number(&variable.mod_num);
	else if (variable.mod_num != 0 && variable.mod_num < 100)
		two_digits_number(&variable.mod_num);
	else if (variable.mod_num != 0 && variable.mod_num >= 100)
		three_digits_number(&variable.mod_num);
}

void	seven_digits_numbers(int *num)
{
	struct s_Variables	variable;

	variable.i = 1;
	variable.div_num = *num / 1000000;
	variable.mod_num = *num % 1000000;
	if (variable.div_num > 9 && variable.div_num < 100)
		two_digits_number(&variable.div_num);
	else if (variable.div_num >= 100)
		three_digits_number(&variable.div_num);
	variable.to_char[0] = 1 + '0';
	while (variable.i < 7)
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
		mod_seven_digits(variable.mod_num);
}
