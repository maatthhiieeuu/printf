/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   imprimer_entier_signe_avec_moins.c                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:16:19 by mboegler          #+#    #+#             */
/*   Updated: 2024/01/16 11:16:21 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

void	imprimer_entier_signe_avec_moins(t_format *option) // nom en anglais : print_signed_int_with_minus
{
    //printf("\nDébut de imprimer_entier_avec_moin\n");   
		
		putnbr_bonus(option, option->signed_number);
}
