#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdbool.h>

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

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	while (*s != '\0')
	{
		write(fd, s, 1);
		s++;
	}
}

bool	is_number(const char *format, va_list args, int *i)
{
	return (format[*i] >= 0 && format[*i] <= 2147483647);
}

void	ft_format(const char *format, va_list args, int *i)
{
	if (!format)
		return;
	if (format[*i + 1] == 'd')
	{
		int temp;

		temp = va_arg(args, int);
		ft_putnbr(temp);
		*i += 2;
	}
	else if (format[*i + 1] == 'c')
	{
		char temp;

		temp = va_arg(args, int);
		ft_putchar(temp);
		*i += 2;
	}
	else if (format[*i + 1] == 's')
	{
		ft_putstr_fd(va_arg(args, char *), 1);
		*i += 2;
	}
	else if (format[*i + 1] == '%')
	{
		ft_putchar('%');
		*i += 2;
	}
	if (format[*i] == 10)
	{
		ft_putchar(10);
	}
	if (format[*i] == )
	else
		return;	
}

void	ft_printfSimplifie(const char *format, ...)
{
	int	i;

	i = 0;
	if(!format)
		return;
	va_list args;

	va_start(args, format);
	while(format[i])
	{
		if ((format[i] == '%') || (format[i] == 92))
		{
			ft_format(format, args, &i);
		}
		else
			ft_putchar(format[i]);
		i++;
	}

	va_end(args);
}

int main(void)
{
	char s[] = "La mie du pain";
	int d = 12;
	char c = 'G';
	char b = '%';

	ft_printfSimplifie("FONCTION FT\nTest des chaines de caracteres : %s\nTest des entiers : %10d\nTest des caractere : %c\nTest de symbole = %c\n", s, d, c, b);

	printf("\n\nFONCTION ORIGINAL\nTest des chaines de caracteres : %s\nTest des entiers : %d\nTest des caractere : %c\nTest de symbole = %c\n", s, d, c, b);
	

	return (0);	
}