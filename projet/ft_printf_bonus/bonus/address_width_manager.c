
#include "libft.h"
#include "ft_printf.h"

void	address_width_manager(t_format *option)
{
	if (option->space_array > 0 && option->minus == false)
		print_address_with_field_width(option);
	else if (option->space_array > 0 && option->minus == true)
		print_address_with_field_width_and_minus(option);
	else if (option->space == true && option->space_array == 0)
		print_address_with_a_space(option);
}
