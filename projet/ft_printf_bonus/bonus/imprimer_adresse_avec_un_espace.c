#include "libft.h"
#include "ft_printf.h"

void	imprimer_adresse_avec_un_espace(t_format *option)
{
	//printf("\nDébut de imprimer_adresse_avec_un_espace :\n");     	

	ft_putchar_fd(' ', 1);
	print_adress(option->address_int);
}