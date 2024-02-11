/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_lowercase_hexadecimal.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:06:14 by mboegler          #+#    #+#             */
/*   Updated: 2024/02/07 14:06:14 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../obligatory/printf/ft_printf.h"

void	print_lowercase_hexadecimal(t_format *option)
{
	int		i;
	int		hexa_num[50];
	char	table_hexadecimal[17];

	i = 0;
	if (option == NULL)
		return ;
	ft_strlcpy(table_hexadecimal, "0123456789abcdef", 17);
	while (option->signed_number != 0)
	{
		hexa_num[i] = option->signed_number % 16;
		option->signed_number /= 16;
		i++;
	}
	i--;
	if (option->hash == true)
		putstr_bonus(option, "0X");
	while (i >= 0)
	{
		putchar_bonus(option, table_hexadecimal[hexa_num[i]]);
		i--;
	}
}
