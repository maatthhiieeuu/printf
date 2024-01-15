#include "libft.h"
#include "ft_printf.h"

void	imprimer_entier_non_signe_avec_precision(t_format *option) // nom en anglais : print_signed_int_with_one_space
{
    //printf("\nDébut de imprimer_entier_non_signe_avec_precision\n");   
	int i;

	i = 0;
	compter_nombre_de_chiffre(option);
	while (option->number_size + i < option->precision_array)
	{
		ft_putchar_fd('0', 1);
		i++;
	}
	ft_putnbr_fd(option->unsigned_number, 1);
}