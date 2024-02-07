/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unsigned_integer_option_manager.c                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:08:03 by mboegler          #+#    #+#             */
/*   Updated: 2024/02/07 14:08:04 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

void	unsigned_integer_option_manager(const char *format, va_list args,
		int *i, t_format *option)
{
	option->unsigned_number = va_arg(args, unsigned int);
	if (option->hash == true)
		option->hash = false;
	if (option->plus == true)
		option->plus = false;
	if (option->negative_precision == true)
		print_raw_format(format, i, option);
	else if (option->space_array > 0 && option->precision_array > 0)
		unsigned_integer_width_and_precision_manager(option);
	else if (option->space_array > 0 && option->precision_array == 0)
		print_unsigned_integer_with_field_width(option);
	else if (option->plus == true && option->space_array == 0)
		print_signed_integer_with_plus(option);
	else if (option->minus == true && option->space_array == 0)
		print_unsigned_integer_with_minus(option);
	else if (option->precision_array > 0 && option->space_array == 0)
		print_unsigned_integer_with_precision(option);
	else
		print_unsigned_integer_without_option(option);
}
