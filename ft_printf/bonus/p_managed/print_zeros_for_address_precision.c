/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_zeros_for_address_precision.c                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:08:44 by mboegler          #+#    #+#             */
/*   Updated: 2024/02/07 14:08:45 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../obligatory/printf/ft_printf.h"

void	print_zeros_for_address_precision(t_format *option)
{
	size_t	i;

	i = 0;
	if (option == NULL)
		return ;
	if (option->zero == false && option->precision == true)
	{
		while (option->address_size + i - 3 < option->precision_array)
		{
			putchar_bonus(option, '0');
			i++;
		}
	}
	else if (option->zero == true && option->precision == false)
	{
		while (option->address_size + i - 3 < option->precision_array)
		{
			putchar_bonus(option, '0');
			i++;
		}
	}
}
