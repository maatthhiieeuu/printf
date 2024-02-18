/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_uppercase_hexadecimal.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:07:12 by mboegler          #+#    #+#             */
/*   Updated: 2024/02/07 14:07:13 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../obligatory/printf/ft_printf.h"

static void	print_number(t_format *option);

void	print_uppercase_hexadecimal(t_format *option)
{
	if (option == NULL)
		return ;
	if (option->signed_number != 0)
		print_number(option);
	else if (option->signed_number == 0 && !(option->precision == true && option->value_precision == false))
		putchar_bonus(option, '0');
}

static void	print_number(t_format *option)
{
	int				i;
	int				hexa_num[18];
	char			table_hexadecimal[17];
	long long int	signed_number_cpy;

	i = 0;
	signed_number_cpy = option->signed_number;
	if (option == NULL)
		return ;
	ft_strlcpy(table_hexadecimal, "0123456789ABCDEF", 17);
	while (signed_number_cpy != 0)
	{
		hexa_num[i] = signed_number_cpy % 16;
		signed_number_cpy /= 16;
		i++;
	}
	i--;
	while (i >= 0)
	{
		putchar_bonus(option, table_hexadecimal[hexa_num[i]]);
		i--;
	}
}

