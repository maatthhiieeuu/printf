/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   imprimer_entier_signe_avec_espace.c                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:14:20 by mboegler          #+#    #+#             */
/*   Updated: 2024/01/16 11:14:21 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

void	imprimer_entier_signe_avec_espace(t_format *option) // nom en anglais : print_signed_int_with_one_space
{
    //printf("\nDébut de imprimer_entier_signe_avec_space\n");   
		
	if (option->space_array == 0 && option->space == true)
	{
		putchar_bonus(option, ' ');
		putnbr_bonus(option, option->signed_number);
	}	
		
}
