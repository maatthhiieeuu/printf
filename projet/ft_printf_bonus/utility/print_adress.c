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
#include <stdarg.h>
#include <stdint.h>
#include "libft.h"
#include "ft_printf.h"

void	print_adress(uintptr_t num)
{
    //printf("\nDébut de print_adress\n"); 
	int	i;
	int	hexaNum[50];
	char hexadecimalMin[17];

	i = 0;
	ft_strlcpy(hexadecimalMin,"0123456789abcdef",17);
	while (num != 0)
	{
		hexaNum[i] = num % 16;
		num /= 16;
		i++;
	}
	i--;
	ft_putstr_fd("0x", 1);
	while (i >= 0)
	{
		ft_putchar_fd(hexadecimalMin[hexaNum[i]], 1);
		i--;
	}
}