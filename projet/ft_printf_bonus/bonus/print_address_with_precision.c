/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   imprimer_adresse_avec_precision.c                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:09:56 by mboegler          #+#    #+#             */
/*   Updated: 2024/01/16 11:09:58 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

void	print_address_with_precision(t_format *option)
{
	int	i;
	int	hexaNum[17];
	char hexadecimalMin[17];

	i = 0;
	count_address_characters(option);
	ft_strlcpy(hexadecimalMin,"0123456789abcdef",17);
	while (option->address_int != 0)
	{
		hexaNum[i] = option->address_int % 16;
		option->address_int /= 16;
		i++;
	}
	i--;
	putstr_bonus(option, "0x");
	if ((option->precision_array > 0) || (option->zero == true && option->precision == false))
		print_zeros_for_address_precision(option);
	while (i >= 0)
	{
		putchar_bonus(option, hexadecimalMin[hexaNum[i]]);
		i--;
	}
}
