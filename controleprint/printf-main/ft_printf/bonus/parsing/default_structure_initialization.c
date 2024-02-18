/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   default_structure_initialization.c                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:09:33 by mboegler          #+#    #+#             */
/*   Updated: 2024/02/07 14:09:34 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../obligatory/printf/ft_printf.h"

void	default_structure_initialization(t_format *option)
{
	if (option == NULL)
		return ;
	option->specifier = 0;
	option->space_array = 0;
	option->precision_array = 0;
	option->digit_char_until_specifier = 0;
	option->digit_point_until_specifier = 0;
	option->address_size = 0;
	option->number_size = 0;
	option->output = 0;
	option->address_int = 0;
	option->signed_number = 0;
	option->unsigned_number = 0;
	option->precision = false;
	option->precision_zero = false;
	option->negative_precision = false;
	option->space = false;
	option->zero = false;
	option->hash = false;
	option->minus = false;
	option->plus = false;
	option->dont_value_precision = false;
}
