/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_signed_integer_with_plus_and_zero.c          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:09:08 by mboegler          #+#    #+#             */
/*   Updated: 2024/02/07 14:09:09 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../obligatory/printf/ft_printf.h"

static void	print_zeros_for_field_width(t_format *option);

void	print_signed_integer_with_plus_and_zero(t_format *option)
{
	count_digits(option);
	if (option->plus == true)
		option->space_array -= 1;
	if (option->minus == false)
	{
		if (option->plus == true)
			putchar_bonus(option, '+');
		print_zeros_for_field_width(option);
		putnbr_bonus(option, option->signed_number);
	}
	else if (option->minus == true)
	{
		if (option->plus == true)
			putchar_bonus(option, '+');
		putnbr_bonus(option, option->signed_number);
		print_zeros_for_field_width(option);
	}
}

static void	print_zeros_for_field_width(t_format *option)
{
	size_t	i;

	i = 0;
	if (option->zero == true && option->minus == false)
	{
		while (option->number_size + i < option->space_array)
		{
			putchar_bonus(option, '0');
			i++;
		}
	}
}
