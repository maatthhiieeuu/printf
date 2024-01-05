#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include "libft.h"
#include "ft_printf.h"

void    envoyer_caracter_impression(va_list args, t_format *option) // nom en anglais : manage_char_option
{
    //printf("\nDébut de 10.gerer_option_caractere\n");
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
    else
        imprimer_caractere_ignorer_flag(args, option);
}
/**/