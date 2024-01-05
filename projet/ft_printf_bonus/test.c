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
    char *str = "Bonjour le monde";
/*-------------------------------------------------------*/
/*|                                                     |*/
/*|                   FT_PRINTF BONUS                   |*/
/*|                                                     |*/
/*-------------------------------------------------------*/
    
    // Comparaison des chaînes avec flag.

    

    /*printf("Or %%s: *%s*\n", str);
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
    ft_printf("Ft %%-10.5s: *%-10.5s*\n\n", str);*/



    // Comparaison des caractères avec flag.
    /*ft_printf("FT %%c = *%c*", lettre);
    printf("\n");
    printf("OR %%c = *%c*", lettre);
    printf("\n");
    ft_printf("FT %%5c = *%5c*", lettre);
    printf("\n");
    printf("OR %%5c = *%5c*", lettre);
    printf("\n");
    ft_printf("FT %%-5c = *%-5c*", lettre);
    printf("\n");
    printf("OR %%-5c = *%-5c*", lettre);
    printf("\n");
    ft_printf("FT %%0c = *%0c*", lettre);
    printf("\n");
    printf("OR %%0c = *%0c*", lettre);
    printf("\n");*/
    ft_printf("FT %%.c = *%.c*", lettre);
    printf("\n");
    printf("OR %%.c = *%.c*", lettre);
    printf("\n");/*
    ft_printf("FT %%5.3c = *%5.3c*", lettre);
    printf("\n");
    printf("OR %%5.3c = *%5.3c*", lettre);
    printf("\n");
    ft_printf("FT %%+c = *%+c*", lettre);
    printf("\n");
    printf("OR %%+c = *%+c*", lettre);
    printf("\n");
    ft_printf("FT %% c = *% c*", lettre);
    printf("\n");
    printf("OR %% c = *% c*", lettre);
    printf("\n");
    ft_printf("FT %%#c = *%#c*", lettre);
    printf("\n");
    printf("OR %%#c = *%#c*", lettre);
    printf("\n");
    ft_printf("FT %%-0c = *%-0c*", lettre);
    printf("\n");
    printf("OR %%-0c = *%-0c*", lettre);
    printf("\n");
    ft_printf("FT %%+-# 05.c = *%+-# 05.c");
    printf("\n");
    printf("OR %%+-# 05.c = *%+-# 05.c");
    printf("\n");*/
/*-------------------------------------------------------*/
/*|                                                     |*/
/*|                FT_PRINTF OBLIGATOIRE                |*/
/*|                                                     |*/
/*-------------------------------------------------------*/
    // Comparaison des caractères
    //printf("Original printf: %c\n", 'A');
    //ft_printf("Votre ft_printf: %c\n\n", 'A');

    // Comparaison des chaînes
    //printf("Original printf: %s\n", "Hello, world!");
    //ft_printf("Votre ft_printf: %s\n\n", "Hello, world!");

    // Comparaison des pointeurs
    //printf("Original printf: %p\n", ptr);
    //ft_printf("Votre ft_printf: %p\n\n", ptr);

    // Comparaison des entiers signés
    //printf("Original printf: %d\n", 42);
    //ft_printf("Votre ft_printf: %d\n", 42);
    //printf("Original printf: %i\n", -42);
    //ft_printf("Votre ft_printf: %i\n\n", -42);

    // Comparaison des entiers non signés
    //printf("Original printf: %u\n", 42u);
    //ft_printf("Votre ft_printf: %u\n", 42u);
    //printf("Original printf: %u\n", 4294967295u);
    //ft_printf("Votre ft_printf: %u\n\n", 4294967295u);

    // Comparaison des nombres hexadécimaux
    //printf("Original printf: %x\n", 42);
    //ft_printf("Votre ft_printf: %x\n", 42);
    //printf("Original printf: %X\n", 42);
    //ft_printf("Votre ft_printf: %X\n\n", 42);

    // Comparaison du pourcentage
    //printf("Original printf: %%\n");
    //ft_printf("Votre ft_printf: %%\n\n");
   
    return 0;
}