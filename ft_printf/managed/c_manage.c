/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_manage.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 14:58:13 by mboegler          #+#    #+#             */
/*   Updated: 2023/12/22 14:58:32 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
#include "libft.h"
#include "ft_printf.h"

void	c_manage(const char *format, va_list args, int **i)
{
	if (format[**i + 1] == 'c')
	{
		char recovery_number;

		recovery_number = va_arg(args, int);
		ft_putchar_fd(recovery_number, 1);
		**i += 1;
	}
}

/*
%c - Caractère

    '#' : Non applicable.
    ' ' : Non applicable.
    '+' : Non applicable.
*/