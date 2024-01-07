#include "libft.h"
#include "ft_printf.h"

void	imprimer_adresse_avec_largeur_de_champs_et_minus(va_list args, t_format *option)
{
	//printf("\nDébut de imprimer_adresse_avec_largeur_de_champs_et_minus :\n");     
	size_t i;
	/*printf("\n    ETAT STRUCTURE DE DONNEE : \n");
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
	option->address_int = va_arg(args, uintptr_t);	
	i = 0;
	if ((option->specifier == 'p') && (option->address_int != 0))
	{
		compter_caractere_adresse(option);//nom anglais :count_char_of_address
		if (option->space_array > 0 && option->minus == true)
		{
			print_adress(option->address_int);
			while (i + option->address_size < option->space_array)
			{
				ft_putchar_fd(' ', 1);
				i++;
			}
		}
	}
} 