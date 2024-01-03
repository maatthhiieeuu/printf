/*Exercice 2 : Fonction d'Affichage Variadique

Objectif : Écrire une fonction qui affiche un nombre variable 
de chaînes de caractères.

    Approche : Utilisez les fonctions variadiques pour parcourir 
    et afficher chaque chaîne de caractères passée en argument.

*/

#include <stdio.h>
#include <stdarg.h>

void    strDisplay(int nbr_arg, ...)
{
    int i;

    i = 0;
    va_list arg;
    va_start(arg, nbr_arg);
    if (nbr_arg == 0)
        return;
    while (i < nbr_arg)
    {
        char *str;

        str = va_arg(arg, char *);
        if (str == NULL)
        {
            printf("argument : %d forbiden\n", i + 1);
            return;
        }
        else
            printf("%s\n",str);
        i++;
    }
    va_end(arg);
}


int main(void)
{
    char s1[] = "la souris verte.";
    char s2[] = "Mange du fromage.";
    char s3[] = "Sur la table basse.";
    char *s4 = NULL;

    strDisplay(4, s1, s2, s3, s4);

    return (0);
}