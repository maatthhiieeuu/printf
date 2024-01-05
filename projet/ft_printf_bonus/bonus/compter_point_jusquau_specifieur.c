#include "libft.h"
#include "ft_printf.h"

void 	compter_point_jusquau_specifieur(t_format *option, char *point_ptr) // nom en anglais : count_to_specifier
{
	//printf("- Début de compter_point_jusquau_specifieur :");

	size_t i;

    i = 0;
    while (point_ptr[i] != option->specifier)
    {
        i++;
    }
    if (point_ptr[i] == option->specifier)
        {
            option->digit_point_until_specifier = i;
        }
}