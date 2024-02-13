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

static void	print_zero(t_format *option);

void	print_uppercase_hexadecimal(t_format *option)
{
	int		i;
	int		hexa_num[18];
	char	table_hexadecimal[17];

	i = 0;
	if (option == NULL)
		return ;
	ft_strlcpy(table_hexadecimal, "0123456789ABCDEF", 17);
	while (option->signed_number != 0)
	{
		hexa_num[i] = option->signed_number % 16;
		option->signed_number /= 16;
		i++;
	}
	
	i--;
	if (option->hash == true)
		putstr_bonus(option, "0X");
	if (option->zero == true)
		print_zero(option);
	while (i >= 0)
	{
		putchar_bonus(option, table_hexadecimal[hexa_num[i]]);
		i--;
	}
}

static void	print_zero(t_format *option)
{
	size_t	i;

	i = 0;
	while (option->number_size + i < option->space_array)
	{
		putchar_bonus(option, '0');
		i++;
	}
}