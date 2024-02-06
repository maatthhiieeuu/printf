/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   coordination_distribution_sommaire.c               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:00:21 by mboegler          #+#    #+#             */
/*   Updated: 2024/01/16 11:02:21 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

void	coordination_distribution_sommaire(const char *format, va_list args, int *i, t_format *option)
{
	if (option->specifier == 'c')
		envoyer_caractere_impression(args, option);
	else if (option->specifier == 's')
		gestionnaire_chaine_avec_option(args, option);
	else if (option->specifier == 'p')
		gestionnaire_adresse_avec_option(args, option);
	else if (option->specifier == 'd' || option->specifier == 'i')
		gestionnaire_entier_signe_avec_option(format, args, i, option);
	else if (option->specifier == 'u')
		gestionnaire_entier_non_signe_avec_option(format, args, i, option);
	else if (option->specifier == 'x')
		gestionnaire_hexadecimal_minuscule(format, args, i, option);
	else if (option->specifier == 'X')
		gestionnaire_hexadecimal_majuscule(format, args, i, option);
}
