#include "libft.h"
#include "ft_printf.h"

void	convertir_espace_chaine_en_entier(const char *s, t_format *option) // nom en anglais : atoi_for_space
{
	//printf("\nDébut de 8.convertir_espace_chaine_en_entier\n");
    int    i;

    option->space_array = 0;
    i = 0;
    while ((s[i] != option->specifier) && (s[i] != '.') && (s[i]))
    {
      if (s[i] >= '0' && s[i] <= '9')
          option->space_array = (option->space_array * 10) + (s[i] - 48); 
      i++;
    }
}