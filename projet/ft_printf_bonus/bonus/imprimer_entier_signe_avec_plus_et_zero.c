/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   imprimer_entier_signe_avec_plus_et_zero.c          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:17:31 by mboegler          #+#    #+#             */
/*   Updated: 2024/01/16 11:17:32 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

static void	imprimer_zero_pour_largeur_de_champs(t_format *option);

void	imprimer_entier_signe_avec_plus_et_zero(t_format *option)
{
	compter_nombre_de_chiffre(option);
	if (option->plus == true)
		option->space_array -= 1;
	if (option->minus == false)
	{
		if (option->plus == true)
			putchar_bonus(option, '+');
		imprimer_zero_pour_largeur_de_champs(option);
		putnbr_bonus(option, option->signed_number);
	}
	else if (option->minus == true)
	{
		if (option->plus == true)
			putchar_bonus(option, '+');
		putnbr_bonus(option, option->signed_number);
		imprimer_zero_pour_largeur_de_champs(option);
	}
}
static void	imprimer_zero_pour_largeur_de_champs(t_format *option)
{
	size_t	i;

	i = 0;
	if (option->zero == true && option->minus == false)
	{
		while (option->number_size + i < option->space_array)
		{
			putchar_bonus(option, '0');
			i++;
		}
	}
}
