/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags_search.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:05:18 by mboegler          #+#    #+#             */
/*   Updated: 2024/02/07 14:05:21 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../obligatory/printf/ft_printf.h"

void	flags_search(const char *format, int i, t_format *option)
{
	while (format[i] != option->specifier && format[i])
	{
		if (format[i] == '#')
			option->hash = true;
		else if (format[i] == '-')
			option->minus = true;
		else if (format[i] == '+')
			option->plus = true;
		else if (format[i] == '0')
			option->zero = true;
		else if (format[i] == ' ')
			option->space = true;
		i++;
	}
}
