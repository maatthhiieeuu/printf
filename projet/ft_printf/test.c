#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include "libft/libft.h"
#include "printf/ft_printf.h"

int main(void)
{
	//printf("Début de 0.main\n");
	char lettre;
	int nombre;
	char phrase[] = "coccinelle";
	int *adresse;

	nombre = 24;
	lettre = 'A';
	adresse = &nombre;

    ft_printf("FT = *%c*", lettre);
    printf("\n");
    printf("OR = *%c*", lettre);
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
    printf("\n");
    ft_printf("FT %%.c = *%.c*", lettre);
    printf("\n");
    printf("OR %%.c = *%.c*", lettre);
    printf("\n");
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
    return 0;
}



/*Règles de Combinaison et Priorités pour printf

    Cumul de Drapeaux :
        Plusieurs drapeaux peuvent être combinés, comme +, -, 0, #, et (espace). Exemple : %+5d, %-#x.

    Priorités et Comportements Spécifiques :
        Drapeau - (alignement à gauche) : A la priorité sur le drapeau 0. Exemple : %-05d produit un alignement à gauche avec des espaces.
        Drapeau + (affiche le signe plus) : Prend le dessus sur le drapeau espace ( ). Exemple : % +d montre un signe + plutôt qu'un espace.
        Drapeau 0 (remplissage avec des zéros) : Ignoré si la précision est spécifiée pour des nombres. Exemple : %05.3d remplit avec des espaces au lieu de zéros.
        Drapeau # : Utilisé pour %o, %x, %X (ajoute 0, 0x, 0X respectivement). Sans impact sur %d ou %u.

    Largeur et Précision :
        Possibilité de spécifier à la fois une largeur de champ et une précision. Exemple : %5.2d (largeur minimale de 5, précision de 2).
        La précision a la priorité sur la largeur pour les nombres. Si la précision requiert plus de place que la largeur spécifiée, cette dernière sera ajustée.

    Comportements Variant selon les Compilateurs :
        Certaines combinaisons de drapeaux peuvent avoir un comportement variable en fonction des compilateurs ou des standards du langage C. Il est conseillé de tester ces combinaisons dans votre environnement spécifique pour vérifier leur comportement.*/