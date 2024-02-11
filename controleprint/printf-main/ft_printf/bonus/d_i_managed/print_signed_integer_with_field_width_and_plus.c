/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_signed_integer_with_field_width_and          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:06:20 by mboegler          #+#    #+#             */
/*   Updated: 2024/02/07 14:06:21 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../obligatory/printf/ft_printf.h"

static void	print_spaces_for_field_width(t_format *option);
static void	number_neg(t_format *option);

void	print_signed_integer_with_field_width_and_plus(t_format *option)
{
	if (option == NULL)
		return ;
	if (option->space == true)
		putchar_bonus(option, ' ');
	count_digits(option);
	if (option->plus == true)
		option->space_array -= 1;
	if (option->minus == false)
	{
		print_spaces_for_field_width(option);
		if (option->plus == true)
			putchar_bonus(option, '+');
		putnbr_bonus(option, option->signed_number);
	}
	else if (option->minus == true)
	{
		if (option->plus == true)
			putchar_bonus(option, '+');
		putnbr_bonus(option, option->signed_number);
		print_spaces_for_field_width(option);
	}
}

static void	print_spaces_for_field_width(t_format *option)
{
	size_t	i;

	i = 0;
	if (option == NULL)
		return ;
	if ((option->zero == false) || (option->minus == true
			&& option->zero == true))
	{
		while (option->number_size + i < option->space_array)
		{
			putchar_bonus(option, ' ');
			i++;
		}
	}
	else if (option->zero == true && option->minus == false)
	{
		if (option->signed_number < 0)
			number_neg(option);
		while (option->number_size + i < option->space_array)
		{
			putchar_bonus(option, '0');
			i++;
		}
	}
}

static void	number_neg(t_format *option)
{
	if (option == NULL)
		return ;
	putchar_bonus(option, '-');
	option->signed_number *= -1;
}
