#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include "libft.h"
#include "ft_printf.h"

void	coordinateur_options_et_flags(const char *format, va_list args, int *i, t_format *option) // nom en anglais : coordinator_options_and_flags
{
	printf("\nDébut de fonction de 3.coordinateur_options_et_flags\n");
	initialiser_options_formatage(option);
	printf("ETAT STRUCTURE DE DONNEE : \nFin de fonction 4.initialiser_options_formatage\n");
    printf("specifier  -  - = %c\n", option->specifier);
    printf("space_array  -  = %d\n", option->space_array);
    printf("precision_array = %d\n", option->precision_array);
    printf("\nZero  -  -  -  -= %s\n", option->zero ? "true" : "false");
    printf("Space  -  -  -  = %s\n", option->space ? "true" : "false");
    printf("Hash   -  -  -  = %s\n", option->hash ? "true" : "false");
    printf("Minus   -  -  - = %s\n", option->minus ? "true" : "false");
    printf("Plus  -  -  -  -= %s\n", option->plus ? "true" : "false");
    printf("Precision  -  - = %s\n\n", option->precision ? "true" : "false");
    printf("i = %d\n", *i);
   
	rechercher_specificateur(format, &i, option);
	printf("ETAT STRUCTURE DE DONNEE : \nFin de fonction rechercher_specificateur\n");
    printf("specifier  -  - = %c\n", option->specifier);
    printf("space_array  -  = %d\n", option->space_array);
    printf("precision_array = %d\n", option->precision_array);
    printf("Zero  -  -  -  -= %s\n", option->zero ? "true" : "false");
    printf("Space  -  -  -  = %s\n", option->space ? "true" : "false");
    printf("Hash   -  -  -  = %s\n", option->hash ? "true" : "false");
    printf("Minus   -  -  - = %s\n", option->minus ? "true" : "false");
    printf("Plus  -  -  -  -= %s\n", option->plus ? "true" : "false");
    printf("Precision  -  - = %s\n", option->precision ? "true" : "false");
    printf("i = %d\n\n", *i);
 
	if(option->specifier == 0)
		return;
	appliquer_options_impression_specifieur(args, &i, option);
	printf("ETAT STRUCTURE DE DONNEE : \nFin de fonction appliquer_options_impression_specifieur\n");
    printf("specifier  -  - = %c\n", option->specifier);
    printf("space_array  -  = %d\n", option->space_array);
    printf("precision_array = %d\n", option->precision_array);
    printf("\nZero  -  -  -  -= %s\n", option->zero ? "true" : "false");
    printf("Space  -  -  -  = %s\n", option->space ? "true" : "false");
    printf("Hash   -  -  -  = %s\n", option->hash ? "true" : "false");
    printf("Minus   -  -  - = %s\n", option->minus ? "true" : "false");
    printf("Plus  -  -  -  -= %s\n", option->plus ? "true" : "false");
    printf("Precision  -  - = %s\n\n", option->precision ? "true" : "false");
    printf("i = %d\n", *i);

}