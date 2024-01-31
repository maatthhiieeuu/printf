/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_manage.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 15:14:58 by mboegler          #+#    #+#             */
/*   Updated: 2023/12/22 15:15:01 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

void	decimal_to_hex(int num, char minmax)
{
	//printf("2");

	int		i;
	int		hexa_num[50];
	char	table_hexadecimal[17];

	i = 0;
	if (minmax == 'm')
		ft_strlcpy(table_hexadecimal, "0123456789abcdef", 17);
	else if (minmax == 'M')
		ft_strlcpy(table_hexadecimal, "0123456789ABCDEF", 17);
	while (num != 0)
	{
		hexa_num[i] = num % 16;
		num /= 16;
		i++;
	}
	i--;
	while (i >= 0)
	{
		ft_putchar_fd(table_hexadecimal[hexa_num[i]], 1);
		i--;
	}
}