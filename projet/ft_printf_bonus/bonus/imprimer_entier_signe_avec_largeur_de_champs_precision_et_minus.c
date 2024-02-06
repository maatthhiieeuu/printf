/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   imprimer_entier_signe_avec_largeur_de_cha          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:16:05 by mboegler          #+#    #+#             */
/*   Updated: 2024/01/16 11:16:06 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

static void	imprimer_precision(t_format *option);
static void	imprimer_largeur_de_champs(t_format *option);

void	imprimer_entier_signe_avec_largeur_de_champs_precision_et_minus(t_format *option)
{
	imprimer_precision(option);
	putnbr_bonus(option, option->signed_number);
	imprimer_largeur_de_champs(option);
}

static void	imprimer_precision(t_format *option)
{
	int	i;

	i = 0;
	if (option->plus == true)
	{
		putchar_bonus(option, '+');
		option->space_array -= 1;
	}

	while (option->number_size + i < option->precision_array)
	{
		putchar_bonus(option, '0');
		i++;
	}
}

static void	imprimer_largeur_de_champs(t_format *option)
{
	int	i;

	i = 0;
	if (option->number_size < option->precision_array)
	{
		while (option->precision_array + i < option->space_array)
		{
			putchar_bonus(option, ' ');
			i++;
		}
	}
	else if (option->number_size > option->precision_array)
	{
		while (option->number_size + i < option->space_array)
		{
			putchar_bonus(option, ' ');
			i++;
		}
	}
}
