/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   recherche_specificateur.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:22:05 by mboegler          #+#    #+#             */
/*   Updated: 2024/01/16 11:22:12 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

void	 specifier_search(const char *format, int i, t_format *option)
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
				return;
			}
			j++;
		}
		i++;
	}
}
