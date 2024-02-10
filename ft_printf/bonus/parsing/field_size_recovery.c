/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   field_size_recovery.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:05:04 by mboegler          #+#    #+#             */
/*   Updated: 2024/02/07 14:05:07 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../obligatory/printf/ft_printf.h"

void	field_size_recovery(const char *s, t_format *option)
{
	int	i;

	option->space_array = 0;
	i = 0;
	if (s == NULL || option == NULL)
		return ;
	while ((s[i] != option->specifier) && (s[i] != '.') && (s[i]))
	{
		if (s[i] >= '0' && s[i] <= '9')
			option->space_array = (option->space_array * 10) + (s[i] - 48);
		i++;
	}
}
