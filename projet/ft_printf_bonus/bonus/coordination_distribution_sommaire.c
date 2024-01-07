#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <stdbool.h>
#include "libft.h"
#include "ft_printf.h"

void    coordination_distribution_sommaire(va_list args, t_format *option) // nom en anglais : apply_specifier_print_options
{
    //printf("\nDébut de coordination_distribution_sommaire\n");
    if (option->specifier == 'c')
        gestionnaire_caractere_avec_option(args, option);
    else if (option->specifier == 's')
        gestionnaire_chaine_avec_option(args, option);
    else if (option->specifier == 'p')
        gestionnaire_adresse_avec_option(args, option);
    /*else if (option->specifier == 'd')
        
    else if (option->specifier == 'i')
        
    else if (option->specifier == 'u')
        
    else if (option->specifier == 'x')
        
    else if (option->specifier == 'X')
        */
}
