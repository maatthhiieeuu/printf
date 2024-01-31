#include "libft.h"
#include "ft_printf.h"

void	putchar_bonus(t_format *option, char c)
{
	//printf("\nAvant incrémentation de option.output = %d\n", option->output);
	option->output += 1;
	//printf("\nAprès incrémentation de option.output = %d\n", option->output);
	write(1, &c, 1);
}