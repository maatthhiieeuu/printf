#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include "libft.h"
#include "ft_printf.h"

void    gerer_option_caractere(va_list args, t_format *option) // nom en anglais : manage_char_option
{
    //printf("\nDébut de 10.gerer_option_caractere\n");

    if (option->hash == true)
    {
        option->hash = false;
        if (option->space_array == 0) 
            imprimer_caractere_ignorer_flag(args, option);
    }
    if (option->space == true)
    {
        option->space = false;
        if (option->space_array == 0)
            imprimer_caractere_ignorer_flag(args, option);
    }
    if (option->plus == true)
    {
        option->plus = false;
        if (option->space_array == 0)
            imprimer_caractere_ignorer_flag(args, option);
    }
    if (option->zero == true)
    { 
        option->zero = false;
        if (option->space_array == 0)
            imprimer_caractere_ignorer_flag(args, option);
    }  
    if (option->precision == true)
    {
        option->precision = false;
        if (option->space_array == 0)
            imprimer_caractere_ignorer_flag(args, option);
    }
    if (option->minus == true)
    {
        if (option->space_array == 0)
        {
            option->minus = false;
            imprimer_caractere_ignorer_flag(args, option);
        }
    }
    if (option->space_array > 0)
        imprimer_caractere_avec_espaces(args, option);
}