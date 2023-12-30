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

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include "libft.h"
#include "ft_printf.h"

void	u_manage(const char *format, va_list args, int **i)
{
	if (format[**i + 1] == 'u')
	{
		unsigned int recovery_number;

		recovery_number = va_arg(args, unsigned int);
		put_unbr(recovery_number);
		**i += 1;
	}
}

/*
%u - Entier non signé en base 10

    '#' : Non applicable.
    ' ' : Non applicable (pas de signe pour les entiers non signés).
    '+' : Non applicable (pas de signe pour les entiers non signés).
*/