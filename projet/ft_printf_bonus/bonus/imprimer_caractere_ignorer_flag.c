#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
#include "libft.h"
#include "ft_printf.h"

void    imprimer_caractere_ignorer_flag(va_list args, t_format *option)
{
   //printf("Début de fonction de imprimer_caractere_ignorer_flag\n");
    if (option->specifier == 'c')
    {
        char recovery_char;

        recovery_char = va_arg(args, int);
        ft_putchar_fd(recovery_char, 1);
    }
}