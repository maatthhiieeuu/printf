#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include "libft/libft.h"
#include "printf/ft_printf.h"

int main(void)
{
	printf("debut de main!\n");
	int nombre;
	char lettre;
	char phrase[] = "";
	int *adresse;

	nombre = 24;
	lettre = 'a';
	adresse = &nombre;
	ft_printf("Ft lettre = |%#05.7X***\n", lettre);
	printf("Or lettre = |%#05.7X***\n", lettre);
	/*ft_printf("Ft phrase = |%s***\n", phrase);
	printf("Or phrase = |%s***\n", phrase);
	ft_printf("Ft adresse = |%p|***\n", adresse);
	printf("Or adresse = |%p|***\n", adresse);
	ft_printf("Ft nombre u = |%d|***\n", nombre);
	printf("Or nombre u = |%d|***\n", nombre);
	ft_printf("Ft nombre i = |%i|***\n", nombre);
	printf("Or nombre i = |%i|***\n", nombre);
	ft_printf("Ft non signé = |%u|***\n", nombre);
	printf("Or non signé = |%u|***\n", nombre);
	ft_printf("Ft hex min = |%x|***\n", nombre);
	printf("Or hex min = |%x|***\n", nombre);
	ft_printf("Ft Hex maj = |%X|***\n", nombre);
	printf("Or Hex maj = |%X|***\n", nombre);
	ft_printf("Ft pourcent = |%%|***\n");
	printf("Or pourcent = |%%|***\n");
	ft_printf("");
	printf("");*/
	printf("fin de programme!\n");
	return (0);
}