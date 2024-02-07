/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   signed_integer_option_manager.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:07:41 by mboegler          #+#    #+#             */
/*   Updated: 2024/02/07 14:07:43 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

void	signed_integer_option_manager(const char *format, va_list args,
		int *i, t_format *option)
{
	option->signed_number = va_arg(args, int);
	if (option->hash == true)
		option->hash = false;
	if (option->negative_precision == true)
		print_raw_format(format, i, option);
	else if (option->space_array > 0 && option->precision_array > 0)
		signed_integer_width_and_precision_manager(option);
	else if (option->space_array > 0 && option->precision_array == 0)
		signed_integer_field_width_manager(option);
	else if (option->plus == true && option->space_array == 0)
		print_signed_integer_with_plus(option);
	else if (option->minus == true && option->space_array == 0)
		print_signed_integer_with_minus(option);
	else if (option->space == true && option->space_array == 0)
		print_signed_integer_with_space(option);
	else if (option->precision_array > 0 && option->space_array == 0)
		print_signed_integer_with_precision(option);
	else
		print_signed_integer_without_option(option);
}
