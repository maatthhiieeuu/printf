#include "libft.h"
#include "ft_printf.h"

void	imprimer_adresse_avec_precision_et_largeur_de_champs(t_format *option)
{
	//printf("\nDébut de imprimer_adresse_avec_precision_et_largeur_de_champs :\n"); 
	size_t i;

	i = 0; 
	if (option->minus == false)
	{
		option->space_array -= 2;
		while (option->precision_array + i < option->space_array)
		{
			ft_putchar_fd(' ', 1);
			i++;
		}
		
		imprimer_adresse_avec_precision(option);
	}
	else if (option->minus == true)
	{
		imprimer_adresse_avec_precision(option);
		option->space_array -= 2;
		while (option->precision_array + i < option->space_array)
		{
			ft_putchar_fd(' ', 1);
			i++;
		}
	}
	
} 