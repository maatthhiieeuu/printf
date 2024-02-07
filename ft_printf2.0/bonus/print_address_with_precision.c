/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_address_with_precision.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:09:45 by mboegler          #+#    #+#             */
/*   Updated: 2024/02/07 14:09:46 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

void	print_address_with_precision(t_format *option)
{
	int		i;
	int		hexa_num[17];
	char	hexadecimal_min[17];

	i = 0;
	count_address_characters(option);
	ft_strlcpy(hexadecimal_min, "0123456789abcdef", 17);
	while (option->address_int != 0)
	{
		hexa_num[i] = option->address_int % 16;
		option->address_int /= 16;
		i++;
	}
	i--;
	putstr_bonus(option, "0x");
	if ((option->precision_array > 0) || (option->zero == true
			&& option->precision == false))
		print_zeros_for_address_precision(option);
	while (i >= 0)
	{
		putchar_bonus(option, hexadecimal_min[hexa_num[i]]);
		i--;
	}
}
