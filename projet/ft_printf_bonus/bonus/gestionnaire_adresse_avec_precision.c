#include "libft.h"
#include "ft_printf.h"

void	gestionnaire_adresse_avec_precision(t_format *option)
{
	//printf("\nDébut de gestionnaire_adresse_avec_precision : \n");
	
	if (option->precision_array > 0 && option->zero == false)
	{
		//printf("	**	");
		imprimer_adresse_avec_precision(option);
	}
	else if (option->zero == true && option->precision == false)
	{
		//printf("        -space_array  -  = %ld\n", option->space_array);
       //printf("        -precision_array = %ld\n", option->precision_array);
		option->precision_array -= 2;
		imprimer_adresse_avec_precision(option);
	}
}