/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_manage.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 14:57:57 by mboegler          #+#    #+#             */
/*   Updated: 2023/12/22 14:57:59 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

void	print_string(const char *format, va_list args, int **i)
{
	//printf("print_string");

	if (format[**i + 1] == 's')
	{
		ft_putstr_fd(va_arg(args, char *), 1);
		**i += 1;
	}
}
