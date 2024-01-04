#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include "libft/libft.h"
#include "printf/ft_printf.h"

int main(void)
{
	    // Variable pour les tests de pointeurs
    int test_var = 42;
    void *ptr = &test_var;

    // Comparaison des caractères
    printf("Original printf: %c\n", 'A');
    ft_printf("Votre ft_printf: %c\n\n", 'A');

    // Comparaison des chaînes
    printf("Original printf: %s\n", "Hello, world!");
    ft_printf("Votre ft_printf: %s\n\n", "Hello, world!");

    // Comparaison des pointeurs
    printf("Original printf: %p\n", ptr);
    ft_printf("Votre ft_printf: %p\n\n", ptr);

    // Comparaison des entiers signés
    printf("Original printf: %d\n", 42);
    ft_printf("Votre ft_printf: %d\n", 42);
    printf("Original printf: %i\n", -42);
    ft_printf("Votre ft_printf: %i\n\n", -42);

    // Comparaison des entiers non signés
    printf("Original printf: %u\n", 42u);
    ft_printf("Votre ft_printf: %u\n", 42u);
    printf("Original printf: %u\n", 4294967295u);
    ft_printf("Votre ft_printf: %u\n\n", 4294967295u);

    // Comparaison des nombres hexadécimaux
    printf("Original printf: %x\n", 42);
    ft_printf("Votre ft_printf: %x\n", 42);
    printf("Original printf: %X\n", 42);
    ft_printf("Votre ft_printf: %X\n\n", 42);

    // Comparaison du pourcentage
    printf("Original printf: %%\n");
    ft_printf("Votre ft_printf: %%\n\n");
   
    return 0;
}