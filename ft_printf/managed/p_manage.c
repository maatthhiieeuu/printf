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
#include <stdint.h>
#include "libft.h"
#include "ft_printf.h"

void	p_manage(const char *format, va_list args, int **i)
{
	uintptr_t recovery_adress;

	recovery_adress = va_arg(args, uintptr_t);
	if (format[**i + 1] == 'p')
	{
		if (recovery_adress != 0)
		{
			put_adress(recovery_adress);
			**i += 1;
		}
		
	}
}

/*
	%p - Pointeur (affiché en hexadécimal)

    '#' : Non applicable, %p affiche déjà 0x par défaut.
    ' ' : Non applicable.
    '+' : Non applicable.
*/

/*Synthèse des Sorties pour %p

    %p = '0x7ffd397bc814' :
        Standard : Affiche l'adresse mémoire avec le préfixe '0x'.
    %20p = ' 0x7ffd397bc814' :
        Avec largeur 20 : Affiche l'adresse avec des espaces avant pour atteindre une largeur de 20 (alignement à droite).
    %-20p = '0x7ffd397bc814 ' :
        Avec largeur -20 : Affiche l'adresse avec des espaces après pour atteindre une largeur de 20 (alignement à gauche).
    %0p = '0x7ffd397bc814' :
        Avec 0 (non standard pour p) : Comportement identique au standard.
    %+p = '+0x7ffd397bc814' :
        Avec drapeau + (non pertinent pour p) : Affiche '+' suivi de l'adresse, bien que cela ne soit pas standard.
    %' p = ' 0x7ffd397bc814' :
        Avec drapeau ' ' (non pertinent pour p) : Ajoute un espace avant l'adresse, bien que cela ne soit pas standard.
    %#p = '0x7ffd397bc814' :
        Avec drapeau # (non pertinent pour p) : Comportement identique au standard.
    %-0p = '0x7ffd397bc814' :
        Avec drapeau - et 0 : Comportement identique au standard.

Il est important de noter que certains comportements, comme l'utilisation des drapeaux '+' et ' ', ne sont pas standard pour %p et peuvent varier selon les implémentations de printf. Pour le prochain test, veuillez me dire quel format vous souhaitez explorer ensuite (%u, %x, %X).*/