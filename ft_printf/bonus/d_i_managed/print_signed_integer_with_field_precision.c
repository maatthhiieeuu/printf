/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_signed_integer_with_field_width_and          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:06:24 by mboegler          #+#    #+#             */
/*   Updated: 2024/02/07 14:06:25 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../obligatory/printf/ft_printf.h"

static void	print_precision(t_format *option);
static void	print_field_width(t_format *option);

void	print_signed_integer_with_field_precision(t_format *option)
{
	if (option == NULL)
		return ;
	count_digits(option);
	if (option->space == true)
	{
		putchar_bonus(option, ' ');
		option->space_array -= 1;
	}
	if (option->signed_number < 0)
		option->space_array -= 1;
	if (option->minus == false)
	{
		print_field_width(option);
		print_precision(option);
		if (option->precision_zero == false)
			putnbr_bonus(option, option->signed_number);
	}
	else if (option->minus == true)
	{
		print_precision(option);
		if (option->precision_zero == false)
			putnbr_bonus(option, option->signed_number);
		print_field_width(option);
	}
}

static void	print_field_width(t_format *option)
{
	int	i;

	i = 0;
	if (option == NULL)
		return ;
	if (option->number_size <= option->precision_array)
	{
		if (option->plus == true && option->signed_number >= 0)
			option->space_array -= 1;
		while (option->precision_array + i < option->space_array)
		{
			putchar_bonus(option, ' ');
			i++;
		}
	}
	else if (option->number_size > option->precision_array)
	{
		while (option->number_size + i < option->space_array)
		{
			putchar_bonus(option, ' ');
			i++;
		}
	}
}

static void	print_precision(t_format *option)
{
	size_t	i;

	i = 0;
	if (option == NULL)
		return ;
	if (option->plus == true && option->signed_number >= 0)
		putchar_bonus(option, '+');
	else if (option->signed_number < 0)
		putchar_bonus(option, '-');
	while (option->number_size + i < option->precision_array)
	{
		putchar_bonus(option, '0');
		i++;
	}
}
