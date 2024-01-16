/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gestionnaire_entier_non_signe_avec_largeu          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:05:15 by mboegler          #+#    #+#             */
/*   Updated: 2024/01/16 11:05:18 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

void	gestionnaire_entier_non_signe_avec_largeur_de_champs(t_format *option)
{
	//printf("\nDébut de gestionnaire_entier_non_signe_avec_largeur_de_champs : \n");

	if (option->space_array > 0) 
		imprimer_entier_non_signe_avec_largeur_de_champs(option);
}
