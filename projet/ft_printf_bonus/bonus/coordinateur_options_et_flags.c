#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include "libft.h"
#include "ft_printf.h"

void	coordinateur_options_et_flags(const char *format, va_list args, int *i) // nom en anglais : coordinator_options_and_flags
{
    //printf("\nDébut de fonction de coordinateur_options_et_flags\n");
	t_format option;
	initialiser_options_formatage(&option);
	rechercher_specificateur(format, *i, &option);
    if(option.specifier != 0)
	{
   		analyser_drapeaux_format(format, *i, &option);
    	traiter_option_numerique(format, *i, &option);
    	*i += option.digit_char_until_specifier;
    	distribution_aux_gestionnaire_de_specificateur(args, &option);
        
	}


}
/*
printf("*\n\n");
        printf("    ETAT STRUCTURE DE DONNEE : \n");
        printf("        -specifier  -  - = %c\n", option.specifier);
        printf("        -space_array  -  = %ld\n", option.space_array);
        printf("        -precision_array = %ld\n", option.precision_array);
        printf("        -digit_char_until_specifier = %ld\n",option.digit_char_until_specifier);
        printf("        -digit_point_until_specifier = %ld\n",option.digit_point_until_specifier);
        printf("        -Precision  -  - = %s\n", option.precision ? "true" : "false");
        printf("        -Space  -  -  -  = %s\n", option.space ? "true" : "false");
        printf("        -Zero  -  -  -  -= %s\n", option.zero ? "true" : "false");
        printf("        -Hash   -  -  -  = %s\n", option.hash ? "true" : "false");
        printf("        -Minus   -  -  - = %s\n", option.minus ? "true" : "false");
        printf("        -Plus  -  -  -  -= %s\n", option.plus ? "true" : "false");
        printf("        -i  -   -   -   -= %d\n\n", *i);
*/