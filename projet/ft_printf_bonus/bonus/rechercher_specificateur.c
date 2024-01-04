#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <stdbool.h>
#include "libft.h"
#include "ft_printf.h"

void	rechercher_specificateur(const char *format, int i, t_format *option) // nom en anglais : find_specifier
{
    //printf("\nDébut de 5.rechercher_specificateur : \n");
    int j;
    char tab_char[9];

    j = 0;
    ft_strlcpy(tab_char, "cspdiuxX", 9);
    while (format[i] != '\0')
    {
        j = 0;
        while (tab_char[j] != '\0')
        {
            if (format[i] == tab_char[j])
            {
                option->specifier = tab_char[j];
                return;
            }
            j++;
        }
        i++;
    }
}