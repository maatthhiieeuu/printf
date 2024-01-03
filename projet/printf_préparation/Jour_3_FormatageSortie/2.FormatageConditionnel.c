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
	nbrDigit = 1;
	count = 0;
	if (n < 0)
		nbrDigit = 2;
	while (nCpy > 0)
	{
		
		nCpy /= 10;
		nbrDigit++;
	}
	while ((flag == true) && (nbrDigit < size) && (count < (size - nbrDigit)))
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
	printf("\n");
	formatZero(-52, 2, true);
	printf("\n");
	formatZero(-52, 3, false);
	printf("\n");
	formatZero(-52, 3, true);
	printf("\n");
	formatZero(-52, 4, false);
	printf("\n");
	formatZero(-52, 4, true);
	printf("\n");
	formatZero(-52, -200, false);
	printf("\n");
	formatZero(-52, -200, true);
}

/*
1:"-52"
2:"-52"
3:"-52"
4:"-52"
5:" -52"
6:"-052"
7:"-52 
8: null
*/