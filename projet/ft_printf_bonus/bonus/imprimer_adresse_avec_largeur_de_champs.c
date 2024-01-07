#include "libft.h"
#include "ft_printf.h"

void	imprimer_adresse_avec_largeur_de_champs(va_list args, t_format *option)
{
	//printf("\nDébut de imprimer_adresse_avec_largeur_de_champs :\n");     
	size_t i;

	option->address_int = va_arg(args, uintptr_t);	
	i = 0;
	if ((option->specifier == 'p') && (option->address_int != 0))
	{
		compter_caractere_adresse(option);//nom anglais :count_char_of_address
		if (option->space_array > 0 && option->minus == false)
		{
			while (i + option->address_size < option->space_array)
			{
				ft_putchar_fd(' ', 1);
				i++;
			}
			print_adress(option->address_int);
		}
	}
} 