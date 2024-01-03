/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unsigned_utility.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 14:57:16 by mboegler          #+#    #+#             */
/*   Updated: 2023/12/22 14:57:20 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <stdbool.h>
#include "libft.h"
#include "ft_printf.h"

void 	imprimer_caractere_avec_espaces(va_list args, int **i, t_format *option) // nom en anglais : print_char_with_spaces
{
	//printf("Début de fonction de .imprimer_caractere_avec_espaces\n");
	//getchar();
	int j;
	char var_arg_c;

	j = 0;
	var_arg_c = va_arg(args, int);
	if (option->minus == false)
	{
		while (j + 1 < option->space_array )
		{
			ft_putchar_fd(' ', 1);
			j++;
		}
		ft_putchar_fd(var_arg_c, 1);
		**i += 2;
	}
	else if (option->minus == true)
	{
		ft_putchar_fd(var_arg_c, 1);
		while (j + 1 < option->space_array)
		{
			ft_putchar_fd(' ', 1);
			j++;
		}
		**i += 3;
	}
	
}

void	formater_espace_entier(int n, int size, t_format *option) // nom en anglais : format_space_for_int
{
	//printf("Début de fonction de .formater_espace_entier\n");
	//getchar();
	int nCpy;
	int	nbrDigit;
	int	count;

	nCpy = n;
	nbrDigit = 0;
	count = 0;
	while (nCpy > 0)
	{
		nCpy /= 10;
		nbrDigit++;
	}
	while ((option->space== true) && (count < (size - nbrDigit)))
	{
		ft_putchar_fd(' ', 1);
		count++;
	}
	ft_putnbr_fd(n, 1);
}