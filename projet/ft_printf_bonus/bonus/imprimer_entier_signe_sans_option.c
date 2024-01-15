#include "libft.h"
#include "ft_printf.h"

void	imprimer_entier_signe_sans_option(t_format *option) // nom en anglais : print_signed_int_option_less
{
    //printf("\nDébut de imprimer_entier_signe_sans_option\n");   
		
		ft_putnbr_fd(option->signed_number, 1);
		
}