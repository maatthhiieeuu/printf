#include "libft.h"
#include "ft_printf.h"

void	putchar_bonus(t_format *option, char c)
{
	option->output += 1;
	write(1, &c, 1);
}