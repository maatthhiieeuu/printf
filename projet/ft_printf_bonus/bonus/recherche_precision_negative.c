#include "libft.h"
#include "ft_printf.h"

void    recherche_precision_negative(const char *point_ptr, t_format *option) // nom en anglais : process_numeric_option
{
    //printf("\n- Début de recherche_precision_negative :\n\n");
	size_t j;

    j = 0;
	while (j < option->digit_point_until_specifier && option->negative_precision == false)
	{
		if (ft_atoi(point_ptr + j) < 0)
			option->negative_precision = true;
		j++;
  	}
}
