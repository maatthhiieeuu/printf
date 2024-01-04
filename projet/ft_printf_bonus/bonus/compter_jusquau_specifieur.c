#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <stdbool.h>
#include "libft.h"
#include "ft_printf.h"

int 	compter_jusquau_specifieur(const char *format, t_format *option) // nom en anglais : count_to_specifier
{
	//printf("\nDébut de 9.compter_jusquau_specifieur : \n");
	int i;

	i = 0; 
	while (format[i] != option->specifier)
	{
			i++;
	}
	return (i);
}