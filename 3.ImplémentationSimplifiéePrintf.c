#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	char	c;

	if (n < 0)
	{
		ft_putchar('-');
		if (n == -2147483648)
		{
			ft_putchar('2');
			n = -147483648;
		}
		n = -n;
	}
	if (n > 9)
	{
		ft_putnbr(n / 10);
	}
	c = n % 10 + 48;
	ft_putchar(c);
}

void	format()
{

}

void	ft_printfSimplifie(const char *format, ...)
{
	int	i;

	i = 0;
	va_list args;

	va_start(args, format);
	while(format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == 'd')
			{
				int temp;

				temp = va_arg(args, int);
				ft_putnbr(temp);
				i++;
			}
			else if (format[i + 1] == 'c')
			{
				char temp;

				temp = va_arg(args, char);
				ft_putchar(temp);
				i++;
			}
			else if (format[i + 1] == 's')
			{
				
			}
		}
		i++;
	}



	va_end(args);
}

int main(void)
{
	char s[] = "La mie du pain";
	int d = 25;
	char c = 'G';

	ft_printfSimplifie("Test des chaines de caracteres : %s\nTest des entiers : %d\nTest des caractere : %c\n", s, d, c);
}