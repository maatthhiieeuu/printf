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
    int space_array;// stockage de la valeur de champs necessaire avec completion d'espace
    int precision_array;
    bool precision; // precision oui ou non
    bool space; //présence d'un espace ou non
    bool zero; // stockage de zero oui ou non 
    bool hash; // stockage de # oui ou non 
    bool minus; // stockage de '-' oui ou non 
    bool plus; // stockage de '+' oui ou non 
}t_format;

int ft_printf(const char *format, ...);
void    imprimer_caractere(const char *format, va_list args, int **i);
void    imprimer_chaine(const char *format, va_list args, int **i);
void    imprimer_adresse_pointeur(const char *format, va_list args, int **i);
void    imprimer_entier_signe(const char *format, va_list args, int **i);
void    imprimer_entier(const char *format, va_list args, int **i);
void    imprimer_entier_non_signe(const char *format, va_list args, int **i);
void    imprimer_hex_minuscule(const char *format, va_list args, int **i);
void    imprimer_hex_majuscule(const char *format, va_list args, int **i);
void    decimal_vers_hexadecimal(int num, char minmax);
void    imprimer_signe_pourcentage(const char *format, int **i);
void    coordinateur_options_et_flags(const char *format, va_list args, int *i, t_format *option);
void    initialiser_options_formatage(t_format *option);
void    rechercher_specificateur(const char *format, int **i, t_format *option);
void    analyser_drapeaux_format(const char *format, int **i, t_format *option);
void    traiter_option_numerique(const char *format, int **i, t_format *option);
void    convertir_espace_chaine_en_entier(const char *s, t_format *option);
int     compter_jusquau_specifieur(const char *format, t_format *option);
void    convertir_precision_chaine_en_entier(const char *s, t_format *option);
void    appliquer_options_impression_specifieur(va_list args, int **i, t_format *option);
void    gerer_option_caractere(va_list args, int **i, t_format *option);
void    imprimer_caractere_avec_espaces(va_list args, int **i, t_format *option);
void    put_adress(uintptr_t num);
void    put_unbr(int n);
void    formater_espace_entier(int n, int size, t_format *option);
void    imprimer_caractere_ignorer_flag(va_list args, t_format *option);


 // nom en anglais : 
#endif