#include "libft.h"
#include "../obligatory/printf/ft_printf.h"

static void	print_space(t_format *option);

void	print_lowercase_hexadecimal_with_field_space(t_format *option)
{
	if (option->minus == true)
	{
		print_lowercase_hexadecimal(option);
		print_space(option);
	}
	if (option->minus == false)
	{
		print_space(option);
		print_lowercase_hexadecimal(option);
	}

	
}

static void	print_space(t_format *option)
{
	int	i;

	i = 0;
	while (option->number_size + i < option->space_array)
	{
		putchar_bonus(option, ' ');
		i++;
	}
}