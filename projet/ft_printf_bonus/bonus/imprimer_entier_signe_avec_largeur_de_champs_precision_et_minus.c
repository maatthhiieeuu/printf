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
static void	 imprimer_largeur_de_champs(t_format *option);

void	imprimer_entier_signe_avec_largeur_de_champs_precision_et_minus(t_format *option) // nom en anglais : print_signed_int_with_one_space
{
    //printf("\nDébut de imprimer_entier_signe_avec_largeur_de_champs_precision_et_minus\n");  
    compter_nombre_de_chiffre(option);
	imprimer_precision(option);
	ft_putnbr_fd(option->signed_number, 1);
	imprimer_largeur_de_champs(option);
}
static void	 imprimer_largeur_de_champs(t_format *option)
{

	int i;

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
	int i;

	i = 0;
	if (option->plus == true)
	{
		ft_putchar_fd('+', 1);
		option->space_array -= 1;
	}

	while (option->number_size + i < option->precision_array)
	{
		ft_putchar_fd('0', 1);
		i++;
	}
}
