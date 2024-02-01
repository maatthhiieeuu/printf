/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   imprimer_adresse_avec_largeur_de_champs.c          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:08:58 by mboegler          #+#    #+#             */
/*   Updated: 2024/01/16 11:09:00 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

void	imprimer_adresse_avec_largeur_de_champs(t_format *option)
{
	//printf("\nDébut de imprimer_adresse_avec_largeur_de_champs :\n");     
	size_t i;

	
	i = 0;
	if ((option->specifier == 'p') && (option->address_int != 0))
	{
		compter_caractere_adresse(option);//nom anglais :count_char_of_address
		if (option->space_array > 0 && option->minus == false)
		{
			while (i + option->address_size < option->space_array)
			{
				putchar_bonus(option, ' ');
				i++;
			}
			print_adress_bonus(option->address_int, option);
		}
	}
} 
