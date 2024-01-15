#include "libft.h"
#include "ft_printf.h"

static void	imprimer_zero_pour_largeur_de_champs(t_format *option);

void	imprimer_entier_signe_avec_plus_et_zero(t_format *option)
{
	//printf("\nDébut de imprimer_entier_signe_avec_plus_et_zero : \n");
	compter_nombre_de_chiffre(option);
	if (option->plus == true)
		option->space_array -= 1;
	if (option->minus == false)
	{
		if (option->plus == true)
			ft_putchar_fd('+', 1);
		imprimer_zero_pour_largeur_de_champs(option);
		ft_putnbr_fd(option->signed_number, 1);
	}
	else if (option->minus == true)
	{
		if (option->plus == true)
			ft_putchar_fd('+', 1);
		ft_putnbr_fd(option->signed_number, 1);
		imprimer_zero_pour_largeur_de_champs(option);
	}
}
static void	imprimer_zero_pour_largeur_de_champs(t_format *option)
{
	size_t i;

	i = 0;
	if (option->zero == true && option->minus == false)
	{
		while (option->number_size + i < option->space_array)
		{
			ft_putchar_fd('0', 1);
			i++;
		}
	}
}
