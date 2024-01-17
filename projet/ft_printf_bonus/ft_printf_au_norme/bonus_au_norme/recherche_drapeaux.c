/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   recherche_drapeaux.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:21:31 by mboegler          #+#    #+#             */
/*   Updated: 2024/01/16 11:21:34 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

void	recherche_drapeaux(const char *format, int i, t_format *option)
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
