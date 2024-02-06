/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   imprimer_adresse_avec_largeur_de_champs_e          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:09:16 by mboegler          #+#    #+#             */
/*   Updated: 2024/01/16 11:09:18 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

void	print_address_with_field_width_and_minus(t_format *option)
{
	size_t i;
	
	i = 0;
	if ((option->specifier == 'p') && (option->address_int != 0))
	{
		count_address_characters(option);
		if (option->space_array > 0 && option->minus == true)
		{
			print_address_bonus(option->address_int, option);
			while (i + option->address_size < option->space_array)
			{
				putchar_bonus(option, ' ');
				i++;
			}
		}
	}
}
