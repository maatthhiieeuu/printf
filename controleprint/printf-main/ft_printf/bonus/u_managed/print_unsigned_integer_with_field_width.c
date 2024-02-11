/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unsigned_integer_with_field_width.c          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:08:58 by mboegler          #+#    #+#             */
/*   Updated: 2024/02/07 14:08:59 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../obligatory/printf/ft_printf.h"

static void	print_field_width(t_format *option);

void	print_unsigned_integer_with_field_width(t_format *option)
{
	if (option == NULL)
		return ;
	count_digits(option);
	if (option->minus == false)
	{
		print_field_width(option);
		putnbr_bonus(option, option->unsigned_number);
	}
	else if (option->minus == true)
	{
		putnbr_bonus(option, option->unsigned_number);
		print_field_width(option);
	}
}

static void	print_field_width(t_format *option)
{
	size_t	i;

	i = 0;
	if (option == NULL)
		return ;
	if ((option->zero == false) || (option->minus == true
			&& option->zero == true))
	{
		while (option->number_size + i < option->space_array)
		{
			putchar_bonus(option, ' ');
			i++;
		}
	}
	else if (option->zero == true && option->minus == false)
	{
		while (option->number_size + i < option->space_array)
		{
			putchar_bonus(option, '0');
			i++;
		}
	}
}
