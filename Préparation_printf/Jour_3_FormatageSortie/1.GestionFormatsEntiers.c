#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

/*-----------------------------------------------------------------------------*/


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

/*-----------------------------------------------------------------------------*/


void 	decimalToOctal(int num)
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
}

/*-----------------------------------------------------------------------------*/


void	decimalToHexadecimal(int num)
{
	int	i;
	int	hexaNum[50];
	char hexadecimalMin[] = "0123456789abcdef";

	i = 0;
	while (num != 0)
	{
		hexaNum[i] = num % 16;
		num /= 16;
		i++;
	}
	i--;
	while (i >= 0)
	{
		if (hexaNum[i] >= 0 && hexaNum[i] <= 16)
		{
			char temp;

			temp = hexadecimalMin[hexaNum[i]];
			ft_putchar(temp);
		}
		i--;
	}
}

/*-----------------------------------------------------------------------------*/


void	format(char *s, ...)
{
	int	i;

	i = 0;
	va_list args;

	va_start(args, s);
	if (!s)
		return;
	while (s[i] != '\0')
	{
		if (s[i] == '%')
		{

			if (s[i + 1] == 'd')
			{
				int tempNumberDec;

				tempNumberDec = va_arg(args, int);
				ft_putnbr_fd(tempNumberDec, 1);
				ft_putchar(' ');
				i++;
			}	
			else if (s[i + 1] == 'o')
			{
				int tempNumberOct;

				tempNumberOct = va_arg(args, int);
				decimalToOctal(tempNumberOct);
				ft_putchar(' ');
				i++;
			}
			else if (s[i + 1] == 'x')
			{
				int tempNumberHex;

				tempNumberHex = va_arg(args, int);
				decimalToHexadecimal(tempNumberHex);
				ft_putchar(' ');
				i++;
			}
			else if (s[i + 1] == '%')
			{
				ft_putchar('%');
				ft_putchar(' ');
			}
			i++;
		}
		else
		ft_putchar(s[i]);
	i++;
	}
	va_end(args);

}

/*-----------------------------------------------------------------------------*/


int main(void)
{
	int num;

	num = 195;
	format("en decimal %d s'ecrit: %d.", num, num);
	ft_putchar('\n');
	format("en octal %d s'ecrit: %o.", num, num);
	ft_putchar('\n');
	format("en hexadecimal %d s'ecrit: %x.", num, num);
	ft_putchar('\n');
}