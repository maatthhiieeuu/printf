/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   recuperation_taille_precision.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:23:17 by mboegler          #+#    #+#             */
/*   Updated: 2024/01/16 11:23:20 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

void	recuperation_taille_precision(const char *point_ptr, t_format *option)
{
	size_t	i;
	size_t	precision_size;

	i = 0;
	precision_size = 0;
	while (point_ptr[i] != option->specifier)
	{
		if (point_ptr[i] >= '0' && point_ptr[i] <= '9')
			precision_size = (precision_size * 10) + (point_ptr[i] - 48);
		i++;
	}
	option->precision_array = precision_size;
}
