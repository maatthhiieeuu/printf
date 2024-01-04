#include "libft.h"
#include "ft_printf.h"

void	imprimer_chaine_avec_precision_et_espace(va_list args, t_format *option)
{
	size_t j;

	j = 0;
	if (option->minus == false)
	{
		while (j + 1 < option->space_array )
		{
			ft_putchar_fd(' ', 1);
			j++;
		}
		ft_putnstr_fd(va_arg(args, char *), option->precision_array, 1);
	}
	else if (option->minus == true)
	{
		ft_putnstr_fd(va_arg(args, char *), option->precision_array, 1);
		while (j + 1 < option->space_array)
		{
			ft_putchar_fd(' ', 1);
			j++;
		}
	}
}

	