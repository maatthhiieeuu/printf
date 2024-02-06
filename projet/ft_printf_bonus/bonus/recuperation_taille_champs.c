/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   recuperation_taille_champs.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:22:59 by mboegler          #+#    #+#             */
/*   Updated: 2024/01/16 11:23:04 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

void	recuperation_taille_champs(const char *s, t_format *option)
{
	int	i;

	option->space_array = 0;
	i = 0;
	while ((s[i] != option->specifier) && (s[i] != '.') && (s[i]))
	{
		if (s[i] >= '0' && s[i] <= '9')
			option->space_array = (option->space_array * 10) + (s[i] - 48);
		i++;
	}
}
