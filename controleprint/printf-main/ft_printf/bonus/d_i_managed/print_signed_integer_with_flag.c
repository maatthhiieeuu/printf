#include "libft.h"
#include "../obligatory/printf/ft_printf.h"

void	print_signed_integer_with_flag(t_format *option)
{//printf("\033[1m\033[42m Z0, \033[0m\n");
	if (option == NULL)
		return ;
	else if (option->space == true)
	{
		putchar_bonus(option, ' ');
		putnbr_bonus(option, option->signed_number);
	}
	else if (option->plus == true)
	{
		if (option->signed_number)
			putchar_bonus(option, '+');
		putnbr_bonus(option, option->signed_number);
	}
	
}