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
#include <stdio.h>
#include <stdarg.h>
#include "libft.h"
#include "ft_printf.h"

void	p_manage(const char *format, va_list args, int **i)
{
	uintptr_t recovery_adress;

	recovery_adress = va_arg(args, uintptr_t);
	if (format[**i + 1] == 'p')
	{
		put_adress(recovery_adress);
		**i += 2;
	}
}

/*
	%p - Pointeur (affiché en hexadécimal)

    '#' : Non applicable, %p affiche déjà 0x par défaut.
    ' ' : Non applicable.
    '+' : Non applicable.
*/