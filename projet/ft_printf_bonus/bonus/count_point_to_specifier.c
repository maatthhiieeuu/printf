/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compter_point_jusquau_specificateur.c              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 10:59:20 by mboegler          #+#    #+#             */
/*   Updated: 2024/01/16 10:59:26 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

void 	count_point_to_specifier(t_format *option, char *point_ptr)
{
	size_t	i;

	i = 0;
	while (point_ptr[i] != option->specifier)
	{
		i++;
	}
	if (point_ptr[i] == option->specifier)
	{
		option->digit_point_until_specifier = i;
	}
}