/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javperez <javperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 08:55:15 by javperez          #+#    #+#             */
/*   Updated: 2023/08/24 23:25:24 by javperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void decimalToBinary (int num)
{
	int binaryNum[32];
	int i;
	int j;

	while ()
	{
		/* code */
	}
	
}
/*
void	ft_putnbr_base(int nbr, char *base)
{
	int		n;
	char	letra;

	letra = 'a';
	n = 0;
	while (n != '\0')
	{
		letra = letra%16;
		letra = letra / 16;
		n++;
	}

	printf("%s", letra);
}
*/
int main()//int argc, char *argv[])
{
	//if (argc == 2)
	//{
		/*
			Entramos en las funciones
		*/
	//}
	//else
	//{	// PRINTEA UN ERROR
		/* la base está vacía o su tamaño es 1; // Si argv[0] == ' ' ERROR
		◦ la base contiene dos veces el mismo carácter; // Si el contador i que cuenta los caracteres es mayor que uno ERROR
		◦ la base contiene los caracteres + o -.*/ // if argv[1][i] es igual a na + o un - ERROR
	//}
	/*
	char base_diez[] = "0123456789";
	char base_binaria[] = "01";
	char base_hex[] = "0123456789ABCDEF";
	char base_octal[] = "poniguay";
	int number;
	*/
	/*
	number = 42;
	ft_putnbr_base(number, &base_diez);
	*/
	int num = 2;
	decimalToBinary(num);
}