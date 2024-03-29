#include "libft.h"
#include "../obligatory/printf/ft_printf.h"

void	print_signed_integer_with_flag(t_format *option)
{
	if (option == NULL)
		return ;
	else if (option->space == true)
	{
		putchar_bonus(option, ' ');
		putnbr_bonus(option, option->signed_number);
	}
	else if (option->plus == true && option->signed_number >= 0)
	{
		putchar_bonus(option, '+');
		putnbr_bonus(option, option->signed_number);
	}
	else if (option->minus == true && option->signed_number < 0)
	{
		putchar_bonus(option, '-');
		putnbr_bonus(option, option->signed_number);
	}
}