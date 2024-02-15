#include "libft.h"
#include "../obligatory/printf/ft_printf.h"

static void	print_field(t_format *option);

void	print_uppercase_hexadecimal_with_field(t_format *option)
{
	if (option->minus == true)
	{
		if (option->hash == true && option->zero == false)
			putstr_bonus(option, "0X");
		print_uppercase_hexadecimal(option);
			print_field(option);
	}
	if (option->minus == false)
	{
		if (option->hash == true && option->zero == true)
			putstr_bonus(option, "0X");
		print_field(option);

		if (option->hash == true && option->zero == false)
			putstr_bonus(option, "0X");

		print_uppercase_hexadecimal(option);
	}
}

static void	print_field(t_format *option)
{
	size_t	i;

	i = 0;

	while (option->number_size + i < option->space_array)
	{
		if (option->zero == false)
		{
			putchar_bonus(option, ' ');
			i++;
		}
		else if (option->zero == true)
		{
			putchar_bonus(option, '0');
			i++;
		}
	}
}