
#include "libft.h"
#include "ft_printf.h"

void	putstr_bonus(t_format *option, char *s)
{
	if (!s)
		return ;
	while (*s != '\0')
	{
		write(1, s, 1);
		option->output += 1;
		s++;
	}
}
