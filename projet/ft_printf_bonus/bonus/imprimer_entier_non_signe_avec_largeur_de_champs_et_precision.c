#include "libft.h"
#include "ft_printf.h"

static void	imprimer_precision(t_format *option);
static void	 imprimer_largeur_de_champs(t_format *option);

void	imprimer_entier_non_signe_avec_largeur_de_champs_et_precision(t_format *option) // nom en anglais : 
{
    //printf("\nDébut de imprimer_entier_signe_avec_largeur_de_champs_et_precision\n");  
    compter_nombre_de_chiffre(option);
	imprimer_largeur_de_champs(option);
	imprimer_precision(option);
	ft_putnbr_fd(option->unsigned_number, 1);
}

static void	 imprimer_largeur_de_champs(t_format *option)
{
	int i;

	i = 0;
	if (option->number_size < option->precision_array)
	{
		while (option->precision_array + i < option->space_array)
		{ 
			ft_putchar_fd(' ', 1);
			i++;
		}
	}
	else if (option->number_size > option->precision_array)	
	{
		while (option->number_size + i < option->space_array)
		{
			ft_putchar_fd(' ', 1);
			i++;
		}
	}
}

static void	imprimer_precision(t_format *option)
{
	int i;

	i = 0;
	//printf("number_size : %ld + %d < %ld\n", option->number_size, i, option->precision_array);
	while (option->number_size + i < option->precision_array)
	{
		ft_putchar_fd('0', 1);
		i++;
	}
}