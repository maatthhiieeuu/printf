#include "libft.h"
#include "ft_printf.h"

void	gestionnaire_adresse_avec_option(va_list args, t_format *option)
{
	/*printf("\nDébut de gestionnaire_adresse_avec_option : \n");
	printf("\n    ETAT STRUCTURE DE DONNEE : \n");
        printf("        -specifier  -  - = %c\n", option->specifier);
        printf("        -space_array  -  = %ld\n", option->space_array);
        printf("        -precision_array = %ld\n", option->precision_array);
        printf("        -digit_char_until_specifier = %ld\n",option->digit_char_until_specifier);
        printf("        -digit_point_until_specifier = %ld\n",option->digit_point_until_specifier);
        printf("        -address_size -  = %ld\n",option->address_size);
        printf("        -address_int  -  = %ld\n",option->address_int);
        printf("        -Precision  -  - = %s\n", option->precision ? "true" : "false");
        printf("        -Space  -  -  -  = %s\n", option->space ? "true" : "false");
        printf("        -Zero  -  -  -  -= %s\n", option->zero ? "true" : "false");
        printf("        -Hash   -  -  -  = %s\n", option->hash ? "true" : "false");
        printf("        -Minus   -  -  - = %s\n", option->minus ? "true" : "false");
        printf("        -Plus  -  -  -  -= %s\n", option->plus ? "true" : "false");*/
	option->hash = false;	//	- '#' non prise en charge.
	if (option->space_array > 0)	//	Non prise en compte de ' ' car présence de la largeur de champs.
		option->space = false;
	if (option->precision == true)	//	Non prise en compte de '0' si présence de '.'.
	option->zero = false;
	if (option->space_array > 0 && option->minus == false)
		imprimer_adresse_avec_largeur_de_champs(args, option);
	else if (option->space_array > 0 && option->minus == true)
		imprimer_adresse_avec_largeur_de_champs_et_minus(args, option);
	else if (option->precision_array > 0)
		imprimer_adresse_avec_precision(args, option);
	//else if ()

}