#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <stdbool.h>
#include "libft.h"
#include "ft_printf.h"

void    impression_avec_application_option(va_list args, t_format *option) // nom en anglais : apply_specifier_print_options
{
    //printf("\nDébut de 9.appliquer_options_impression_specifieur\n");
    if (option->specifier == 'c')
        gerer_option_caractere(args, option);
    else if (option->specifier == 's')
        gerer_option_chaine(args, option);
    /*else if (option->specifier == 'p')
        
    else if (option->specifier == 'd')
        
    else if (option->specifier == 'i')
        
    else if (option->specifier == 'u')
        
    else if (option->specifier == 'x')
        
    else if (option->specifier == 'X')
        */
}
