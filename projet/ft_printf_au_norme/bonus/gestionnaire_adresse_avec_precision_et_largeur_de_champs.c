/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gestionnaire_adresse_avec_precision_et_la          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:03:48 by mboegler          #+#    #+#             */
/*   Updated: 2024/01/16 11:03:57 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

void	gestionnaire_adresse_avec_precision_et_largeur_de_champs(t_format *option)
{
	if (option->space_array > option->address_size)
	{
		imprimer_adresse_avec_precision_et_largeur_de_champs(option);
	}
}
