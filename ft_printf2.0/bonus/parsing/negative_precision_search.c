/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   negative_precision_search.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:09:27 by mboegler          #+#    #+#             */
/*   Updated: 2024/02/07 14:09:29 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../obligatory/printf/ft_printf.h"

void	negative_precision_search(const char *point_ptr, t_format *option)
{
	size_t	j;

	j = 0;
	while (j < option->digit_point_until_specifier
		&& option->negative_precision == false)
	{
		if (ft_atoi(point_ptr + j) < 0)
			option->negative_precision = true;
		j++;
	}
}
