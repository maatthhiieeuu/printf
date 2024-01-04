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

#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
#include "libft.h"
#include "ft_printf.h"

void	decimal_to_hex(int num, char minmax)
{
    //printf("\nDébut de decimal_vers_hexadecimal\n"); 
	int	i;
	int	hexaNum[50];
	char tableHexadecimal[17];

	i = 0;
	if(minmax == 'm')
		ft_strlcpy(tableHexadecimal, "0123456789abcdef", 17);
	else if (minmax == 'M')
		ft_strlcpy(tableHexadecimal, "0123456789ABCDEF", 17);
	while (num != 0)
	{
		hexaNum[i] = num % 16;
		num /= 16;
		i++;
	}
	i--;
	while (i >= 0)
	{
		ft_putchar_fd(tableHexadecimal[hexaNum[i]], 1);
		i--;
	}
	
}