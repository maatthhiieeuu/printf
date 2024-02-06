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

void	structure_initialization_coordination(const char *format, va_list args, int *i, int *result)
{
	t_format	option;

	default_structure_initialization(&option);
	specifier_search(format, *i, &option);
	if (option.specifier != 0)
	{
		flags_search(format, *i, &option);
		precision_space_value_search(format, *i, &option);
		*i += option.digit_char_until_specifier;
		summary_distribution_coordination(format, args, i, &option);
	}
	*result += option.output;
}
