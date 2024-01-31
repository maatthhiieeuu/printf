#include "libft.h"

void	ft_putnstr_fd(char *s, int n, int fd)
{
	if (!s)
		return ;
	while (*s != '\0' && n > 0)
	{
		write(fd, s, 1);
		s++;
		n--;
	}
}
