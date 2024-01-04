 #include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <stdbool.h>
#include "libft.h"
#include "ft_printf.h"


void    analyse_option_numerique(const char *format, int i, t_format *option)
{
    bool flag_digit;

    flag_digit = false;
    while (format[i] != option->specifier && format[i])
    {
        if (format[i] == '.')
        {
            flag_digit = false;
            option->precision = true;
        }
        else if ((format[i] != '0') && (ft_isdigit(format[i])) && (flag_digit == false))
        {
            flag_digit = true;
            return;//   il y avais cette ligne avant ici: traiter_option_numerique(format, i, option);
        }
        i++;
    }
}
    
