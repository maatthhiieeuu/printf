/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   address_option_manager.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:03:39 by mboegler          #+#    #+#             */
/*   Updated: 2024/02/07 14:03:57 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../obligatory/printf/ft_printf.h"

static void	parsing_complement(t_format *option);

void	address_option_manager(va_list args, t_format *option)
{
	if (option == NULL)
		return ;
	option->address_int = va_arg(args, uintptr_t);
	parsing_complement(option);
	if (option->space_array > 0 && option->precision_array > 0){
		print_address_with_precision_and_field_width(option);
	}
	else if (option->space_array > 0 && option->precision_array == 0){
		print_address_with_field_width(option);
	}
	else if (option->space_array == 0 && option->precision_array > 0){
		print_address_with_precision(option);
	}
	else{
		if (option->space == true)
			putchar_bonus(option, ' ');
		if (option->plus == true)
			putchar_bonus(option, '+');
		print_address_bonus(option->address_int, option);
	}
}

static void	parsing_complement(t_format *option)
{
	if (option == NULL)
		return ;
	count_digits_hex(option);
	option->hash = false;
	if (option->zero == true && option->space_array > 0
		&& option->precision == false)
	{
		option->precision_array = option->space_array;
		option->space_array = 0;
	}
	if (option->zero == true && option->space_array > 0
		&& option->precision == true)
		option->precision = false;
	if (option->zero == true && option->space == true)
		option->space = false;
	if (option->signed_number == 0 && option->hash == true)
		option->hash = false;
	if (option->minus == true && option->zero == true)
		option->zero = false;
	if (option->space_array > 0 && option->space == true)
		option->space = false;
	if (option->precision == true && option->zero == true)
		option->zero = false;
}