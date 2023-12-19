/*

Exercice 5 : Retournement de Chaîne

Objectif : Écrire une fonction qui retourne une chaîne (la première devient la dernière, etc.).

    Approche : Échangez les caractères de début et de fin, en vous déplaçant vers le centre.

*/

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

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

char	*strRevers(char *s)
{
	size_t	s_len;
	char	*result;
	size_t	i;

	i = 0;
	if (!s)
		return(NULL);
	s_len = ft_strlen(s);
	result = (char *)malloc((s_len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	while (s_len > 0)
	{
		result[i++] = s[s_len - 1];
		s_len--;
	}
	result[i] = '\0';
	return (result);
}

int main(void)
{
	char	str[] = "9876543210";
	char	*result;
	result = strRevers(str);
	printf("resultat = \"%s\"\n", result);
	free (result);
	return (0);
}