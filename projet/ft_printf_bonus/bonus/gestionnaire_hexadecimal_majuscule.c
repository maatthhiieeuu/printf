#include "libft.h"
#include "ft_printf.h"

void    gestionnaire_hexadecimal_majuscule(const char *format, va_list args, int *i, t_format *option)
{
    //printf("\nDébut de gestionnaire_hexadecimal_majuscule\n"); 
    option->signed_number = va_arg(args, long long int);
    if (option->negative_precision == true)
        imprimer_format_brut(format, i, option);
    else
        imprimer_hexadecimal_majuscule(option);
}
 