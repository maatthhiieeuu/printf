/*

Exercice 4 : Concaténation de Chaînes

Objectif : Concaténer deux chaînes dans une nouvelle chaîne sans utiliser strcat.

    Approche : Copiez la première chaîne dans la nouvelle, puis ajoutez 
    la seconde à la suite.

*/

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

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
} char	*ft_strcat(char *s1, char *s2)
{
	size_t	len_s1;
	size_t	len_s2;
	size_t	i;
	char *result;

	if (!s1 || !s2)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	i = 0;
	result = (char *)malloc((len_s1 + len_s2 + 1) * (sizeof(char)));
	if (!result)
		return (NULL);
	while (*s1)
	{
		result[i] = *s1;
		s1++; 
		i++;
	}
	while (*s2)
	{
		result[i] = *s2;
		i++;
		s2++; 
	}
	result[i] = '\0';
	return (result);
}

int main(void)
{
	char	s1[] = "1234";
	char	s2[] = "56789";
	char *result;
	result = ft_strcat(s1, s2);

	printf("%s\n", result);
	return (0);
}