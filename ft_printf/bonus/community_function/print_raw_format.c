/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_raw_format.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:06:17 by mboegler          #+#    #+#             */
/*   Updated: 2024/02/07 14:06:18 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../obligatory/printf/ft_printf.h"

void	print_raw_format(const char *format, int *i, t_format *option)
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
