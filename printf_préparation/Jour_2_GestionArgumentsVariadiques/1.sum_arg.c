/*

Exercice 1 : Fonction sum Variadique

Objectif : Créer une fonction qui calcule la somme d'un nombre variable d'entiers.

    Approche : Utilisez les macros va_start, va_arg, et va_end pour 
    parcourir et additionner les entiers passés à la fonction.

*/

#include <stdarg.h>
#include <stdio.h>

int	sum(int nbr_arg,...)
{
	va_list args;

	va_start(args, nbr_arg);
	int result = 0;
	int i = 0;
	if (nbr_arg == 0)
		return(-1);
	while (i < nbr_arg)
	{
		result += va_arg(args, int);
		i++;
	}
	return (result);
}

int 	main(void)
{
	int	a;
	int	b;
	int c;
	int d;
	int e;
	int result;

	a = 1;
	b = 2;
	c = 3;
	d = 4;
	e = 5;
	result = sum(5, a, b, c, d, e);
	printf("a = %d\nb = %d\na + b = %d\n",a, b, result);
	return (0);
}