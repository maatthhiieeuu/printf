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

void	print_pointer_address(const char *format, va_list args, int **i)
{
	uintptr_t	recovery_address;

	recovery_address = va_arg(args, uintptr_t);
	if (recovery_address == 0)
	{
		write(1, "(nil)", 5);
		**i += 1;
	}
	else if (format[**i + 1] == 'p')
	{
		if (recovery_address != 0)
		{
			print_adress(recovery_address);
			**i += 1;
		}
	}
}
