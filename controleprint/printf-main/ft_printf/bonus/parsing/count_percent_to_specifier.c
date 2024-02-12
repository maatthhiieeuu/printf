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
#include "../obligatory/printf/ft_printf.h"

void	count_percent_to_specifier(const char *format, t_format *option)
{
	size_t	i;

	i = 0;
	if (format == NULL || option == NULL)
		return ;
	while (format[i] != option->specifier)
	{
		//printf(" i = %zu ", i);
		i++;
	}
	option->digit_char_until_specifier = i;
	option->specifier_ptr = (char *)format + i;
}
