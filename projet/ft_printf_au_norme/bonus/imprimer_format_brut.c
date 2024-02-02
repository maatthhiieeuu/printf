/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   imprimer_format_brut.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:18:41 by mboegler          #+#    #+#             */
/*   Updated: 2024/01/16 11:18:42 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

void	imprimer_format_brut(const char *format, int *i, t_format *option)
{
	size_t	j;

	j = 0;
	*i -= option->digit_char_until_specifier;
	while (j < option->digit_char_until_specifier)
	{
		if (format[*i] == '.' && format[*i + 1] == '-')
		{
			putchar_bonus(option, '.');
			putchar_bonus(option, '0');
			j += 3;
		}
		else
		{
			putchar_bonus(option, format[*i]);
			j++;
			*i += 1;
		}
	}
}
