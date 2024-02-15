#include "libft.h"
#include "../obligatory/printf/ft_printf.h"

static void	print_precision(t_format *option);

void	print_lowercase_hexadecimal_with_precision(t_format *option)
{
	if (option->hash == true)
	{
		option->precision_array += 2;
		putstr_bonus(option, "0x");
	}
	if (option->precision_array > option->number_size)
	{
		print_precision(option);
		print_lowercase_hexadecimal(option);
	}
	else
		print_lowercase_hexadecimal(option);
}

static void	print_precision(t_format *option)
{
	size_t	i;

	i = 0;
	while (option->number_size + i < option->precision_array)
	{
		putchar_bonus(option, '0');
		i += 1;
	}

}
