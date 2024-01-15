#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <stdbool.h>
#include "libft.h"
#include "ft_printf.h"

void    recherche_valeur_espace_precision(const char *format, int i, t_format *option) // nom en anglais : process_numeric_option
{
    //printf("\n- Début de traiter_option_numerique :\n\n");
    size_t j;
    char    *point_ptr;

    j = 0;
    point_ptr = NULL;
    compter_pourcent_jusquau_specificateur(format + i, option);
    point_ptr = ft_strnchr(format + i,'.', option->digit_char_until_specifier);
    recuperation_taille_champs(format + i, option);
    if (point_ptr != NULL)
    {
        option->precision = true;
        compter_point_jusquau_specificateur(option, point_ptr);
        while (j < option->digit_point_until_specifier)
        { 
            recherche_precision_negative(point_ptr + j, option);
            if (ft_isdigit(point_ptr[j]) && option->precision_array == 0)
            {
                //option->precision = true;
                recuperation_taille_precision(point_ptr + j, option);
            }
            j++;
        }
    }
}
    


    // printf("\n\nFonction traiter_option_numerique : precision_array = %ld\n\n", option->precision_array);
/*printf("\n\n\n Boucle %d\n", j);
            printf("point_ptr -  -  -  -  = %p\n", point_ptr);
            printf("point_ptr + j -  -  - = %p\n", point_ptr + j);
            printf("option->specifier_ptr = %p\n", option->specifier_ptr);
            getchar();*/