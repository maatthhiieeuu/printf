/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_address_with_precision_and_field_wi          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:06:01 by mboegler          #+#    #+#             */
/*   Updated: 2024/02/07 14:06:04 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

void	print_address_with_precision_and_field_width(t_format *option)
{
	size_t	i;

	i = 0;
	if (option->minus == false)
	{
		option->space_array -= 2;
		while (option->precision_array + i < option->space_array)
		{
			putchar_bonus(option, ' ');
			i++;
		}
		print_address_with_precision(option);
	}
	else if (option->minus == true)
	{
		print_address_with_precision(option);
		option->space_array -= 2;
		while (option->precision_array + i < option->space_array)
		{
			putchar_bonus(option, ' ');
			i++;
		}
	}
}
