#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include "libft/libft.h"
#include "printf/ft_printf.h"

int main(void)
{
	printf("Début de main!\n");
	char lettre;
	int nombre;
	char phrase[] = "coccinelle";
	int *adresse;

	nombre = 24;
	lettre = 'a';
	adresse = &nombre;

	ft_printf("la %0c", lettre);

    return 0;
}


/*2. ACONFIRMER !!!

	Bonus Flags: '# + ' (Espace)

    %c, %s, %p :
        Ces conversions ne sont généralement pas affectées par ces drapeaux.
    %d, %i :
        Entrée : Un entier.
        Sortie : L'entier formaté avec un espace ou un signe '+' devant les nombres positifs si spécifié.
    %u :
        Entrée : Un entier non signé.
        Sortie : Comme %d et %i, mais pour des entiers non signés.
    %x, %X :
        Entrée : Un entier non signé.
        Sortie : L'entier non signé formaté en hexadécimal avec '0x' ou '0X' ajouté devant si le drapeau '#' est utilisé.*/

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