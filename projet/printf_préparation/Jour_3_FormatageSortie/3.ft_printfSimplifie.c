#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdbool.h>

int	ft_atoi(const char *s)	/************************************/
{
	int    i;
    int    sign;
    int    result;

    result = 0;
    sign = 1;
    i = 0;

    while ((s[i] >= 0 && s[i] <= 47) || (s[i] >= 58 && s[i] <= 127))
    {     
      if (s[i] == '-' || s[i] == '+')
      {
          if (s[i] == '-')
              sign *= -1;
          i++;
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


void    ft_putFloat(double n, int size)
{
  int count;
  int int_cpy_n;
 
  count = 0;
  int_cpy_n = n;
  ft_putnbr(n);
  if (size > 0)
  	ft_putchar('.');
  n -= int_cpy_n;  
  while (count < size)
  {
    while (count <  (size - 1))
    {
      n *= 10;
      count++;
      ft_putnbr(n);
      int_cpy_n = n;
      n -= int_cpy_n;
    }  
    n *= 10;
    int_cpy_n = n;
    n -= int_cpy_n;
    n*=10;
    if(n > 5)
      int_cpy_n += 1;
    ft_putnbr(int_cpy_n);
    count++;
  }
  
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


int 	countDigit(int n)
{
	int result;

	result = 1;
	while (n > 9)
		{
			n /= 10;
			result++;
		}
		return (result);
}


/*8888888888888888888888888888888888888888888888888888888888888888888888888888*/


void	spaceManagement(const char *format, va_list args, int ***i)
{
	if (!format)
		return;
	if ((ft_isdigit(format[***i + 1])) && (format[***i + 2] == 'd'))//	%6d
	{
		int 	displayFormat;
		int 	nbrDigit;
		int 	number;

		displayFormat = ft_atoi(&format[***i]);
		number = va_arg(args, int);
		if (number > 9)
			nbrDigit = countDigit(number);
		while (nbrDigit < displayFormat)
		{
			ft_putchar(' ');
			nbrDigit++;
		}
		ft_putnbr(number);
			***i += 2;
	}
}


/*8888888888888888888888888888888888888888888888888888888888888888888888888888*/


void	flagManagement(const char *format, va_list args, int ***i)
{
	if (!format)
		return;
	if (ft_isdigit(format[***i + 2]) && format[***i + 3] == 'd')
	{
		int 	displayFormat;
		int 	nbrDigit;
		int 	number;

		displayFormat = ft_atoi(&format[***i]);
		number = va_arg(args, int);
		if (number > 9)
			nbrDigit = countDigit(number);
		while (nbrDigit < displayFormat)
		{
			ft_putchar('0');
			nbrDigit++;
		}
		ft_putnbr(number);
		***i += 3;
	}
}



/*8888888888888888888888888888888888888888888888888888888888888888888888888888*/


void  	floatManagement(const char *format, va_list args, int ***i)
{

	if (format[***i + 1] == 'f')//	%f normal
	{
		double temp;
		temp = va_arg(args, double);
		ft_putFloat(temp, 6);
		***i += 1;
	}
	else if ((format[***i + 1] != '0') && (ft_isdigit(format[***i + 1])))//		%4f
	{
		double temp;
		int size;
		temp = va_arg(args, double);
		size = ft_atoi(format + ***i);
		//spaceManagement(format, args, &i);
		ft_putFloat(temp, size);
		***i += 3;

	}
	else if ((format[***i + 1] == '0') && (ft_isdigit(format[***i + 2])))//		%04f
	{
		double temp;
		int size;
		temp = va_arg(args, double);
		size = ft_atoi(format + ***i);
		ft_putFloat(temp, size);
		***i += 3;
	}
	else if ((format[***i + 1] == '.') && (ft_isdigit(format[***i + 2])))//		%.4f
	{
		double temp;
		int size;
		temp = va_arg(args, double);
		size = ft_atoi(format + ***i);
		ft_putFloat(temp, size);
		***i += 3;
	}
	

}

/*8888888888888888888888888888888888888888888888888888888888888888888888888888*/


void	decimalManagement(const char *format, va_list args, int **i)
{
	if (!format)
		return;

	if (format[**i + 1] == 'd')//	%d normal
	{
		int temp;
		temp = va_arg(args, int);
		ft_putnbr(temp);
		**i += 2;
	}
	if ((format[**i + 1] > '0') && (format[**i + 1] <= '9'))//	%6d
		spaceManagement(format, args, &i);
	if (format[**i + 1] == '0')//	%06d
		flagManagement(format, args, &i);

	if (format[**i + 1] == 'f')//	%f normal
		floatManagement(format, args, &i);
	if ((format[**i + 1] == '.') && (ft_isdigit(format[**i + 2])))//   %.4f
		floatManagement(format, args, &i);
	//if ((ft_isdigit(format[**i + 1])) && (format[**i + 2] == '') && )//    %4

}

/*8888888888888888888888888888888888888888888888888888888888888888888888888888*/


void	ft_format(const char *format, va_list args, int *i)
{
	if (!format)//	format = NULL;
		return;
	if (format[*i + 1] == 'd' || format[*i + 2] == 'd' || format[*i + 3] == 'd')	// %d
		decimalManagement(format, args, &i);
	if (format[*i + 1] == 'f' || format[*i + 2] == 'f' || format[*i + 3] == 'f')	// %f  %.3f%
		decimalManagement(format, args, &i);
	 if (format[*i + 1] == 'c')
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
		ft_putchar(10);
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
	/*char s[] = "La mie du pain";
	int d = 12;
	char c = 'G';
	char b = '%';
	float a = 2.1234566;

	//ft_printfSimplifie("FONCTION FT\nTest des string = %s\nTest des int = %d\nTest des intsapce = %9d\nTest des intzero = %09d\nTest des char = %c\nTest des symbole = %c\nTest des floatspace = %9f\nTest des floatzero = %09f\nTest des float = %f\nTest des floatprecision = %.3f\nXX\n", s, d, d, d, c, b, a, a, a, a);
	printf("Test des caractere : %p\n", d);

	//printf("\nFONCTION OR\n\nTest des string = %s\nTest des int = %d\nTest des intsapce = %9d\nTest des intzero = %09d\nTest des char = %c\nTest des symbole = %c\nTest des floatspace = %9f\nTest des floatzero = %09f\nTest des float = %f\nTest des floatprecision = %.3f\nXX\n", s, d, d, d, c, b, a, a, a, a);
	//printf("Test des caractere : %c\nTest de symbole = %c\n", c, b);
*/
	int i = 10;
  printf("or i = %p\n", i);
  ft_printfSimplifie("ft i = %p\n", i);
 // int *pointer = &i;
  //printf("adresse de i = %c\n", &i);
 // printf("adresse de i dans le pointeur  = %p\n", pointer);
  //printf("adresse de i dans le pointeur  = %p\n", &pointer);
	return (0);	
}
