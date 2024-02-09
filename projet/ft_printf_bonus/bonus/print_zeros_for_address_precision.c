
#include "libft.h"
#include "ft_printf.h"

void	print_zeros_for_address_precision(t_format *option)
{
	size_t	i;

	i = 0;
	if (option->zero == false && option->precision == true)
	{
		while (option->address_size + i - 2 < option->precision_array)
		{
			putchar_bonus(option, '0');
			i++;
		}
	}
	else if (option->zero == true && option->precision == false)
	{
		while (option->address_size + i - 2 < option->precision_array)
		{
			putchar_bonus(option, '0');
			i++;
		}
	}
}