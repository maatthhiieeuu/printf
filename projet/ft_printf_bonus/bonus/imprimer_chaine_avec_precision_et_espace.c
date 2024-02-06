/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   imprimer_chaine_avec_precision_et_espace.          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:12:16 by mboegler          #+#    #+#             */
/*   Updated: 2024/01/16 11:12:17 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

void	imprimer_chaine_avec_precision_et_espace(t_format *option, char *string, size_t size_string)
{
	size_t	j;

	j = 0;
	if (option->minus == false)
	{
		if (option->precision_array < size_string)
		{
			while ((j) < (option->space_array - option->precision_array))
			{
				putchar_bonus(option, ' ');
				j++;
			}
		}
		else if (option->precision_array > size_string)
		{
			while ((j) < (option->space_array - size_string))
			{
				putchar_bonus(option, ' ');
				j++;
			}
		}
		putnstr_bonus(option, string, option->precision_array);
	}
}
