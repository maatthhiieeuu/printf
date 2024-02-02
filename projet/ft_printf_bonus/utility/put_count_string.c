#include "libft.h"
#include "ft_printf.h"

void	put_count_string(char *s, int *result)
{
	if (!s)
		return ;
	while (*s != '\0')
	{
		write(1, s, 1);
		*result += 1;
		s++;
	}
}