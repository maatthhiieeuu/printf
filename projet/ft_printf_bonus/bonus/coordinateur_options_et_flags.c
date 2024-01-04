#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include "libft.h"
#include "ft_printf.h"

void	coordinateur_options_et_flags(const char *format, va_list args, int *i) // nom en anglais : coordinator_options_and_flags
{
//printf("\nDébut de fonction de 3.coordinateur_options_et_flags\n");
	t_format option;
	initialiser_options_formatage(&option);
	rechercher_specificateur(format, *i, &option);
	if(option.specifier != 0)
	{
   		analyser_drapeaux_format(format, *i, &option);
    	analyse_option_numerique(format, *i, &option);
    	traiter_option_numerique(format, *i, &option);
    	*i += option.digit_char_until_specifier;
    	impression_avec_application_option(args, &option);
	}


}