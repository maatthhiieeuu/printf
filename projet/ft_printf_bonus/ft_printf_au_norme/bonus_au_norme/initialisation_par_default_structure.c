/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialisation_par_default_structure.c             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:21:03 by mboegler          #+#    #+#             */
/*   Updated: 2024/01/16 11:21:09 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

void	initialisation_par_default_structure(t_format *option)
{
	option->specifier = 0;
	option->space_array = 0;
	option->precision_array = 0;
	option->digit_char_until_specifier = 0;
	option->digit_point_until_specifier = 0;
	option->address_size = 0;
	option->number_size = 0;
	option->address_int = 0;
	option->signed_number = 0;
	option->unsigned_number = 0;
	option->precision = false;
	option->negative_precision = false;
	option->space = false;
	option->zero = false;
	option->hash = false;
	option->minus = false;
	option->plus = false;
}
