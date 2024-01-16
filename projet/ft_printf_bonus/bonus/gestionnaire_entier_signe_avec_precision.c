/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gestionnaire_entier_signe_avec_precision.          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:08:03 by mboegler          #+#    #+#             */
/*   Updated: 2024/01/16 11:08:07 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

void	gestionnaire_entier_signe_avec_precision(t_format *option) // nom en anglais : print_signed_int_with_one_space
{
    //printf("\nDébut de gestionnaire_entier_signe_avec_precision\n");   
		
	if (option->precision_array > 0)
		imprimer_entier_signe_avec_precision(option);
		
}
