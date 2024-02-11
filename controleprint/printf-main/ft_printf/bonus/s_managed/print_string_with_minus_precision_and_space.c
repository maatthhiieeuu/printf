/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_string_with_minus_precision_and_spa          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:06:44 by mboegler          #+#    #+#             */
/*   Updated: 2024/02/07 14:06:45 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../obligatory/printf/ft_printf.h"

void	print_string_with_minus_precision_and_space(t_format *option,
		char *string, size_t size_string)
{
	size_t	j;

	j = 0;
	if (option == NULL || string == NULL)
		return ;
	if (option->minus == true)
	{
		putnstr_bonus(option, string, option->precision_array);
		if (option->precision_array < size_string)
		{
			while ((j) < (option->space_array - option->precision_array))
			{
				putchar_bonus(option, ' ');
				j++;
			}
		}
		else if (option->precision_array > size_string)
		{
			while ((j) < (option->space_array - size_string))
			{
				putchar_bonus(option, ' ');
				j++;
			}
		}
	}
}
