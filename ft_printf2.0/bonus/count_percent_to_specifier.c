/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_percent_to_specifier.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:04:47 by mboegler          #+#    #+#             */
/*   Updated: 2024/02/07 14:04:50 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

void	count_percent_to_specifier(const char *format, t_format *option)
{
	size_t	i;

	i = 0;
	while (format[i] != option->specifier)
	{
		i++;
	}
	option->digit_char_until_specifier = i;
}
