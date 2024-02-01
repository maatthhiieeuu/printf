#include "libft.h"
#include "ft_printf.h"

void	putnbr_bonus(t_format *option, int n)
{
	char	c;
	
	if (n < 0)
	{
		write(1, "-", 1);
		option->output += 1;
		if (n == -2147483648)
		{
			write(1, "2", 1);
			option->output += 1;
			n = -147483648;
		}
		n = -n;
	}
	if (n > 9)
	{
		putnbr_bonus(option, n / 10);
	}
	c = n % 10 + 48;
	write(1, &c, 1);
	option->output += 1;
}