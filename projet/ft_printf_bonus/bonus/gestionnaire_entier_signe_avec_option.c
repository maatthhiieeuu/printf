/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gestionnaire_entier_signe_avec_option.c            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:07:45 by mboegler          #+#    #+#             */
/*   Updated: 2024/01/16 11:07:47 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

void	gestionnaire_entier_signe_avec_option(const char *format, va_list args, int *i, t_format *option)
{
	//printf("\nDébut de gestionnaire_entier_signe_avec_option : \n");
	option->signed_number = va_arg(args, int);
	if (option->hash == true)
		option->hash = false;
	if (option->negative_precision == true)
		imprimer_format_brut(format, i, option);
	else if (option->space_array > 0 && option->precision_array > 0)
		gestionnaire_entier_signe_avec_largeur_de_champs_et_precision(option);
	else if (option->space_array > 0 && option->precision_array == 0)
		gestionnaire_entier_signe_avec_largeur_de_champs(option);
	else if (option->plus == true && option->space_array == 0)
		imprimer_entier_signe_avec_plus(option);
	else if (option->minus == true && option->space_array == 0)
		imprimer_entier_signe_avec_moins(option);
	else if (option->space == true && option->space_array == 0)
		imprimer_entier_signe_avec_espace(option);
	else if (option->precision_array > 0 && option->space_array == 0)
		gestionnaire_entier_signe_avec_precision(option);
	else
		imprimer_entier_signe_sans_option(option);
}