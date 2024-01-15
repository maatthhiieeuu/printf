#include "libft.h"
#include "ft_printf.h"

void	compter_nombre_de_chiffre(t_format *option) // nom en anglais : print_signed_int_with_one_space
{
    //printf("\nDébut de imprimer_entier_signe_avec_largeur_de_champs\n");   
	size_t i;
	long long int number_cpy;

	i = 0;
	if (option->specifier == 'd' || option->specifier == 'i')
	{
		number_cpy = option->signed_number;
		while (number_cpy > 0)
		{
			number_cpy /= 10;
			i++;
		}
		option->number_size = i;
	}
	if (option->specifier == 'u')
	{
		number_cpy = option->unsigned_number;
		while (number_cpy > 0)
		{
			number_cpy /= 10;
			i++;
		}
		option->number_size = i;
	}
}