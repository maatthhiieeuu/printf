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
    size_t address_size;
    uintptr_t address_int;
    long long int signed_number;
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

void    compter_caractere_adresse(t_format *option);
void    compter_point_jusquau_specificateur(t_format *option, char *point_ptr);
void    compter_pourcent_jusquau_specificateur(const char *format, t_format *option);
void    coordination_distribution_sommaire(va_list args, t_format *option);
void    coordination_initialisation_structure(const char *format, va_list args, int *i);
void    envoyer_caractere_impression(va_list args, t_format *option);
void    gestionnaire_adresse_avec_largeur_de_champs(t_format *option);
void    gestionnaire_adresse_avec_option(va_list args, t_format *option);
void    gestionnaire_adresse_avec_precision(t_format *option);
void    gestionnaire_adresse_avec_precision_et_largeur_de_champs(t_format *option);
void    gestionnaire_caractere_avec_option(va_list args, t_format *option);
void    gestionnaire_chaine_avec_option(va_list args, t_format *option);
void    gestionnaire_entier_signe_avec_option(va_list args, t_format *option);
void    imprimer_adresse_avec_largeur_de_champs(t_format *option);
void    imprimer_adresse_avec_largeur_de_champs_et_minus(t_format *option);
void    imprimer_adresse_avec_plus(t_format *option);
void    imprimer_adresse_avec_precision(t_format *option);
void    imprimer_adresse_avec_precision_et_largeur_de_champs(t_format *option);
void    imprimer_adresse_avec_un_espace(t_format *option);
void    imprimer_caractere_avec_espace(va_list args, t_format *option);
void    imprimer_caractere_sans_flag(va_list args, t_format *option);
void    imprimer_chaine_avec_espace(t_format *option, size_t size, char *string);
void    imprimer_chaine_avec_minus_precision_et_espace(t_format *option, char *string, size_t size_string);
void    imprimer_chaine_avec_precision_et_espace(t_format *option, char *string, size_t size_string);
void    imprimer_zero_pour_precision_adresse(t_format *option);
void    initialisation_par_default_structure(t_format *option);
void    recherche_drapeaux(const char *format, int i, t_format *option);
void    recherche_specificateur(const char *format, int i, t_format *option);
void    recherche_valeur_espace_precision(const char *format, int i, t_format *option);
void    recuperation_taille_champs(const char *s, t_format *option);
void    recuperation_taille_precision(const char *s, t_format *option);

#endif