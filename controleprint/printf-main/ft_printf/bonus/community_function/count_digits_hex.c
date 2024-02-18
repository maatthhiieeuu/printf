#include "libft.h"
#include "../obligatory/printf/ft_printf.h"

void	count_digits_hex(t_format *option)
{
	int		i;
	char	table_hexadecimal[17];
	long long int signed_number_cpy;

	i = 0;
	if (option == NULL)
		return ;
	if (option->specifier == 'x' || option->specifier == 'X')
		signed_number_cpy = option->signed_number;
	else if (option->specifier == 'p')
		signed_number_cpy = option->address_int;
	ft_strlcpy(table_hexadecimal, "0123456789abcdef", 17);
	while (signed_number_cpy != 0)
	{
		signed_number_cpy /= 16;
		i++;
	}
	if (option->hash == true || option->specifier == 'p')
		i += 2;
	if (option->signed_number == 0 && option->address_int == 0)
		i = 1;
	if (option->specifier == 'x' || option->specifier == 'X')
		option->number_size = i;
	else if (option->specifier == 'p')
		option->address_size = i;
}