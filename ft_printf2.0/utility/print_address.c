/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_address.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:18:58 by mboegler          #+#    #+#             */
/*   Updated: 2024/02/07 14:19:05 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

void	print_address(uintptr_t num, int *result)
{
	int		i;
	int		hexa_num[50];
	char	hexadecimal_min[17];

	i = 0;
	ft_strlcpy(hexadecimal_min, "0123456789abcdef", 17);
	while (num != 0)
	{
		hexa_num[i] = num % 16;
		num /= 16;
		i++;
	}
	i--;
	ft_putstr_fd("0x", 1);
	*result += 2;
	while (i >= 0)
	{
		ft_putchar_fd(hexadecimal_min[hexa_num[i]], 1);
		*result += 1;
		i--;
	}
}
