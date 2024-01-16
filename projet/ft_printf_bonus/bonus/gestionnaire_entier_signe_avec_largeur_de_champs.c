/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gestionnaire_entier_signe_avec_largeur_de          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:07:04 by mboegler          #+#    #+#             */
/*   Updated: 2024/01/16 11:07:06 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

void	gestionnaire_entier_signe_avec_largeur_de_champs(t_format *option)
{
	//printf("\nDébut de gestionnaire_entier_signe_avec_option : \n");

	if (option->plus == true && option->zero == true)
		imprimer_entier_signe_avec_plus_et_zero(option);
	else if (option->space_array > 0) 
		imprimer_entier_signe_avec_largeur_de_champs_et_plus(option);
}
