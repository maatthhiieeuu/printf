#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <stdbool.h>
#include "libft.h"
#include "ft_printf.h"

void	convertir_precision_chaine_en_entier(const char *point_ptr, t_format *option) // nom en anglais : atoi_for_precision
{
	//printf("\nDébut de 10.convertir_precision_chaine_en_entier\n");
	int    i;
 	int    precision_size;

  i = 0;
	precision_size = 0;
  while (point_ptr[i] != option->specifier)
  {
    if (point_ptr[i] >= '0' && point_ptr[i] <= '9')
      precision_size = (precision_size * 10) + (point_ptr[i] - 48); 
    i++;
  }
	option->precision_array = precision_size;
}