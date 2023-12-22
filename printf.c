#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include "libft.h"

void	format(const char *format, va_list args, int *i)
{

	if (!format)
		return;
	/*||||||||||||||||||||||||||||||||||||||||||||||||||*/
	//					%c
	if (format[*i + 1] == 'c')
		c_manage(format, args, &i);

	/*||||||||||||||||||||||||||||||||||||||||||||||||||*/
	//					%s
	else if (format[*i + 1] == 's')
		s_manage(format, args, &i);

	/*||||||||||||||||||||||||||||||||||||||||||||||||||*/
	//					%p
	else if (format[*i + 1] == 'p')
		p_manage(format, args, &i);

	/*||||||||||||||||||||||||||||||||||||||||||||||||||*/
	//					%d
	else if (format[*i + 1] == 'd')
		d_manage(format, args, &i);

	/*||||||||||||||||||||||||||||||||||||||||||||||||||*/
	//					%i
	else if (format[*i + 1] == 'i')
		i_manage(format, args, &i);

	/*||||||||||||||||||||||||||||||||||||||||||||||||||*/
	//					%u
	else if (format[*i + 1] == 'u')
		u_manage(format, args, &i);
	/*||||||||||||||||||||||||||||||||||||||||||||||||||*/
	//					%x
	else if (format[*i + 1] == 'x')
		x_manage(format, args, &i);

	/*||||||||||||||||||||||||||||||||||||||||||||||||||*/
	//					%X
	else if (format[*i + 1] == 'X')
		X_manage(format, args, &i);
	/*||||||||||||||||||||||||||||||||||||||||||||||||||*/
	//					%X
	else if (format[*i + 1] == '%')
		percent_manage(format, args, &i);

}

/*----------------------------------------------------------------------------*/

int ft_printf(const char *format, ...)
{
	int	i;

	i = 0;
	va_list args;
	va_start(args, format);
	while(format[i])
	{
		if ((format[i] == '%') || (format[i] == 92))
		{
			ft_format(format, args, &i);
		}
		else
			ft_putchar(format[i]);
		i++;
	}
	va_end(args);
}

/*----------------------------------------------------------------------------*/

int main(void)
{
	//ft_printf("");
	//printf("");
	return (0);
}