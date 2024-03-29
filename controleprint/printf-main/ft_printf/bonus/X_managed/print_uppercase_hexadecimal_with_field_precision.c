#include "libft.h"
#include "../obligatory/printf/ft_printf.h"

static void	print_field(t_format *option);
static void	print_precision(t_format *option);

void	print_uppercase_hexadecimal_with_field_precision(t_format *option)
{
	if (option == NULL)
		return ;
	if (option->minus == false)
	{
		print_field(option);
		if (option->hash == true)
		{
			putstr_bonus(option, "0X");
			option->precision_array += 2;
		}
		print_precision(option);
		print_uppercase_hexadecimal(option);
	}
	else if (option->minus == true)
	{
		if (option->hash == true)
		{
			putstr_bonus(option, "0X");
			option->precision_array += 2;
		}
		print_precision(option);
		print_uppercase_hexadecimal(option);
		print_field(option);
	}
}

static void	print_field(t_format *option)
{
	size_t	i;

	i = 0;
	if (option == NULL)
		return ;
	if (option->hash == true && option->minus == false)
			option->space_array -= 2;
	if (option->number_size > option->precision_array)
	{
		while (option->number_size + i < option->space_array)
		{
			putchar_bonus(option, ' ');
			i++;
		}
	}
	else if (option->number_size < option->precision_array)
	{
		while (option->precision_array + i < option->space_array)
		{
			putchar_bonus(option, ' ');
			i++;
		}
	}
}

static void	print_precision(t_format *option)
{
	size_t	i;

	i = 0;
	if (option == NULL)
		return ;
	if (option->number_size < option->precision_array)
	{
		while (option->number_size + i < option->precision_array)
		{
			putchar_bonus(option, '0');
			i += 1;
		}
	}
}
