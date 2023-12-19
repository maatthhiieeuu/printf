/*

Exercice 3 : Comparaison de Chaînes

Objectif : Écrire un programme qui compare deux chaînes et indique si elles 
sont identiques ou non, sans utiliser strcmp.

    Approche : Comparez les chaînes caractère par caractère jusqu'à trouver 
    une différence ou atteindre la fin de l'une des chaînes.

*/

 char	*ft_strcat(char *s1, char *s2)
{
	size_t	len_s1;
	size_t	len_s2;
	char *result;

	if (!s1 || !s2)
		return (NULL);
	len_s1 = sizeof(s1) / sizeof(char *);
	len_s2 = sizeof(s2) / sizeof(char *);
	result = (char *)malloc((i + j + 1) * (sizeof(char)));
	if (!result)
		return (NULL);
	while (*s1)
	{
		*result = *s1;
		result++;
		s1++; 
	}
	while (*s2)
	{
		*result = *s2;
		result++;
		s2++; 
	}
	*result = '\0';
	return (result);
}

int main(void)
{
	char	s1[10] = "1234";
	char	src[] = "56789";
	
	printf("%s\n", ft_strcat(s1, src));
	return (0);
}