#include "libft.h"
#include "ft_printf.h"

void	imprimer_zero_pour_precision_adresse(t_format *option)
{
	//printf("\nDébut de imprimer_zero_pour_precision_adresse:\n"); 
	size_t i;

	i = 0;
	//printf("option->address_int = %ld\n\n", option->address_int);
	//printf("address_size = %ld\n\n",option->address_size);
	//printf("adress_size + i = %ld\nprecision_array = %ld\n\n", option->address_size + i, option->precision_array - 2);
	while (option->address_size + i - 2 < option->precision_array )
	{
		//printf("adress_size + i = %ld\nprecision_array = %ld\n\n", option->address_size + i, option->precision_array );
		ft_putchar_fd('0', 1);
		i++;
	}
}