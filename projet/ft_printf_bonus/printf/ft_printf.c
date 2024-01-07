#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include "libft.h"
#include "ft_printf.h"

static	void	dispatch_and_route_to_bonus(const char *format, va_list args, int *i);

/*----------------------------------------------------------------------------*/

int ft_printf(const char *format, ...)
{
	//printf("\nDébut de fonction de ft_printf\n");
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
	//printf("\nDébut de dispatch_and_route_to_bonus :\n");
	if (!format)
		return;
	if (format[*i + 1] == 'c'){
		//printf("	cCc\n");
		print_character(format, args, &i);
	}
	else if (format[*i + 1] == 's'){
		//printf("	sSs\n");
		print_string(format, args, &i);
	}
	else if (format[*i + 1] == 'p'){
		//printf("	pPp\n");
		print_pointer_address(format, args, &i);
	}
	else if (format[*i + 1] == 'd'){
		//printf("	dDd\n");
		print_signed_int(format, args, &i);
	}
	else if (format[*i + 1] == 'i'){
		//printf("	iIi\n");
		print_integer(format, args, &i);
	}
	else if (format[*i + 1] == 'u'){
		//printf("	uUu\n");
		print_unsigned_int(format, args, &i);
	}
	else if (format[*i + 1] == 'x'){
		//printf("	xXx\n");
		print_hex_lowercase(format, args, &i);
	}
	else if (format[*i + 1] == 'X'){
		//printf("	XXX\n");
		print_hex_uppercase(format, args, &i);
	}
	else if (format[*i + 1] == '%'){
		//printf("	%%%%%%\n");
		print_percent_sign(format, &i);
	}
	#ifdef BONUS
	else{
		//printf("	111\n");
		coordination_initialisation_structure(format, args, i);
	}
	#endif
}

