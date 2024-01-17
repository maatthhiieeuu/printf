/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   coordination_initialisation_structure.c            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:02:32 by mboegler          #+#    #+#             */
/*   Updated: 2024/01/16 11:02:34 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

void	coordination_initialisation_structure(const char *format, va_list args, int *i)
{
	t_format	option;

	initialisation_par_default_structure(&option);
	recherche_specificateur(format, *i, &option);
	if (option.specifier != 0)
	{
		recherche_drapeaux(format, *i, &option);
		recherche_valeur_espace_precision(format, *i, &option);
		*i += option.digit_char_until_specifier;
		coordination_distribution_sommaire(format, args, i, &option);
	}
}
