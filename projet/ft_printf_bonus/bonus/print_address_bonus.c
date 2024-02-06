
#include "libft.h"
#include "ft_printf.h"

void	print_address_bonus(uintptr_t num, t_format *option)
{
	int		i;
	int		hexa_num[50];
	char	hexadecimal_min[17];

	i = 0;
	ft_strlcpy(hexadecimal_min, "0123456789abcdef", 17);
	while (num != 0)
	{
		hexa_num[i] = num % 16;
		num /= 16;
		i++;
	}
	i--;
	putstr_bonus(option, "0x");
	while (i >= 0)
	{
		putchar_bonus(option, hexadecimal_min[hexa_num[i]]);
		i--;
	}
}
