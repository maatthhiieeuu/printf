#include <stdbool.h>
#include <stdio.h>
#include <unistd.h>

void	ft_putchar_fd(int c, int fd)
{
	write(fd, &c, 1);
}

/*--------------------------------------------------------------------------*/

void	ft_putnbr_fd(int n, int fd)
{
	char	c;

	if (n < 0)
	{
		write(fd, "-", 1);
		if (n == -2147483648)
		{
			write(fd, "2", 1);
			n = -147483648;
		}
		n = -n;
	}
	if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
	}
	c = n % 10 + 48;
	write(fd, &c, 1);
}

/*--------------------------------------------------------------------------*/

void	formatZero(int n, int size, bool flag)
{
	int nCpy;
	int	nbrDigit;
	int	count;

	nCpy = n;
	nbrDigit = 0;
	count = 0;
	while (nCpy > 0)
	{
		nCpy /= 10;
		nbrDigit++;
	}
	while ((flag == true) && ((nbrDigit + count) < size))
	{
		ft_putchar_fd('0', 1);
		count++;
	}
	ft_putnbr_fd(n, 1);
}

/*--------------------------------------------------------------------------*/

int main(void)
{
	formatZero(-52, 2, false);
	ft_putchar_fd('\n', 1);
	formatZero(-52, 2, true);
	ft_putchar_fd('\n', 1);
	formatZero(-52, 9, false);
	ft_putchar_fd('\n', 1);
	formatZero(-52, 9, true);
	ft_putchar_fd('\n', 1);
	formatZero(-52, 500, false);
	ft_putchar_fd('\n', 1);
	formatZero(-52, 500, true);
	ft_putchar_fd('\n', 1);
	formatZero(-52, -200, false);
	ft_putchar_fd('\n', 1);
	formatZero(-52, -200, true);
	ft_putchar_fd('\n', 1);
}