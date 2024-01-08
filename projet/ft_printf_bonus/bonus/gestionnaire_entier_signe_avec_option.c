#include "libft.h"
#include "ft_printf.h"

void	gestionnaire_entier_signe_avec_option(va_list args, t_format *option)
{
	//printf("\nDébut de gestionnaire_entier_signe_avec_option : \n");
	option->signed_number = va_arg(args, int);
	


}