#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <stdbool.h>
#include "libft.h"
#include "ft_printf.h"

void    initialiser_options_formatage(t_format *option) // nom en anglais : initialize_format_options    
{
    //printf("\nDébut de 4.initialiser_options_formatage\n");
    option->specifier = 0;
    option->space_array = 0;
    option->precision_array = 0;
    option->digit_char_until_specifier = 0;
    option->digit_point_until_specifier = 0;
    option->precision = false;
    option->space = false;
    option->zero = false;
    option->hash = false;
    option->minus = false;
    option->plus = false;
}