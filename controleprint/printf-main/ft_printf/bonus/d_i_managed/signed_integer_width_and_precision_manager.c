/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   signed_integer_width_and_precision_manage          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:07:47 by mboegler          #+#    #+#             */
/*   Updated: 2024/02/07 14:07:48 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../obligatory/printf/ft_printf.h"

void	signed_integer_width_and_precision_manager(t_format *option)
{
	if (option == NULL)
		return ;
	count_digits(option);
	if (option->space_array > (option->number_size
			&& option->precision_array) && option->minus == false)
		print_signed_integer_with_field_width_and_precision(option);
	else if (option->space_array > (option->number_size
			&& option->precision_array) && option->minus == true)
		print_signed_int_with_field_prec_minus(option);
}
