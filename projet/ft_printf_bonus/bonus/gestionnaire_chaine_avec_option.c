/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gestionnaire_chaine_avec_option.c                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:04:58 by mboegler          #+#    #+#             */
/*   Updated: 2024/01/16 11:05:02 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

void	gestionnaire_chaine_avec_option(va_list args, t_format *option)
{
	//printf("\nDébut de compter_point_jusquau_specifieur : \n");
	size_t size_string;
	char *string;

	option->hash = false;
	option->space = false;
	option->plus = false;
	option->zero = false;
	string = va_arg(args, char *);
	size_string = ft_strlen(string);
	if (option->space_array > 0 && option->precision_array == 0)
		imprimer_chaine_avec_espace(option, size_string, string);
	else if (option->space_array == 0 && option->precision_array > 0)
		putnstr_bonus(option, string, option->precision_array);
	else if (option->space_array > 0 && option->precision_array > 0)
	{
		if (option->minus == true)
			imprimer_chaine_avec_minus_precision_et_espace(option, string, ft_strlen(string));
		else if (option->minus == false)
			imprimer_chaine_avec_precision_et_espace(option, string, ft_strlen(string));
	}
}
/*
%s - Chaîne de caractères

    '#' : Non applicable.
    ' ' : Non applicable.
    '+' : Non applicable.
    '0' : Non applicable.
	
	-precision( prioritaire sur la largeur)
	-moins
	-largeur de champs 
*/

/*Synthèse des Sorties pour %s

    %s = 'exemple' :
        Standard : Affiche la chaîne de caractères telle quelle.
    %10s = ' exemple' :
        Avec largeur 10 : Affiche la chaîne avec 3 espaces avant (alignement à droite).
    %-10s = 'exemple ' :
        Avec largeur -10 : Affiche la chaîne avec 3 espaces après (alignement à gauche).
    %0s = 'exemple' :
        Avec 0 (non standard pour s) : Comportement identique au standard.
    %.5s = 'exemp' :
        Avec .5 (précision) : Affiche les 5 premiers caractères de la chaîne.
    %10.5s = ' exemp' :
        Avec largeur et précision : Affiche les 5 premiers caractères avec 5 espaces avant (alignement à droite).
    %+s = 'exemple' :
        Avec drapeau + (non pertinent pour s) : Comportement identique au standard.
    %' s = 'exemple' :
        Avec drapeau ' ' (non pertinent pour s) : Comportement identique au standard.
    %#s = 'exemple' :
        Avec drapeau # (non pertinent pour s) : Comportement identique au standard.
    %-0s = 'exemple' :
        Avec drapeau - et 0 : Comportement identique au standard.

Ces résultats montrent comment printf gère les chaînes de caractères avec différents paramètres de formatage. Pour le prochain format, veuillez me dire lequel vous souhaitez tester ensuite (%d, %i, %u, %x, %X, %p) et je vous fournirai le code de test correspondant.*/
