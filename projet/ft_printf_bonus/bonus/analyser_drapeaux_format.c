#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <stdbool.h>
#include "libft.h"
#include "ft_printf.h"

void    analyser_drapeaux_format(const char *format, int i, t_format *option) // nom en anglais : parse_format_flags
{
    //printf("\nDébut de 6.analyser_drapeaux_format : \n");
    while (format[i] != option->specifier && format[i])
    {
        if (format[i] == '#')
            option->hash = true;
        else if (format[i] == '-')
            option->minus = true;
        else if (format[i] == '+')
            option->plus = true;
        else if (format[i] == '0')
            option->zero = true;
        else if (format[i] == ' ')
            option->space = true;
        i++;
    }
}