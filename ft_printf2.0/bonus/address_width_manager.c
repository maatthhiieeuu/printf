/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   address_width_manager.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:04:15 by mboegler          #+#    #+#             */
/*   Updated: 2024/02/07 14:04:25 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

void	address_width_manager(t_format *option)
{
	if (option->space_array > 0 && option->minus == false)
		print_address_with_field_width(option);
	else if (option->space_array > 0 && option->minus == true)
		print_address_with_field_width_and_minus(option);
	else if (option->space == true && option->space_array == 0)
		print_address_with_a_space(option);
}
