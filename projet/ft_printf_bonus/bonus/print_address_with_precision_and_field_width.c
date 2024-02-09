/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   imprimer_adresse_avec_precision_et_largeu          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:10:07 by mboegler          #+#    #+#             */
/*   Updated: 2024/01/16 11:10:09 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

void	print_address_with_precision_and_field_width(t_format *option)
{
	size_t i;

	i = 0;
	if (option->minus == false)
	{
		option->space_array -= 2;
		while (option->precision_array + i < option->space_array)
		{
			putchar_bonus(option, ' ');
			i++;
		}
		print_address_with_precision(option);
	}
	else if (option->minus == true)
	{
		print_address_with_precision(option);
		option->space_array -= 2;
		while (option->precision_array + i < option->space_array)
		{
			putchar_bonus(option, ' ');
			i++;
		}
	}
}