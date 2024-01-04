#include "libft.h"
#include "ft_printf.h"

void	imprimer_chaine_avec_espace(t_format *option, size_t size, char *string)
{
	size_t j;

	j = 0;
	if (option->minus == false)
	{
		while (size + j < option->space_array)
		{
			ft_putchar_fd(' ', 1);
			j++;
		}
		ft_putstr_fd(string, 1);
	}
	else if (option->minus == true)
	{
		ft_putstr_fd(string, 1);
		while (size + j < option->space_array)
		{
			ft_putchar_fd(' ', 1);
			j++;
		}
	}
}






	







/*	
		imprimer_chaine_avec_espaces();

		imprimer_chaine_avec_precision();

		imprimer_chaine_avec_precision_et_espace();
		*/