#include "libft.h"
#include "ft_printf.h"

void	imprimer_zero_pour_precision_adresse(t_format *option)
{
	//printf("\nDébut de imprimer_zero_pour_precision_adresse:\n"); 
	size_t i;

	i = 0;
	if (option->zero == false && option->precision == true)
	{
		while (option->address_size + i - 2 < option->precision_array)
		{
			ft_putchar_fd('0', 1);
			i++;
		}
	}//printf("        -address_size -  = %ld\n",option->address_size);
	else if (option->zero == true && option->precision == false)
	{
		
		while (option->address_size + i - 2 < option->precision_array)
		{
			
			ft_putchar_fd('0', 1);
			i++;
		}
	}
		
}