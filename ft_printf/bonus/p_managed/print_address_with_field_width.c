/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_address_with_field_width.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:05:49 by mboegler          #+#    #+#             */
/*   Updated: 2024/02/07 14:05:50 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../obligatory/printf/ft_printf.h"

void	print_address_with_field_width(t_format *option)
{
	size_t	i;

	i = 0;
	if (option->space == true || option->zero == true)
		putchar_bonus(option, ' ');
	if ((option->specifier == 'p') && (option->address_int != 0))
	{
		count_address_characters(option);
		if (option->space_array > 0 && option->minus == false)
		{
			while (i + option->address_size < option->space_array)
			{
				putchar_bonus(option, ' ');
				i++;
			}
			print_address_bonus(option->address_int, option);
		}
	}
}
