/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   imprimer_entier_signe_avec_plus.c                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:16:48 by mboegler          #+#    #+#             */
/*   Updated: 2024/01/16 11:16:51 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

void	imprimer_entier_signe_avec_plus(t_format *option) // nom en anglais : print_signed_int_with_plus
{
    //printf("\nDébut de imprimer_entier_signe_avec_plus\n");   
		ft_putchar_fd('+', 1);
		ft_putnbr_fd(option->signed_number, 1);
		
	
}
