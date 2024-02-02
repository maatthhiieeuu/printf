/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   x_manage.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 15:20:27 by mboegler          #+#    #+#             */
/*   Updated: 2023/12/22 15:20:42 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

void	print_hex_lowercase(const char *format, va_list args, int *i, int *result)
{
	int	recovery_number;

	recovery_number = va_arg(args, int);
	if (format[*i + 1] == 'x')
	{
		decimal_to_hex(recovery_number, 'm', result);
		*i += 1;
	}
}
