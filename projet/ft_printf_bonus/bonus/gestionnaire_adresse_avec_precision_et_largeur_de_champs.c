#include "libft.h"
#include "ft_printf.h"

void	gestionnaire_adresse_avec_precision_et_largeur_de_champs(t_format *option)
{
	//printf("\nDébut de gestionnaire_adresse_avec_precision_et_largeur_de_champs : \n");

	if (option->space_array > option->address_size)
	{
		imprimer_adresse_avec_precision_et_largeur_de_champs(option);
	}






}