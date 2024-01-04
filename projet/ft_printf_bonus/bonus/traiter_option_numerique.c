#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <stdbool.h>
#include "libft.h"
#include "ft_printf.h"

void    traiter_option_numerique(const char *format, int i, t_format *option) // nom en anglais : process_numeric_option
{
    //printf("\nDébut de 7.traiter_option_numerique\n");

    char    *point_ptr;

    point_ptr = NULL;
    option->digit_char_until_specifier = compter_jusquau_specifieur(format + i, option);
    if (option->precision == false)
        convertir_espace_chaine_en_entier(format + i, option);
    else if (option->precision == true)
    {
        point_ptr = ft_strnchr(format,'.', option->digit_char_until_specifier);
        convertir_precision_chaine_en_entier(point_ptr, option);
    }
}