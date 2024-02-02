/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   imprimer_hexadecimal_majuscule.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:19:07 by mboegler          #+#    #+#             */
/*   Updated: 2024/01/16 11:19:09 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

void	imprimer_hexadecimal_majuscule(t_format *option)
{
	int		i;
	int		hexaNum[50];
	char	tableHexadecimal[17];

	i = 0;
	ft_strlcpy(tableHexadecimal, "0123456789ABCDEF", 17);
	while (option->signed_number != 0)
	{
		hexaNum[i] = option->signed_number % 16;
		option->signed_number /= 16;
		i++;
	}
	i--;
	if (option->hash == true)
		putstr_bonus(option, "0X");
	while (i >= 0)
	{
		putchar_bonus(option, tableHexadecimal[hexaNum[i]]);
		i--;
	}
}
