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

void	imprimer_entier_non_signe(const char *format, va_list args, int **i) // nom en anglais : print_unsigned_int
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
/* Synthèse des Sorties pour %u

    %u = '42' :
        Standard : Affiche le nombre non signé tel quel.
    %5u = ' 42' :
        Avec largeur 5 : Affiche le nombre avec 3 espaces avant (alignement à droite).
    %-5u = '42 ' :
        Avec largeur -5 : Affiche le nombre avec 3 espaces après (alignement à gauche).
    %05u = '00042' :
        Avec 0 et largeur 5 : Affiche le nombre avec des zéros au début pour atteindre une largeur de 5.
    %.3u = '042' :
        Avec .3 (précision) : Affiche le nombre avec des zéros au début pour atteindre une précision de 3.
    %5.3u = ' 042' :
        Avec largeur et précision : Combine largeur et précision, ajoutant des espaces et des zéros comme nécessaire.
    %+u = '42' :
        Avec drapeau + (non pertinent pour u) : Comportement identique au standard.
    %' u = '42' :
        Avec drapeau ' ' (non pertinent pour u) : Comportement identique au standard.
    %#u = '42' :
        Avec drapeau # (non pertinent pour u) : Comportement identique au standard.
    %-05u = '42 ' :
        Avec drapeau - et 0 : L'alignement à gauche (-) prévaut, les zéros ne sont pas ajoutés. */