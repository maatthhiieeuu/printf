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

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include "libft.h"
#include "ft_printf.h"

void	d_manage(const char *format, va_list args, int **i)
{
	if (format[**i + 1] == 'd')
	{
		int recovery_number;
		
		recovery_number = va_arg(args, int);
		ft_putnbr_fd(recovery_number, 1);
		**i += 1;
	}
}
/*
%d - Entier signé en base 10

    '#' : Non applicable.
    ' ': Ajoute un espace si le nombre est positif.
    '+' : Affiche le signe (+ ou -) du nombre.
*/