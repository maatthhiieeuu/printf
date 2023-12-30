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

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include "libft.h"
#include "ft_printf.h"

void	s_manage(const char *format, va_list args, int **i)
{
	if (format[**i + 1] == 's')
	{
		ft_putstr_fd(va_arg(args, char *), 1);
		**i += 1;
	}
}

/*
%s - Chaîne de caractères

    '#' : Non applicable.
    ' ' : Non applicable.
    '+' : Non applicable.
*/