/*

Exercice 3 : Formatage Basique

Objectif : Créer une fonction qui prend une chaîne de format avec des %s 
et %d et les remplace par les arguments variadiques correspondants.

    Approche : Analysez la chaîne de format pour %s et %d, puis utilisez 
    va_arg pour récupérer et afficher les valeurs correspondantes.

*/

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>


void    ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}

void    ft_putnbr_fd(int n, int fd)
{
    char    c;

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

void    ft_putstr_fd(char *s, int fd)
{
    if (!s)
        return ;
    while (*s != '\0')
    {
        write(fd, s, 1);
        s++;
    }
}

void    simplePrintf(const char *format, ...)
{
    int i;

    i = 0; 
    va_list arg;
    va_start(arg, format);
    while (format[i])
    {
        if(format[i] == '%')
        {
            if (format[i + 1] == 'd')
            {
                int nbr;

                nbr = va_arg(arg, int);
                ft_putnbr_fd(nbr, 1);
                i++;
            }
            else if (format[i + 1] == 's')
            {
                ft_putstr_fd(va_arg(arg, char *), 1);
                i++;
            }

        }
        else
        ft_putchar_fd(format[i], 1);
        i++;    
    }
    va_end(arg);
}


int main(void)
{
    simplePrintf("Ceci est un test : %s et nombre %d.\n", "chaîne", 42);

    return (0);
}