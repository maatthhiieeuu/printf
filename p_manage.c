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

void	p_manage(const char *format, va_list args, int **i)
{
	if (format[**i + 1] == 'p')
	{
		
	}

/*
	%p - Pointeur (affiché en hexadécimal)

    '#' : Non applicable, %p affiche déjà 0x par défaut.
    ' ' : Non applicable.
    '+' : Non applicable.
*/