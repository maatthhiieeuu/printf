#include "libft.h"
#include "ft_printf.h"

void	compter_caractere_adresse(t_format *option)
{
	//printf("\nDébut de compter_caractere_adresse \n");
	size_t result;
  uintptr_t recovery_address;


  result = 0;
  recovery_address = option->address_int;
  while (recovery_address > 0)
  {
    recovery_address /= 10;
    result++;
  }
  //printf("\nresult = %ld\n\n", result);
  option->address_size = result - 1;
}