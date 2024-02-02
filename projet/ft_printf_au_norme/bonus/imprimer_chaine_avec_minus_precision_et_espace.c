/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   imprimer_chaine_avec_minus_precision_et_e          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:11:47 by mboegler          #+#    #+#             */
/*   Updated: 2024/01/16 11:11:49 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

void	imprimer_chaine_avec_minus_precision_et_espace(t_format *option, char *string, size_t size_string)
{
	size_t	j;

	j = 0;
	if (option->minus == true)
	{
		putnstr_bonus(option, string, option->precision_array);
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
	}
}
