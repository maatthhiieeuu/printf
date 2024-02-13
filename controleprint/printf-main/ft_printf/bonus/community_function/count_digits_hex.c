#include "libft.h"
#include "../obligatory/printf/ft_printf.h"

void	count_digits_hex(t_format *option)
{
	int		i;
	char	table_hexadecimal[17];
	long long int signed_number_cpy;

	signed_number_cpy = option->signed_number;
	i = 0;
	if (option == NULL)
		return ;
	ft_strlcpy(table_hexadecimal, "0123456789abcdef", 17);
	while (signed_number_cpy != 0)
	{
		signed_number_cpy /= 16;
		i++;
	}
	if (option->hash == true)
		i += 2;
	option->number_size = i;
}