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

void	imprimer_caractere(const char *format, va_list args, int **i) // nom en anglais : print_character
{
    printf("\nDébut de .imprimer_caractere\n");
	if (format[**i + 1] == 'c')
	{
		char recovery_number;

		recovery_number = va_arg(args, int);
		ft_putchar_fd(recovery_number, 1);
		**i += 1;
	}
}

/*----------------------------------------------------------------------------*/

void    gerer_option_caractere(va_list args, int **i, t_format *option) // nom en anglais : manage_char_option
{
    printf("\nDébut de 10.gerer_option_caractere\n");
    getchar();
    if (option->hash == true)
        option->hash = false;
    if (option->space == true)
        option->space = false;
    if (option->plus == true)
        option->plus = false;
    if (option->zero == true)
        option->zero = false;
    if (option->precision == true)
        option->precision = false;
    printf("ETAT STRUCTURE DE DONNEE : \nFin de fonction gerer_option_caractere\n");
    printf("specifier  -  - = %c\n", option->specifier);
    printf("space_array  -  = %d\n", option->space_array);
    printf("precision_array = %d\n", option->precision_array);
    printf("zero  -  -  -  -= %s\n", option->zero ? "true" : "false");
    printf("precision  -  - = %s\n", option->precision ? "true" : "false");
    printf("space  -  -  -  = %s\n", option->space ? "true" : "false");
    printf("hash   -  -  -  = %s\n", option->hash ? "true" : "false");
    printf("minus   -  -  - = %s\n", option->minus ? "true" : "false");
    printf("plus  -  -  -  -= %s\n", option->plus ? "true" : "false");
    getchar();
    if (option->space_array > 0)
        imprimer_caractere_avec_espaces(args, i, option);


}
/*
%c - Caractère

    '#' : Non applicable.
    ' ' : Non applicable.
    '+' : Non applicable.
*/

/*  Synthèse des Sorties pour %c

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