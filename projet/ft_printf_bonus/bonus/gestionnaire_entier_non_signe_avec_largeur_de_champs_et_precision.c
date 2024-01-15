#include "libft.h"
#include "ft_printf.h"

void	gestionnaire_entier_non_signe_avec_largeur_de_champs_et_precision(t_format *option)
{
	//printf("\nDébut de gestionnaire_entier_non_signe_avec_largeur_de_champs_et_precision : \n");
	compter_nombre_de_chiffre(option);
	if (option->space_array > (option->number_size && option->precision_array) && option->minus == false)
		imprimer_entier_non_signe_avec_largeur_de_champs_et_precision(option);
	else if (option->space_array > (option->number_size && option->precision_array) && option->minus == true)
		imprimer_entier_non_signe_avec_largeur_de_champs_precision_et_minus(option);

}