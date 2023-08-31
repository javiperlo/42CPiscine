/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fz_ex01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javperez <javperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 17:43:18 by javperez          #+#    #+#             */
/*   Updated: 2023/08/31 18:27:41 by javperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// Multiplos de 3 --> Fizz
// Multilpos de 5 --> Buzz
// De los dos --> Fizz Buzz
// Hasta 100 numeros

void write_number (int number)
{
    int     div;
    int     mod;
    char    numChar;
    
    numChar = number + '0';
    div = number / 10;
    mod = number % 10;
    div = div + '0';
    mod = mod + '0';
    if (number > 9)
    {
        write(1, &div, 1);
        write(1, &mod, 1);
    }
    else
        write(1, &numChar, 1);
    
}

void    ft_fzbz (void)
{
    int     number;

    number = 1;
    while (number <= 100)
    {
        if (((number % 3)==0) && ((number % 5) == 0))
        {
            write (1, "FizzBuzz", 8);
        }
        else if ((number % 3)==0)
        {
            write (1, "Fizz", 4);
        }
        else if ((number % 5) == 0)
        {
            write (1, "Buzz",4);
        }
        
        else
        {
            write_number(number);
        }
        write (1 , "\n", 1);  
        number++; 
    }
}

int main()
{
    ft_fzbz();
}