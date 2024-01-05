#include "libft.h"
#include "ft_printf.h"

void	imprimer_chaine_avec_minus_precision_et_espace(t_format *option, char *string, size_t size_string)
{
	//printf("\n\nentrez dans la fonction imprimer_chaine_avec_minus_precision_et_espace\n\n");
	size_t j;

	j = 0;
	if (option->minus == true)
	{
		ft_putnstr_fd(string, option->precision_array, 1);

		if (option->precision_array < size_string)
		{
			while ((j) < (option->space_array - option->precision_array))
			{
				ft_putchar_fd(' ', 1);
				j++;
			}
		}
		else if (option->precision_array > size_string)
		{
			while ((j) < (option->space_array - size_string))
			{
				ft_putchar_fd(' ', 1);
				j++;
			}
		}
			
	}
}