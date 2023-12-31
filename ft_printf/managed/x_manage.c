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
/* Synthèse des Sorties pour %x

    %x = '2a' :
        Standard : Affiche le nombre en hexadécimal.
    %5x = ' 2a' :
        Avec largeur 5 : Affiche le nombre avec 3 espaces avant (alignement à droite).
    %-5x = '2a ' :
        Avec largeur -5 : Affiche le nombre avec 3 espaces après (alignement à gauche).
    %05x = '0002a' :
        Avec 0 et largeur 5 : Affiche le nombre avec des zéros au début pour atteindre une largeur de 5.
    %.3x = '02a' :
        Avec .3 (précision) : Affiche le nombre avec des zéros au début pour atteindre une précision de 3.
    %5.3x = ' 02a' :
        Avec largeur et précision : Combine largeur et précision, ajoutant des espaces et des zéros comme nécessaire.
    %+x = '2a' :
        Avec drapeau + (non pertinent pour x) : Comportement identique au standard.
    %' x = '2a' :
        Avec drapeau ' ' (non pertinent pour x) : Comportement identique au standard.
    %#x = '0x2a' :
        Avec drapeau # : Ajoute '0x' avant le nombre pour indiquer un format hexadécimal.
    %-05x = '2a ' :
        Avec drapeau - et 0 : L'alignement à gauche (-) prévaut, les zéros ne sont pas ajoutés. */