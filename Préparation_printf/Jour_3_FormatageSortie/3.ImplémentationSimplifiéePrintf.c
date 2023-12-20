#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdbool.h>

int	ft_atoi(const char *s)	/************************************/
{
	int	i;
	int	sign;
	int	result;

	result = 0;
	sign = 1;
	i = 0;
	while (s[i] == ' ' || (s[i] >= '\t' && s[i] <= '\r'))
	{
		i++;
	}
	if (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		result = (result * 10) + (s[i] - 48);
		i++;
	}
	return (result * sign);
}


/*8888888888888888888888888888888888888888888888888888888888888888888888888888*/


int	ft_isdigit(int c) /*********************************************/
{
	return (c >= '0' && c <= '9');
}


/*8888888888888888888888888888888888888888888888888888888888888888888888888888*/


void	ft_putchar(int c)/*******************************************/
{
	write(1, &c, 1);
}


/*8888888888888888888888888888888888888888888888888888888888888888888888888888*/


void	ft_putnbr(int n)/********************************************/
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


/*8888888888888888888888888888888888888888888888888888888888888888888888888888*/


void	ft_putstr_fd(char *s, int fd)/*******************************/
{
	if (!s)
		return ;
	while (*s != '\0')
	{
		write(fd, s, 1);
		s++;
	}
}


/*8888888888888888888888888888888888888888888888888888888888888888888888888888*/


bool	is_number(const char *format, va_list args, int *i)
{
	return (format[*i] >= 0 && format[*i] <= 2147483647);
}


/*8888888888888888888888888888888888888888888888888888888888888888888888888888*/

void	decimalManagement(const char *format, va_list args, int **i)
{
	bool flag;

	if (format[**i + 1] == '0')
		flag = true;
	if (flag && ft_isdigit(format[**i + 2]) && format[**i + 3] == 'd')
	{
		int 	displayFormat;
		int 	nbrDigit;
		int 	number;
		int 	numberCpy;

		displayFormat = ft_atoi(&format[**i]);
		nbrDigit = 0;
		number = va_arg(args, int);
		numberCpy = number;
		printf("test valeur atoi = %d", displayFormat);
		while (numberCpy > 9)
		{
			numberCpy /= 10;
			nbrDigit++;
		}
		while (nbrDigit <= displayFormat)
		{
			ft_putchar('0');
			nbrDigit++;
		}
	}
}

/*8888888888888888888888888888888888888888888888888888888888888888888888888888*/


void	ft_format(const char *format, va_list args, int *i)
{
	if (!format)//	format = NULL;
		return;
	if (format[*i + 1] == 'd' || format[*i + 1] == 'd' || format[*i + 1] == 'd')	// %d
	{
			decimalManagement(format, args, &i);
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
	else
		return;	
}


/*8888888888888888888888888888888888888888888888888888888888888888888888888888*/


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


/*8888888888888888888888888888888888888888888888888888888888888888888888888888*/


int main(void)
{
	char s[] = "La mie du pain";
	int d = 12;
	char c = 'G';
	char b = '%';

	ft_printfSimplifie("FONCTION FT\nTest des chaines de caracteres : %s\nTest des entiers : %06d\nTest des caractere : %c\nTest de symbole = %c\n", s, d, c, b);

	printf("\n\nFONCTION ORIGINAL\nTest des chaines de caracteres : %s\nTest des entiers : %06d\nTest des caractere : %c\nTest de symbole = %c\n", s, d, c, b);
	

	return (0);	
}