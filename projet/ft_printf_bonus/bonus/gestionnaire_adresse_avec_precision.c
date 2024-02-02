/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gestionnaire_adresse_avec_precision.c              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:03:31 by mboegler          #+#    #+#             */
/*   Updated: 2024/01/16 11:03:33 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

void	gestionnaire_adresse_avec_precision(t_format *option)
{
	//printf("\nDébut de gestionnaire_adresse_avec_precision : \n");
	
	if (option->precision_array > 0 && option->zero == false)
		imprimer_adresse_avec_precision(option);
	else if (option->zero == true && option->precision == false)
	{
		option->precision_array -= 2;
		imprimer_adresse_avec_precision(option);
	}
}
