/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   u_manage.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 14:57:27 by mboegler          #+#    #+#             */
/*   Updated: 2023/12/22 14:57:31 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

void	print_unsigned_int(const char *format, va_list args, int **i)
{
	long unsigned int	recovery_number;

	if (format[**i + 1] == 'u')
	{
		recovery_number = va_arg(args, unsigned int);
		put_unbr(recovery_number);
		**i += 1;
	}
}
