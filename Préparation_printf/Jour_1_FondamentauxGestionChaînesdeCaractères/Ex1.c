/*

Exercice 1 : Longueur de Chaîne

Objectif : Écrire un programme qui calcule la longueur d'une chaîne sans 
utiliser strlen.

    Approche : Parcourez la chaîne jusqu'au caractère nul ('\0') et comptez 
    les caractères.

    */

#include <stddef.h>
#include <stdio.h>

size_t	ft_strlen(char *s)
{
	size_t	i;

	i = 0;
	if (!s)
		return(0);
	while (s[i])
	{
		i++;
	}
	return (i);
}

int main(void)
{
	char str[] = "les pommes";
	printf("%d\n", ft_strlen(str));
	return (0);
}