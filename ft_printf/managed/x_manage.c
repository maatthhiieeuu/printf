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

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include "libft.h"
#include "ft_printf.h"

void	x_manage(const char *format, va_list args, int **i)
{
	int recovery_number;

    recovery_number = va_arg(args, int);
    if (format[**i + 1] == 'x')
    {
        dectohex(recovery_number, 'm');
        **i += 1;
    }
}

/*
	%x - Entier non signé en hexadécimal (minuscules)

    # : Ajoute le préfixe 0x si le nombre n'est pas zéro.
    : Non applicable.
    + : Non applicable.
*/