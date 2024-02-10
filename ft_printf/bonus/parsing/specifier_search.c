/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   specifier_search.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:07:50 by mboegler          #+#    #+#             */
/*   Updated: 2024/02/07 14:07:51 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../obligatory/printf/ft_printf.h"

void	specifier_search(const char *format, int i, t_format *option)
{
	int		j;
	char	tab_char[9];

	j = 0;
	ft_strlcpy(tab_char, "cspdiuxX", 9);
	while (format[i] != '\0')
	{
		j = 0;
		while (tab_char[j] != '\0')
		{
			if (format[i] == tab_char[j])
			{
				option->specifier = tab_char[j];
				return ;
			}
			j++;
		}
		i++;
	}
}
