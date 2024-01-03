/*

Exercice 2 : Copie de Chaîne

Objectif : Créer une fonction qui copie une chaîne dans une autre sans 
utiliser strcpy.

    Approche : Parcourez la chaîne source caractère par caractère et 
    copiez chaque caractère dans la chaîne de destination.

*/


#include <stddef.h>
#include <stdio.h>

size_t	ft_strlen(char *s)
{
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		i++;
	}
	return (i);
}

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	len_src;

	i = 0;
	if (!dest || !src)
		return (0);
	len_src = ft_strlen((char *)src);
	if (size == 0)
		return (len_src);
	while (i < size - 1 && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len_src);
}

int main(void)
{
	char	src[] = "La pomme.";
	char	dest[10];
	size_t	size = 10;
	ft_strlcpy(dest, src, size);
	printf("%s\n",dest);
	return (0);
}
