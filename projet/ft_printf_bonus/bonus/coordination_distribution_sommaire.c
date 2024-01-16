/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   coordination_distribution_sommaire.c               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:00:21 by mboegler          #+#    #+#             */
/*   Updated: 2024/01/16 11:02:21 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <stdbool.h>
#include "libft.h"
#include "ft_printf.h"

void    coordination_distribution_sommaire(const char *format, va_list args, int *i, t_format *option) // nom en anglais : apply_specifier_print_options
{
    //printf("\nDébut de coordination_distribution_sommaire\n");
    /*printf("\n    ETAT STRUCTURE DE DONNEE : \n");
        printf("        -specifier  -  - = %c\n", option->specifier);
        printf("        -space_array  -  = %ld\n", option->space_array);
        printf("        -precision_array = %ld\n", option->precision_array);
        printf("        -digit_char_until_specifier = %ld\n",option->digit_char_until_specifier);
        printf("        -digit_point_until_specifier = %ld\n",option->digit_point_until_specifier);
        printf("        -address_size -  = %ld\n",option->address_size);
        printf("        -address_int  -  = %ld\n",option->address_int);
        printf("        -Precision  -  - = %s\n", option->precision ? "true" : "false");
        printf("        -Negative_precision  -  - = %s\n", option->negative_precision ? "true" : "false");
        printf("        -Space  -  -  -  = %s\n", option->space ? "true" : "false");
        printf("        -Zero  -  -  -  -= %s\n", option->zero ? "true" : "false");
        printf("        -Hash   -  -  -  = %s\n", option->hash ? "true" : "false");
        printf("        -Minus   -  -  - = %s\n", option->minus ? "true" : "false");
        printf("        -Plus  -  -  -  -= %s\n", option->plus ? "true" : "false");*/
    if (option->specifier == 'c')
        gestionnaire_caractere_avec_option(args, option);
    else if (option->specifier == 's')
        gestionnaire_chaine_avec_option(args, option);
    else if (option->specifier == 'p')
        gestionnaire_adresse_avec_option(args, option);
    else if (option->specifier == 'd' || option->specifier == 'i')
        gestionnaire_entier_signe_avec_option(format, args, i, option); 
    else if (option->specifier == 'u')
        gestionnaire_entier_non_signe_avec_option(format, args, i, option); 
    else if (option->specifier == 'x')
        gestionnaire_hexadecimal_minuscule(format, args, i, option);
   else if (option->specifier == 'X')
        gestionnaire_hexadecimal_majuscule(format, args, i, option);
}
