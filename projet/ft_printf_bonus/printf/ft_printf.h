/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <mboegler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 15:24:33 by mboegler          #+#    #+#             */
/*   Updated: 2023/12/08 14:00:33 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include "libft.h"

typedef struct s_format
{
    char specifier; //stockage du format exemple specifier = 'd' pour un entier 
    size_t space_array; // stockage de la valeur de champs necessaire avec completion d'espace
    size_t precision_array;
    size_t digit_char_until_specifier;
    size_t digit_point_until_specifier;
    bool precision; // precision oui ou non
    bool space; //présence d'un espace ou non
    bool zero; // stockage de zero oui ou non 
    bool hash; // stockage de # oui ou non 
    bool minus; // stockage de '-' oui ou non 
    bool plus; // stockage de '+' oui ou non 
}t_format;

/*----------------------      PARTIE OBLIGATOIRE                   ----------------------------*/

int     ft_printf(const char *format, ...);
void    print_character(const char *format, va_list args, int **i);
void    print_hex_lowercase(const char *format, va_list args, int **i);
void    print_hex_uppercase(const char *format, va_list args, int **i);
void    print_integer(const char *format, va_list args, int **i);
void    print_percent_sign(const char *format, int **i);
void    print_pointer_address(const char *format, va_list args, int **i);
void    print_signed_int(const char *format, va_list args, int **i);
void    print_string(const char *format, va_list args, int **i);
void    print_unsigned_int(const char *format, va_list args, int **i);
void    decimal_to_hex(int num, char minmax);
void    print_adress(uintptr_t num);
void    put_unbr(unsigned int n);

/*-----------------------         PARTIE BONUS                -------------------------*/

void    analyser_drapeaux_format(const char *format, int i, t_format *option);
void    compter_point_jusquau_specifieur(t_format *option, char *point_ptr);
void    compter_pourcent_jusquau_specifieur(const char *format, t_format *option);
void    convertir_espace_chaine_en_entier(const char *s, t_format *option);
void    convertir_precision_chaine_en_entier(const char *s, t_format *option);
void    coordinateur_options_et_flags(const char *format, va_list args, int *i);
void    distribution_aux_gestionnaire_de_specificateur(va_list args, t_format *option);
void    envoyer_caracter_impression(va_list args, t_format *option);
void    gerer_option_caractere(va_list args, t_format *option);
void    gerer_option_chaine(va_list args, t_format *option);
void    imprimer_caractere_avec_espaces(va_list args, t_format *option);
void    imprimer_caractere_ignorer_flag(va_list args, t_format *option);
void    imprimer_chaine_avec_espace(t_format *option, size_t size, char *string);
void    imprimer_chaine_avec_minus_precision_et_espace(t_format *option, char *string, size_t size_string);
void    imprimer_chaine_avec_precision_et_espace(t_format *option, char *string, size_t size_string);
void    initialiser_options_formatage(t_format *option);
void    rechercher_specificateur(const char *format, int i, t_format *option);
void    traiter_option_numerique(const char *format, int i, t_format *option);
void    trouver_specifieur(const char *format, t_format *option);

#endif