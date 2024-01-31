/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   imprimer_entier_signe_avec_largeur_de_cha          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:14:32 by mboegler          #+#    #+#             */
/*   Updated: 2024/01/16 11:14:33 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

static void	imprimer_espace_pour_largeur_de_champs(t_format *option);

void	imprimer_entier_signe_avec_largeur_de_champs_et_plus(t_format *option)
{
	compter_nombre_de_chiffre(option);
	if (option->plus == true)
		option->space_array -= 1;
	if (option->minus == false)
	{
		imprimer_espace_pour_largeur_de_champs(option);
		if (option->plus == true)
			ft_putchar_fd('+', 1);
		ft_putnbr_fd(option->signed_number, 1);
	}
	else if (option->minus == true)
	{
		if (option->plus == true)
			ft_putchar_fd('+', 1);
		ft_putnbr_fd(option->signed_number, 1);
		imprimer_espace_pour_largeur_de_champs(option);
	}
}
static void	imprimer_espace_pour_largeur_de_champs(t_format *option)
{
	size_t i;

	i = 0;
	if ((option->zero == false) || (option->minus == true && option->zero == true))
	{
		while (option->number_size + i < option->space_array)
		{
			ft_putchar_fd(' ', 1);
			i++;
		}
	}
	else if (option->zero == true && option->minus == false)
	{
		while (option->number_size + i < option->space_array)
		{
			ft_putchar_fd('0', 1);
			i++;
		}
	}
}
