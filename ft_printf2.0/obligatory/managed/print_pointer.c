/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_pointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:17:39 by mboegler          #+#    #+#             */
/*   Updated: 2024/02/07 14:17:51 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../printf/ft_printf.h"

void	print_pointer(va_list args, int *i, int *result)
{
	uintptr_t	recovery_address;

	recovery_address = va_arg(args, uintptr_t);
	if (recovery_address == 0)
	{
		write(1, "(nil)", 5);
		*i += 1;
		*result += 5;
	}
	else
	{
		print_address(recovery_address, result);
		*i += 1;
	}
}
