#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <stdbool.h>
#include "libft.h"
#include "ft_printf.h"

void    coordination_distribution_sommaire(va_list args, t_format *option) // nom en anglais : apply_specifier_print_options
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
    else if (option->specifier == 'd')
        gestionnaire_entier_signe_avec_option(args, option);
    /*else if (option->specifier == 'i')
        
    else if (option->specifier == 'u')
        
    else if (option->specifier == 'x')
        
    else if (option->specifier == 'X')
        */
}
