#include "libft.h"
#include "ft_printf.h"

void	putnstr_bonus(t_format *option, char *s, int n)
{
	if (!s)
		return ;
	while (*s != '\0' && n > 0)
	{
		write(1, s, 1);
		option->output += 1;
		s++;
		n--;
	}
}
