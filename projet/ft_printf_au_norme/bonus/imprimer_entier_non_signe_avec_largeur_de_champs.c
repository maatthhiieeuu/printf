/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   imprimer_entier_non_signe_avec_largeur_de          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:12:31 by mboegler          #+#    #+#             */
/*   Updated: 2024/01/16 11:12:33 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

static void	imprimer_largeur_de_champs(t_format *option);

void	imprimer_entier_non_signe_avec_largeur_de_champs(t_format *option)
{
	compter_nombre_de_chiffre(option);
	if (option->minus == false)
	{
		imprimer_largeur_de_champs(option);
		putnbr_bonus(option, option->unsigned_number);
	}
	else if (option->minus == true)
	{
		putnbr_bonus(option, option->unsigned_number);
		imprimer_largeur_de_champs(option);
	}
}
static void	imprimer_largeur_de_champs(t_format *option)
{
	size_t	i;

	i = 0;
	if ((option->zero == false) || (option->minus == true && option->zero == true))
	{
		while (option->number_size + i < option->space_array)
		{
			putchar_bonus(option, ' ');
			i++;
		}
	}
	else if (option->zero == true && option->minus == false)
	{
		while (option->number_size + i < option->space_array)
		{
			putchar_bonus(option, '0');
			i++;
		}
	}
}
