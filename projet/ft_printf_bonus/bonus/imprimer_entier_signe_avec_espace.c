#include "libft.h"
#include "ft_printf.h"

void	imprimer_entier_signe_avec_espace(t_format *option) // nom en anglais : print_signed_int_with_one_space
{
    //printf("\nDébut de imprimer_entier_signe_avec_space\n");   
		
	if (option->space_array == 0 && option->space == true)
	{
		ft_putchar_fd(' ', 1);
		ft_putnbr_fd(option->signed_number, 1);
	}	
		
}