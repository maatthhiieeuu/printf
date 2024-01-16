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

void	print_adress(uintptr_t num)
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
	while (i >= 0)
	{
		ft_putchar_fd(hexadecimal_min[hexa_num[i]], 1);
		i--;
	}
}
