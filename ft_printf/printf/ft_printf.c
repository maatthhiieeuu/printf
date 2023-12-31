#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include "libft.h"
#include "ft_printf.h"


static	void	ft_format(const char *format, va_list args, int *i, t_format *option)
{
	if (!format)
		return;
	if (format[*i + 1] == 'c')
		c_manage(format, args, &i);
	else if (format[*i + 1] == 's')
		s_manage(format, args, &i);
	else if (format[*i + 1] == 'p')
		p_manage(format, args, &i);
	else if (format[*i + 1] == 'd')
		d_manage(format, args, &i);
	else if (format[*i + 1] == 'i')
		i_manage(format, args, &i);
	else if (format[*i + 1] == 'u')
		u_manage(format, args, &i);
	else if (format[*i + 1] == 'x')
		x_manage(format, args, &i);
	else if (format[*i + 1] == 'X')
		X_manage(format, args, &i);
	else if (format[*i + 1] == '%')
		percent_manage(format, &i);
	else 
		init_struct_format(format, &i, option);
}

/*----------------------------------------------------------------------------*/

int ft_printf(const char *format, ...)
{
	//printf("\nDébut de fonction de ft_printf\n");
	int	i;

	i = 0;
	va_list args;
	t_format option;
	va_start(args, format);
	while(format[i])
	{
		if ((format[i] == '%') || (format[i] == 92))
		{
			ft_format(format, args, &i, &option);
		}
		else
			ft_putchar_fd(format[i], 1);
		i++;
	}
	va_end(args);
	return (i);
}
