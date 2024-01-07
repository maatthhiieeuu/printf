#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include "libft/libft.h"
#include "printf/ft_printf.h"

int main(void)
{
	    // Variable pour les tests de pointeurs
    char lettre = 'A';
    char *ptr = &lettre;
    char phrase[] = "la coccinelle de 3cm";
    char *str = "Hello, world!";
/*-------------------------------------------------------*/
/*|                                                     |*/
/*|                   FT_PRINTF BONUS                   |*/
/*|                                                     |*/
/*-------------------------------------------------------*/
    
    // Comparaison des chaînes avec flag.
    printf("OR :%%16p = *%16p*\n", ptr);
    ft_printf("FT :%%16p = *%16p*\n\n", ptr);
    printf("OR :%%-16p = *%-16p*\n", ptr);
    ft_printf("FT :%%-16p = *%-16p*\n\n", ptr);
    printf("OR :%%.17p = *%.17p*:\n", ptr);
    ft_printf("FT :%%.17p = *%.17p*:\n\n", ptr);
    printf("OR :%%-.23p = *%-.23p*:\n", ptr);
    ft_printf("FT :%%-.23p = *%-.23p*:\n\n", ptr);




   /* printf("Or %%s: *%s*\n", str);
    ft_printf("Ft %%s: *%s*\n\n", str);
    printf("Or %%19s: *%19s*\n", str);
    ft_printf("Ft %%19s: *%19s*\n\n", str);
    printf("Or %%.5s: *%.5s*\n", str);
    ft_printf("Ft %%.5s: *%.5s*\n\n", str);
    printf("Or %%10.5s: *%10.5s*\n", str);
    ft_printf("Ft %%10.5s: *%10.5s*\n\n", str);
    printf("Or %%-19s: *%-19s*\n", str);
    ft_printf("Ft %%-19s: *%-19s*\n\n", str);
    printf("Or %%-10.5s: *%-10.5s*\n", str);
    ft_printf("Ft %%-10.5s: *%-10.5s*\n\n", str);

    
    ft_printf("FT %%c = *%c*", lettre);
    printf("\n");
    printf("OR %%c = *%c*", lettre);
    printf("\n\n");
    ft_printf("FT %%5c = *%5c*", lettre);
    printf("\n");
    printf("OR %%5c = *%5c*", lettre);
    printf("\n\n");
    ft_printf("FT %%-5c = *%-5c*", lettre);
    printf("\n");
    printf("OR %%-5c = *%-5c*", lettre);
    printf("\n\n");
    ft_printf("FT %%0c = *%0c*", lettre);
    printf("\n");
    printf("OR %%0c = *%0c*", lettre);
    printf("\n\n");
    ft_printf("FT %%.c = *%.c*", lettre);
    printf("\n");
    printf("OR %%.c = *%.c*", lettre);
    printf("\n\n");
    ft_printf("FT %%5.3c = *%5.3c*", lettre);
    printf("\n");
    printf("OR %%5.3c = *%5.3c*", lettre);
    printf("\n\n");
    ft_printf("FT %%+c = *%+c*", lettre);
    printf("\n");
    printf("OR %%+c = *%+c*", lettre);
    printf("\n\n");
    ft_printf("FT %% c = *% c*", lettre);
    printf("\n");
    printf("OR %% c = *% c*", lettre);
    printf("\n\n");
    ft_printf("FT %%#c = *%#c*", lettre);
    printf("\n");
    printf("OR %%#c = *%#c*", lettre);
    printf("\n\n");
    ft_printf("FT %%-0c = *%-0c*", lettre);
    printf("\n");
    printf("OR %%-0c = *%-0c*", lettre);
    printf("\n\n");
    ft_printf("FT %%+-# 05.c = *%+-# 05.c");
    printf("\n");
    printf("OR %%+-# 05.c = *%+-# 05.c");
    printf("\n\n");*/


/*-------------------------------------------------------*/
/*|                                                     |*/
/*|                FT_PRINTF OBLIGATOIRE                |*/
/*|                                                     |*/
/*-------------------------------------------------------*/

  /*  printf("Original printf %%c: %c\n", lettre);
    ft_printf("Votre ft_printf %%c: %c\n\n", lettre);


    printf("Original printf %%s: %s\n", str);
    ft_printf("Votre ft_printf %%s: %s\n\n", str);


    printf("Original printf %%p: %p\n", ptr);
    ft_printf("Votre ft_printf %%p: %p\n\n", ptr);

    printf("Original printf %%d: %d\n", 42);
    ft_printf("Votre ft_printf %%d: %d\n\n", 42);
    printf("Original printf %%i: %i\n", -42);
    ft_printf("Votre ft_printf %%i: %i\n\n", -42);


    printf("Original printf %%u: %u\n", 42u);
    ft_printf("Votre ft_printf %%u: %u\n\n", 42u);
    printf("Original printf %%u: %u\n", 4294967295u);
    ft_printf("Votre ft_printf %%u: %u\n\n", 4294967295u);


    printf("Original printf %%x: %x\n", 42);
    ft_printf("Votre ft_printf %%x: %x\n\n", 42);
    printf("Original printf %%X: %X\n", 42);
    ft_printf("Votre ft_printf %%X: %X\n\n", 42);


    printf("Original printf %%%%: %%\n");
    ft_printf("Votre ft_printf %%%%%: %%\n\n");*/
   
    return 0;
}