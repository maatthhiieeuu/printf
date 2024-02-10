/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structure_initialization_coordination.c            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:07:57 by mboegler          #+#    #+#             */
/*   Updated: 2024/02/07 14:07:58 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../obligatory/printf/ft_printf.h"

void	structure_initialization_coordination(const char *format, va_list args,
		int *i, int *result)
{
	t_format	option;

	if (format == NULL || i == NULL || result == NULL)
		return;
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
