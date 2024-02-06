/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   imprimer_entier_non_signe_avec_largeur_de          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:12:51 by mboegler          #+#    #+#             */
/*   Updated: 2024/01/16 11:12:53 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

static void	imprimer_precision(t_format *option);
static void	imprimer_largeur_de_champs(t_format *option);

void	imprimer_entier_non_signe_avec_largeur_de_champs_et_precision(t_format *option)
{
	imprimer_largeur_de_champs(option);
	imprimer_precision(option);
	putnbr_bonus(option, option->unsigned_number);
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

static void	imprimer_precision(t_format *option)
{
	int	i;

	i = 0;
	while (option->number_size + i < option->precision_array)
	{
		putchar_bonus(option, '0');
		i++;
	}
}
