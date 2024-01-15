#include "libft.h"
#include "ft_printf.h"

void	gestionnaire_entier_non_signe_avec_precision(t_format *option) // nom en anglais : print_signed_int_with_one_space
{
    //printf("\nDébut de gestionnaire_entier_signe_avec_precision\n");   
		
	if (option->precision_array > 0)
		imprimer_entier_non_signe_avec_precision(option);
		
}