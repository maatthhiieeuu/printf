/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_address_with_precision_and_field_wi          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:06:01 by mboegler          #+#    #+#             */
/*   Updated: 2024/02/07 14:06:04 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../obligatory/printf/ft_printf.h"

static void	without_minus(t_format *option);
static void	with_minus(t_format *option);

void	print_address_with_precision_and_field_width(t_format *option)
{
	if (option->minus == false)
		without_minus(option);
	else if (option->minus == true)
		with_minus(option);
}

static void	without_minus(t_format *option)
{
	size_t	i;

	i = 0;
	option->space_array -= 2;
	if (option->precision_array >= 16)
	{
		while (option->precision_array + i < option->space_array)
		{
			putchar_bonus(option, ' ');
			i += 1;
		}
		print_address_with_precision(option);
	}
	else
	{
		while (option->precision_array + i < option->space_array)
		{
			putchar_bonus(option, ' ');
			i += 1;
		}
		print_address_with_precision(option);
	}
}       

static void	with_minus(t_format *option)
{
	size_t	i;

	i = 0;
	print_address_with_precision(option);
	option->space_array -= 2;
	if (option->precision_array >= 16)
	{
		while (option->precision_array + i < option->space_array)
		{
			putchar_bonus(option, ' ');
			i++;
		}
	}
	else
	{
		while (option->precision_array + i < option->space_array)
		{
			putchar_bonus(option, ' ');
			i += 1;
		}
	}
}// - (16 - option->precision_array)