#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include "libft.h"
#include "ft_printf.h"

static	void	dispatch_and_route_to_bonus(const char *format, va_list args, int *i);

/*----------------------------------------------------------------------------*/

int ft_printf(const char *format, ...)
{
	//printf("\nDébut de fonction de 1.ft_printf\n");
	int	i;

	i = 0;
	va_list args;
	va_start(args, format);
	while(format[i])
	{
		if ((format[i] == '%') || (format[i] == 92))
		{
			dispatch_and_route_to_bonus(format, args, &i);
		}
		else
			ft_putchar_fd(format[i], 1);
		i++;
	}
	va_end(args);
	return (i);
}

/*----------------------------------------------------------------------------*/

static	void	dispatch_and_route_to_bonus(const char *format, va_list args, int *i) 
{
	//printf("\nDébut de 2.envoyer_impression_ou_bonus\n");
	if (!format)
		return;
	if (format[*i + 1] == 'c')
		print_character(format, args, &i);
	else if (format[*i + 1] == 's')
		print_string(format, args, &i);
	else if (format[*i + 1] == 'p')
		print_pointer_address(format, args, &i);
	else if (format[*i + 1] == 'd')
		print_signed_int(format, args, &i);
	else if (format[*i + 1] == 'i')
		print_integer(format, args, &i);
	else if (format[*i + 1] == 'u')
		print_unsigned_int(format, args, &i);
	else if (format[*i + 1] == 'x')
		print_hex_lowercase(format, args, &i);
	else if (format[*i + 1] == 'X')
		print_hex_uppercase(format, args, &i);
	else if (format[*i + 1] == '%')
		print_percent_sign(format, &i);
	else
		i++;
}

