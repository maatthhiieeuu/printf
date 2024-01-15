#include "libft.h"
#include "ft_printf.h"

void	imprimer_format_brut(const char *format, int *i, t_format *option)
{
	//printf("\nDébut de imprimer_format_brut : \n");
	size_t	j;

	j = 0;
	*i -= option->digit_char_until_specifier;
	while (j < option->digit_char_until_specifier)
	{
		if (format[*i] == '.' && format[*i + 1] == '-')
		{
			ft_putchar_fd('.', 1);
			ft_putchar_fd('0', 1);
			j += 3;
		}
		else
		{
			ft_putchar_fd(format[*i], 1);
			j++;
			*i += 1;
		}
			
	}
}