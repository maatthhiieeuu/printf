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

void	address_option_manager(va_list args, t_format *option)
{
	option->address_int = va_arg(args, uintptr_t);
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
	if (option->space_array > 0 && option->precision_array > 0)
		print_address_with_precision_and_field_width(option);
	else if (option->space_array > 0 || option->space == true)
		address_width_manager(option);
	else if ((option->precision_array > 0)
		|| (option->zero == true && option->precision == false))
		address_precision_manager(option);
	else if (option->plus == true && option->precision_array == 0
		&& option->space_array == 0)
		print_address_with_plus(option);
}
