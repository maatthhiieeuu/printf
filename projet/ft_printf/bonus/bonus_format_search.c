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
#include <stdbool.h>
#include "libft.h"
#include "ft_printf.h"

void    initialiser_options_formatage(t_format *option) // nom en anglais : initialize_format_options    
{
    //printf("\nDébut de 4.initialiser_options_formatage\n");
    option->specifier = 0;
    option->space_array = 0;
    option->precision_array = -1;
    option->precision = false;
    option->space = false;
    option->zero = false;
    option->hash = false;
    option->minus = false;
    option->plus = false;



}

/*----------------------------------------------------------------------------*/

void	rechercher_specificateur(const char *format, int **i, t_format *option) // nom en anglais : find_specifier
{
    //printf("\nDébut de 5.rechercher_specificateur : \n");
    int j;
    int index;
    char tab_char[] = "cspdiuxX";
    index = **i;
    j = 0;
    while (format[index] != '\0')
    {
        j = 0;
        while (tab_char[j] != '\0')
        {
            if (format[index] == tab_char[j])
            {
                option->specifier = tab_char[j];
                //printf("Specificateur = %c\n",option->specifier);
                analyser_drapeaux_format(format, i, option);
            }
            j++;
        }
        index++;
    }
}

/*----------------------------------------------------------------------------*/

void    analyser_drapeaux_format(const char *format, int **i, t_format *option) // nom en anglais : parse_format_flags
{
    //printf("\nDébut de 6.analyser_drapeaux_format : \n");
    int index;
    bool flag_digit;

    index = **i;
    flag_digit = false;
    while (format[index] != option->specifier && format[index])
    {
        if (format[index] == '#')
            option->hash = true;
        else if (format[index] == '-')
            option->minus = true;
        else if (format[index] == '+')
            option->plus = true;
        else if (format[index] == '0')
            option->zero = true;
        else if (format[index] == ' ')
            option->space = true;
        else if (format[index] == '.')
        {
            flag_digit = false;
            option->precision = true;
        }
        /*printf("Analyse des drapeaux en cours dans la fonction 6.analyser_drapeaux_format : \n");
        printf("Zero  -  -  -  -= %s\n", option->zero ? "true" : "false");
        printf("Space  -  -  -  = %s\n", option->space ? "true" : "false");
        printf("Hash   -  -  -  = %s\n", option->hash ? "true" : "false");
        printf("Minus   -  -  - = %s\n", option->minus ? "true" : "false");
        printf("Plus  -  -  -  -= %s\n", option->plus ? "true" : "false");
        printf("Precision  -  - = %s\n\n", option->precision ? "true" : "false");*/
        if ((format[index] != '0') && (ft_isdigit(format[index])) && (flag_digit == false))
        {
            flag_digit = true;
            traiter_option_numerique(format, i, option);
        }
        index++;
    }
    //printf("ETAT STRUCTURE DE DONNEE : \nFin de fonction 6.analyser_drapeaux_format\n\n");
}

/*----------------------------------------------------------------------------*/

void    traiter_option_numerique(const char *format, int **i, t_format *option) // nom en anglais : process_numeric_option
{
    //printf("\nDébut de 7.traiter_option_numerique\n");
    int     index;
    char    *point_ptr;
    int number_until_specifier;

    index = **i;
    point_ptr = NULL;
    number_until_specifier = 0;

    if (option->precision == false)
        convertir_espace_chaine_en_entier(format + index, option);
    else if (option->precision == true)
    {
        number_until_specifier = compter_jusquau_specifieur(format + index, option);
        printf("valeur de i avant = %d", **i);
        **i += number_until_specifier - 1;
        printf("valeur de i apres = %d", **i);
        point_ptr = ft_strnchr(format,'.', number_until_specifier);
        convertir_precision_chaine_en_entier(point_ptr, option);
    }
    /*printf("ETAT STRUCTURE DE DONNEE : \nFin de fonction 7.traiter_option_numerique\n");
    printf("specifier  -  - = %c\n", option->specifier);
    printf("space_array  -  = %d\n", option->space_array);
    printf("precision_array = %d\n", option->precision_array);
    printf("Zero  -  -  -  -= %s\n", option->zero ? "true" : "false");
    printf("Space  -  -  -  = %s\n", option->space ? "true" : "false");
    printf("Hash   -  -  -  = %s\n", option->hash ? "true" : "false");
    printf("Minus   -  -  - = %s\n", option->minus ? "true" : "false");
    printf("Plus  -  -  -  -= %s\n", option->plus ? "true" : "false");
    printf("Precision  -  - = %s\n", option->precision ? "true" : "false");
    printf("i = %d\n\n", **i);*/


}

/*----------------------------------------------------------------------------*/

void    appliquer_options_impression_specifieur(va_list args, int **i, t_format *option) // nom en anglais : apply_specifier_print_options
{
    //printf("\nDébut de 9.appliquer_options_impression_specifieur\n");
    //getchar();
    if (option->specifier == 'c')
        gerer_option_caractere(args, i, option);
    /*else if (option->specifier == 's')
        s_manage(format, args);
    else if (option->specifier == 'p')
        p_manage(format, args, i);
    else if (option->specifier == 'd')
        d_manage(format, args, i);
    else if (option->specifier == 'i')
        i_manage(format, args, i);
    else if (option->specifier == 'u')
        u_manage(format, args, i);
    else if (option->specifier == 'x')
        x_manage(format, args, i);
    else if (option->specifier == 'X')
        X_manage(format, args, i);*/
}

