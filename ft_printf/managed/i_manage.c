/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   i_manage.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 15:18:17 by mboegler          #+#    #+#             */
/*   Updated: 2023/12/22 15:18:31 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include "libft.h"
#include "ft_printf.h"

void	i_manage(const char *format, va_list args, int **i)
{
	if (format[**i + 1] == 'i')
    {
        int recovery_number;
        
        recovery_number = va_arg(args, int);
        ft_putnbr_fd(recovery_number, 1);
        **i += 1;
    }
}

/*
	%i - Entier signé (identique à %d)

    '#' : Non applicable.
    ' ' : Ajoute un espace si le nombre est positif.
    '+' : Affiche le signe (+ ou -) du nombre.
*/

/*Synthèse des Sorties pour %i

    %i = '42' :
        Standard : Affiche le nombre tel quel.
    %5i = ' 42' :
        Avec largeur 5 : Affiche le nombre avec 3 espaces avant (alignement à droite).
    %-5i = '42 ' :
        Avec largeur -5 : Affiche le nombre avec 3 espaces après (alignement à gauche).
    %05i = '00042' :
        Avec 0 et largeur 5 : Affiche le nombre avec des zéros au début pour atteindre une largeur de 5.
    %.3i = '042' :
        Avec .3 (précision) : Affiche le nombre avec des zéros au début pour atteindre une précision de 3.
    %5.3i = ' 042' :
        Avec largeur et précision : Combine largeur et précision, ajoutant des espaces et des zéros comme nécessaire.
    %+i = '+42' :
        Avec drapeau + : Ajoute un signe '+' devant le nombre positif.
    %' i = ' 42' :
        Avec drapeau ' ' : Ajoute un espace devant le nombre pour indiquer la positivité.
    %#i = '42' :
        Avec drapeau # (non pertinent pour i) : Comportement identique au standard.
    %-05i = '42 ' :
        Avec drapeau - et 0 : L'alignement à gauche (-) prévaut, les zéros ne sont pas ajoutés.*/