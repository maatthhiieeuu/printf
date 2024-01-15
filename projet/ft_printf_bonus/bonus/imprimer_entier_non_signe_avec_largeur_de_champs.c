#include "libft.h"
#include "ft_printf.h"

static void	imprimer_largeur_de_champs(t_format *option);

void	imprimer_entier_non_signe_avec_largeur_de_champs(t_format *option)
{
	//printf("\nDébut de imprimer_entier_non_signe_avec_largeur_de_champs : \n");
	compter_nombre_de_chiffre(option);
	if (option->minus == false)
	{
		imprimer_largeur_de_champs(option);
		ft_putnbr_fd(option->unsigned_number, 1);
	}
	else if (option->minus == true)
	{
		ft_putnbr_fd(option->unsigned_number, 1);
		imprimer_largeur_de_champs(option);
	}	
}
static void	imprimer_largeur_de_champs(t_format *option)
{
	size_t i;

	i = 0;
	if ((option->zero == false) || (option->minus == true && option->zero == true))
	{
		while (option->number_size + i < option->space_array)
		{
			ft_putchar_fd(' ', 1);
			i++;
		}
	}
	else if (option->zero == true && option->minus == false)
	{
		while (option->number_size + i < option->space_array)
		{
			ft_putchar_fd('0', 1);
			i++;
		}
	}
}
