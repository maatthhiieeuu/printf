#include "libft.h"
#include "ft_printf.h"

void	imprimer_adresse_avec_precision(va_list args, t_format *option)
{
	/*printf("\nDébut de imprimer_adresse_avec_precision :\n"); 
	printf("*\n");
        printf("    ETAT STRUCTURE DE DONNEE : \n");
        printf("        -specifier  -  - = %c\n", option->specifier);
        printf("        -space_array  -  = %ld\n", option->space_array);
        printf("        -precision_array = %ld\n", option->precision_array);
        printf("        -digit_char_until_specifier = %ld\n",option->digit_char_until_specifier);
        printf("        -digit_point_until_specifier = %ld\n",option->digit_point_until_specifier);
        printf("        -address_size -  = %ld\n",option->address_size);
        printf("        -Precision  -  - = %s\n", option->precision ? "true" : "false");
        printf("        -Space  -  -  -  = %s\n", option->space ? "true" : "false");
        printf("        -Zero  -  -  -  -= %s\n", option->zero ? "true" : "false");
        printf("        -Hash   -  -  -  = %s\n", option->hash ? "true" : "false");
        printf("        -Minus   -  -  - = %s\n", option->minus ? "true" : "false");
        printf("        -Plus  -  -  -  -= %s\n", option->plus ? "true" : "false"); */
	int	i;
	int	hexaNum[17];
	char hexadecimalMin[17];

	i = 0;
	option->address_int = va_arg(args, uintptr_t);
	compter_caractere_adresse(option);
       /* printf("\n    ETAT STRUCTURE DE DONNEE : \n");
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
	ft_strlcpy(hexadecimalMin,"0123456789abcdef",17);
	while (option->address_int != 0)
	{
		hexaNum[i] = option->address_int % 16;
		option->address_int /= 16;
		i++;
	}
	i--;
	ft_putstr_fd("0x", 1);
	if (option->precision_array > 0)
		imprimer_zero_pour_precision_adresse(option);
	while (i >= 0)
	{
		ft_putchar_fd(hexadecimalMin[hexaNum[i]], 1);
		i--;
	}
} 