#include "libft.h"
#include "ft_printf.h"

void	gestionnaire_adresse_avec_largeur_de_champs(t_format *option)
{
	//printf("\nDébut de gestionnaire_adresse_avec_largeur_de_champs : \n");
	
	if (option->space_array > 0 && option->minus == false)
		imprimer_adresse_avec_largeur_de_champs(option);
	else if (option->space_array > 0 && option->minus == true)
		imprimer_adresse_avec_largeur_de_champs_et_minus(option);
	else if (option->space == true && option->space_array == 0)
		imprimer_adresse_avec_un_espace(option);







}