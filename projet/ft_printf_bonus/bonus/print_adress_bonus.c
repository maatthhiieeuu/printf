
#include "libft.h"
#include "ft_printf.h"

void	print_adress_bonus(uintptr_t num, t_format *option)
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
	ft_putstr_fd("0x", 1);
	option->output += 2;
	while (i >= 0)
	{
		ft_putchar_fd(hexadecimal_min[hexa_num[i]], 1);
		option->output += 1;
		i--;
	}
}
