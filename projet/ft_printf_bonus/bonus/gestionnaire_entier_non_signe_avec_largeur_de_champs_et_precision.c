/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gestionnaire_entier_non_signe_avec_largeu          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:06:01 by mboegler          #+#    #+#             */
/*   Updated: 2024/01/16 11:06:03 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

void	gestionnaire_entier_non_signe_avec_largeur_de_champs_et_precision(t_format *option)
{
	compter_nombre_de_chiffre(option);
	if (option->space_array > (option->number_size && option->precision_array) && option->minus == false)
		imprimer_entier_non_signe_avec_largeur_de_champs_et_precision(option);
	else if (option->space_array > (option->number_size && option->precision_array) && option->minus == true)
		imprimer_entier_non_signe_avec_largeur_de_champs_precision_et_minus(option);
}
