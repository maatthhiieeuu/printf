
#include "libft.h"
#include "ft_printf.h"

void	print_string_with_space(t_format *option, size_t size, char *string)
{
	size_t	j;

	j = 0;
	if (option->minus == false)
	{
		while (size + j < option->space_array)
		{
			putchar_bonus(option, ' ');
			j++;
		}
		putstr_bonus(option, string);
	}
	else if (option->minus == true)
	{
		putstr_bonus(option, string);
		while (size + j < option->space_array)
		{
			putchar_bonus(option, ' ');
			j++;
		}
	}
}
