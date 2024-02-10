/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   precision_space_value_search.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:09:49 by mboegler          #+#    #+#             */
/*   Updated: 2024/02/07 14:09:50 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../obligatory/printf/ft_printf.h"

void	precision_space_value_search(const char *format,
		int i, t_format *option)
{
	size_t	j;
	char	*point_ptr;

	j = 0;
	point_ptr = NULL;
	if (format == NULL || option == NULL)
		return;
	count_percent_to_specifier(format + i, option);
	point_ptr = ft_strnchr(format + i, '.', option->digit_char_until_specifier);
	field_size_recovery(format + i, option);
	if (point_ptr != NULL)
	{
		option->precision = true;
		count_point_to_specifier(option, point_ptr);
		while (j < option->digit_point_until_specifier)
		{
			negative_precision_search(point_ptr + j, option);
			if (ft_isdigit(point_ptr[j]) && option->precision_array == 0)
				precision_size_recovery(point_ptr + j, option);
			j++;
		}
	}
}
