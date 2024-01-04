#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <stdbool.h>
#include "libft.h"
#include "ft_printf.h"

void	convertir_espace_chaine_en_entier(const char *s, t_format *option) // nom en anglais : atoi_for_space
{
	//printf("\nDébut de 8.convertir_espace_chaine_en_entier\n");
    int    i;
    int    array_size;

    array_size = 0;
    i = 0;
    while ((s[i] != option->specifier) && (s[i] != '.') && (s[i]))
    {
      if (s[i] >= '0' && s[i] <= '9')
          array_size = (array_size * 10) + (s[i] - 48); 
      i++;
    }
    option->space_array = array_size;
}