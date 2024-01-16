/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gestionnaire_adresse_avec_option.c                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:03:19 by mboegler          #+#    #+#             */
/*   Updated: 2024/01/16 11:03:21 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

void	gestionnaire_adresse_avec_option(va_list args, t_format *option)
{
	
	//printf("\nDébut de gestionnaire_adresse_avec_option : \n");
	option->address_int = va_arg(args, uintptr_t);
	option->hash = false;	//	- '#' non prise en charge.
	if (option->space_array > 0)	//	Non prise en compte de ' ' car présence de la largeur de champs.
		option->space = false;
	if (option->zero == true && option->space_array > 0 &&  option->precision == false)
	{
		option->precision_array = option->space_array;
		option->space_array = 0;
	}
	if (option->zero == true && option->space_array > 0 && option->precision == true)
		option->precision = false;
	if (option->space_array > 0 && option->precision_array > 0)
		gestionnaire_adresse_avec_precision_et_largeur_de_champs(option);
	else if (option->space_array > 0 || option->space == true)
		gestionnaire_adresse_avec_largeur_de_champs(option);
	else if ((option->precision_array > 0) || (option->zero == true && option->precision == false))
		gestionnaire_adresse_avec_precision(option);
	else if (option->plus == true && option->precision_array == 0 && option->space_array == 0)
		imprimer_adresse_avec_plus(option);
	else
		printf("Aucun cas accepté dans la fonction gestionnaire_adresse_avec_option");
}
