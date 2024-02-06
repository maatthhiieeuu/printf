
#include "libft.h"
#include "ft_printf.h"

void	print_string_with_minus_precision_and_space(t_format *option, char *string, size_t size_string)
{
	size_t	j;

	j = 0;
	if (option->minus == true)
	{
		putnstr_bonus(option, string, option->precision_array);
		if (option->precision_array < size_string)
		{
			while ((j) < (option->space_array - option->precision_array))
			{
				putchar_bonus(option, ' ');
				j++;
			}
		}
		else if (option->precision_array > size_string)
		{
			while ((j) < (option->space_array - size_string))
			{
				putchar_bonus(option, ' ');
				j++;
			}
		}
	}
}
