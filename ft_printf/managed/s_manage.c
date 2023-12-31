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

/*Synthèse des Sorties pour %s

    %s = 'exemple' :
        Standard : Affiche la chaîne de caractères telle quelle.
    %10s = ' exemple' :
        Avec largeur 10 : Affiche la chaîne avec 3 espaces avant (alignement à droite).
    %-10s = 'exemple ' :
        Avec largeur -10 : Affiche la chaîne avec 3 espaces après (alignement à gauche).
    %0s = 'exemple' :
        Avec 0 (non standard pour s) : Comportement identique au standard.
    %.5s = 'exemp' :
        Avec .5 (précision) : Affiche les 5 premiers caractères de la chaîne.
    %10.5s = ' exemp' :
        Avec largeur et précision : Affiche les 5 premiers caractères avec 5 espaces avant (alignement à droite).
    %+s = 'exemple' :
        Avec drapeau + (non pertinent pour s) : Comportement identique au standard.
    %' s = 'exemple' :
        Avec drapeau ' ' (non pertinent pour s) : Comportement identique au standard.
    %#s = 'exemple' :
        Avec drapeau # (non pertinent pour s) : Comportement identique au standard.
    %-0s = 'exemple' :
        Avec drapeau - et 0 : Comportement identique au standard.

Ces résultats montrent comment printf gère les chaînes de caractères avec différents paramètres de formatage. Pour le prochain format, veuillez me dire lequel vous souhaitez tester ensuite (%d, %i, %u, %x, %X, %p) et je vous fournirai le code de test correspondant.*/