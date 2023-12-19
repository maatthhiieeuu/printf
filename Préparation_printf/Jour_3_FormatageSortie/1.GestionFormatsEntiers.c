#include <stdio.h>
#include <unistd.h>

size_t	ft_intlen(const int *str)
{
	size_t	i;

	i = 0;
	if (!str)
		return(-1);
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

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
		ft_putnbr_fd(n / 10, fd);
	c = n % 10 + 48;
	write(fd, &c, 1);
}

void 	decimalToOctal(long int num)
{
	int i;
	int octalNum[50];
	size_t len_octalNum;

	i = 0;
	while(num != 0)
	{
			octalNum[i] = num % 8;
			num /= 8;
			i++;
	}
	i--;
	while (i >= 0)
	{
		ft_putnbr_fd(octalNum[i], 1);
		i--;
	}
	ft_putchar('\n');

}

int main(void)
{
	long int nbr;

	nbr = 24;  //en octal = 6537
	decimalToOctal(nbr);
}