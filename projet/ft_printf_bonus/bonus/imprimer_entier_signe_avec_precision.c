/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   imprimer_entier_signe_avec_precision.c             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:18:08 by mboegler          #+#    #+#             */
/*   Updated: 2024/01/16 11:18:09 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

void	imprimer_entier_signe_avec_precision(t_format *option) // nom en anglais : print_signed_int_with_one_space
{
    //printf("\nDébut de imprimer_entier_signe_avec_precision\n");   
	int i;

	i = 0;
	compter_nombre_de_chiffre(option);
	while (option->number_size + i < option->precision_array)
	{
		ft_putchar_fd('0', 1);
		i++;
	}
	ft_putnbr_fd(option->signed_number, 1);
}
