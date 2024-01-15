#include "libft.h"
#include "ft_printf.h"

void	imprimer_entier_signe_avec_moins(t_format *option) // nom en anglais : print_signed_int_with_minus
{
    //printf("\nDébut de imprimer_entier_avec_moin\n");   
		
		ft_putnbr_fd(option->signed_number, 1);
		
	
}