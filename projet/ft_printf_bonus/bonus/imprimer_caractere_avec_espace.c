/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   imprimer_caractere_avec_espace.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:10:36 by mboegler          #+#    #+#             */
/*   Updated: 2024/01/16 11:10:38 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

void 	imprimer_caractere_avec_espace(va_list args, t_format *option)
{
	size_t	j;
	char	character;

	j = 0;
	character = va_arg(args, int);
	if (option->minus == false)
	{
		while (j + 1 < option->space_array )
		{
			putchar_bonus(option, ' ');
			j++;
		}
		putchar_bonus(option, character);
	}
	else if (option->minus == true)
	{
		putchar_bonus(option, character);
		while (j + 1 < option->space_array)
		{
			putchar_bonus(option, ' ');
			j++;
		}
	}
}
