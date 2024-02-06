/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gestionnaire_entier_non_signe_avec_largeu          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:06:01 by mboegler          #+#    #+#             */
/*   Updated: 2024/01/16 11:06:03 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

void	unsigned_integer_width_and_precision_manager(t_format *option)
{
	count_digits(option);
	if (option->space_array > (option->number_size && option->precision_array) && option->minus == false)
		print_unsigned_integer_with_field_width_and_precision(option);
	else if (option->space_array > (option->number_size && option->precision_array) && option->minus == true)
		print_unsigned_integer_with_field_width_precision_and_minus(option);
}
