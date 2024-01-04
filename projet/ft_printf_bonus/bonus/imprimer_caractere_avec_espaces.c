#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include "libft.h"
#include "ft_printf.h"

void 	imprimer_caractere_avec_espaces(va_list args, t_format *option) // nom en anglais : print_char_with_spaces
{
	//printf("Début de fonction de .imprimer_caractere_avec_espaces\n");
	size_t j;
	char character;

	j = 0;
	character = va_arg(args, int);
	if (option->minus == false)
	{
		while (j + 1 < option->space_array )
		{
			ft_putchar_fd(' ', 1);
			j++;
		}
		ft_putchar_fd(character, 1);
	}
	else if (option->minus == true)
	{
		ft_putchar_fd(character, 1);
		while (j + 1 < option->space_array)
		{
			ft_putchar_fd(' ', 1);
			j++;
		}
	}
}