/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   precision_size_recovery.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:05:33 by mboegler          #+#    #+#             */
/*   Updated: 2024/02/07 14:05:35 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../obligatory/printf/ft_printf.h"

void	precision_size_recovery(const char *point_ptr, t_format *option)
{
	size_t	i;
	size_t	precision_size;

	i = 0;
	precision_size = 0;
	if (point_ptr == NULL)
		return ;
	while (point_ptr[i] != option->specifier)
	{
		if (point_ptr[i] >= '0' && point_ptr[i] <= '9')
			precision_size = (precision_size * 10) + (point_ptr[i] - 48);
		i++;
	}
	option->precision_array = precision_size;
}
