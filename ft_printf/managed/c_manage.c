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

/*D'accord, je vais reformuler la synthèse des sorties pour %c en suivant le format que vous avez suggéré :
Synthèse des Sorties pour %c

    %c = 'a' :
        Standard : Affiche le caractère tel quel.
    %5c = ' a' :
        Avec largeur 5 : Affiche le caractère avec 4 espaces avant (alignement à droite).
    %-5c = 'a ' :
        Avec largeur -5 : Affiche le caractère avec 4 espaces après (alignement à gauche).
    %0c = 'a' :
        Avec 0 (non pertinent pour c) : Comportement identique au standard.
    %.c = 'a' :
        Avec . (non pertinent pour c) : Comportement identique au standard.
    %5.3c = ' a' :
        Avec largeur et précision : Ignore la précision, se comporte comme avec une largeur spécifiée.
    %+c = 'a' :
        Avec drapeau + (non pertinent pour c) : Comportement identique au standard.
    %' c = 'a' :
        Avec drapeau ' ' (non pertinent pour c) : Comportement identique au standard.
    %#c = 'a' :
        Avec drapeau # (non pertinent pour c) : Comportement identique au standard.
    %-0c = 'a' :
        Avec drapeau - et 0 : Comportement identique au standard.*/