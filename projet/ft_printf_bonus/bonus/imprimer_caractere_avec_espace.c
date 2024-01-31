/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   imprimer_caractere_avec_espace.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:10:36 by mboegler          #+#    #+#             */
/*   Updated: 2024/01/16 11:10:38 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include "libft.h"
#include "ft_printf.h"

void 	imprimer_caractere_avec_espace(va_list args, t_format *option) // nom en anglais : print_char_with_spaces
{
	//printf("Début de fonction de .imprimer_caractere_avec_espaces\n");
	size_t j;
	char character;

	j = 0;
	character = va_arg(args, int);
	if (option->minus == false)
	{
		while (j + 1 < option->space_array )
		{
			putchar_bonus(option, ' ');
			j++;
		}
		putchar_bonus(option, character);
		//printf("\nAprès incrémentation de option.output = %d\n", option->output);
	}
	else if (option->minus == true)
	{
		putchar_bonus(option, character);
		while (j + 1 < option->space_array)
		{
			putchar_bonus(option, ' ');
			j++;
		}
		//printf("\nAprès incrémentation de option.output = %d\n", option->output);
	}
	//printf("\noption.output = %d\n", option->output);
}
