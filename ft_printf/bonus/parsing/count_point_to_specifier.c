/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_point_to_specifier.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:04:54 by mboegler          #+#    #+#             */
/*   Updated: 2024/02/07 14:04:56 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../obligatory/printf/ft_printf.h"

void	count_point_to_specifier(t_format *option, char *point_ptr)
{
	size_t	i;

	i = 0;
	if (option == NULL || point_ptr == NULL)
		return ;
	while (point_ptr[i] != option->specifier)
	{
		i++;
	}
	if (point_ptr[i] == option->specifier)
	{
		option->digit_point_until_specifier = i;
	}
}
