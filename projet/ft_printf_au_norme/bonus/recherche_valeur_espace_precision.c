/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   recherche_valeur_espace_precision.c                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:22:24 by mboegler          #+#    #+#             */
/*   Updated: 2024/01/16 11:22:29 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

void	recherche_valeur_espace_precision(const char *format, int i, t_format *option) // nom en anglais : process_numeric_option
{
	size_t	j;
	char	*point_ptr;

	j = 0;
	point_ptr = NULL;
	compter_pourcent_jusquau_specificateur(format + i, option);
	point_ptr = ft_strnchr(format + i,'.', option->digit_char_until_specifier);
	recuperation_taille_champs(format + i, option);
	if (point_ptr != NULL)
	{
		option->precision = true;
		compter_point_jusquau_specificateur(option, point_ptr);
		while (j < option->digit_point_until_specifier)
		{
			recherche_precision_negative(point_ptr + j, option);
			if (ft_isdigit(point_ptr[j]) && option->precision_array == 0)
				recuperation_taille_precision(point_ptr + j, option);
			j++;
		}
	}
}
