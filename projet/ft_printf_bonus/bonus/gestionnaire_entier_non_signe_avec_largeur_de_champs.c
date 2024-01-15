#include "libft.h"
#include "ft_printf.h"

void	gestionnaire_entier_non_signe_avec_largeur_de_champs(t_format *option)
{
	//printf("\nDébut de gestionnaire_entier_non_signe_avec_largeur_de_champs : \n");

	if (option->space_array > 0) 
		imprimer_entier_non_signe_avec_largeur_de_champs(option);
}