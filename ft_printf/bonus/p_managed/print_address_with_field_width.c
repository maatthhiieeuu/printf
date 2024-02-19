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

static void	with_minus(t_format *option);
static void	without_minus(t_format *option);

void	print_address_with_field_width(t_format *option)
{
	if (option == NULL)
		return ;
	count_digits_hex(option);
	if (option->minus == false)
		without_minus(option);
	else if (option->minus == true)
		with_minus(option);
}

static void	with_minus(t_format *option)
{
	size_t	i;

	i = 0;
	if (option == NULL)
		return ;
	if (option->space_array > 0)
	{
		print_address_bonus(option->address_int, option);
		while (option->address_size + i < option->space_array)
		{
			putchar_bonus(option, ' ');
			i++;
		}
	}
}

static void	without_minus(t_format *option)
{
	size_t	i;

	i = 0;
	if (option == NULL)
		return ;
	if ((option->address_int != 0))
	{
		if (option->space_array > 0 && option->minus == false)
		{
			while (option->address_size + i < option->space_array)
			{
				putchar_bonus(option, ' ');
				i++;
			}
			print_address_bonus(option->address_int, option);
		}
	}
}
