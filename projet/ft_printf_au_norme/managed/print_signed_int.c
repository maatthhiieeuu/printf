/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   d_manage.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 14:57:44 by mboegler          #+#    #+#             */
/*   Updated: 2023/12/22 14:57:47 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

void	print_signed_int(const char *format, va_list args, int *i, int *result)
{
	int	recovery_number;

	if (format[*i + 1] == 'd')
	{
		recovery_number = va_arg(args, int);
		putnbr_upper_nine(recovery_number, result);
		*i += 1;
	}
}
