/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   imprimer_entier_non_signe_sans_option.c            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:14:02 by mboegler          #+#    #+#             */
/*   Updated: 2024/01/16 11:14:04 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

void	imprimer_entier_non_signe_sans_option(t_format *option) // nom en anglais : print_signed_int_option_less
{
    //printf("\nDébut de imprimer_entier_non_signe_sans_option\n");   
		
		putnbr_bonus(option, option->unsigned_number);
		
}
