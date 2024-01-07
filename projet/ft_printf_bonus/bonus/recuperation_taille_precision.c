#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <stdbool.h>
#include "libft.h"
#include "ft_printf.h"

void	recuperation_taille_precision(const char *point_ptr, t_format *option) // nom en anglais : atoi_for_precision
{
	//printf("\nDébut de 10.convertir_precision_chaine_en_entier\n");
	size_t    i;
 	size_t    precision_size;

  i = 0;
	precision_size = 0;
  while (point_ptr[i] != option->specifier)
  {
    if (point_ptr[i] >= '0' && point_ptr[i] <= '9')
      precision_size = (precision_size * 10) + (point_ptr[i] - 48); 
    i++;
  }
  //printf("precision_size = %ld", precision_size);
	option->precision_array = precision_size;
}