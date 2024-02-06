/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   imprimer_entier_non_signe_avec_largeur_de          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:12:31 by mboegler          #+#    #+#             */
/*   Updated: 2024/01/16 11:12:33 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

static void	print_field_width(t_format *option);

void	print_unsigned_integer_with_field_width(t_format *option)
{
	count_digits(option);
	if (option->minus == false)
	{
		print_field_width(option);
		putnbr_bonus(option, option->unsigned_number);
	}
	else if (option->minus == true)
	{
		putnbr_bonus(option, option->unsigned_number);
		print_field_width(option);
	}
}
static void	print_field_width(t_format *option)
{
	size_t	i;

	i = 0;
	if ((option->zero == false) || (option->minus == true && option->zero == true))
	{
		while (option->number_size + i < option->space_array)
		{
			putchar_bonus(option, ' ');
			i++;
		}
	}
	else if (option->zero == true && option->minus == false)
	{
		while (option->number_size + i < option->space_array)
		{
			putchar_bonus(option, '0');
			i++;
		}
	}
}
