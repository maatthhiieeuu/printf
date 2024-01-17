/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   imprimer_entier_non_signe_avec_largeur_de          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:13:09 by mboegler          #+#    #+#             */
/*   Updated: 2024/01/16 11:13:13 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

static void	imprimer_precision(t_format *option);
static void	imprimer_largeur_de_champs(t_format *option);

void	imprimer_entier_non_signe_avec_largeur_de_champs_precision_et_minus(t_format *option)
{
	compter_nombre_de_chiffre(option);
	imprimer_precision(option);
	ft_putnbr_fd(option->unsigned_number, 1);
	imprimer_largeur_de_champs(option);
}
static void	imprimer_largeur_de_champs(t_format *option)
{
	int	i;

	i = 0;
	if (option->number_size < option->precision_array)
	{
		while (option->precision_array + i < option->space_array)
		{
			ft_putchar_fd(' ', 1);
			i++;
		}
	}
	else if (option->number_size > option->precision_array)
	{
		while (option->number_size + i < option->space_array)
		{
			ft_putchar_fd(' ', 1);
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
		ft_putchar_fd('0', 1);
		i++;
	}
}
