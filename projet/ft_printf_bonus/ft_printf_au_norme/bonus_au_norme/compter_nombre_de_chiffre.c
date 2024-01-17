/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compter_nombre_de_chiffre.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 10:59:00 by mboegler          #+#    #+#             */
/*   Updated: 2024/01/16 10:59:06 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

void	compter_nombre_de_chiffre(t_format *option)
{
	size_t	i;
	long long int	number_cpy;

	i = 0;
	if (option->specifier == 'd' || option->specifier == 'i')
	{
		number_cpy = option->signed_number;
		while (number_cpy > 0)
		{
			number_cpy /= 10;
			i++;
		}
		option->number_size = i;
	}
	if (option->specifier == 'u')
	{
		number_cpy = option->unsigned_number;
		while (number_cpy > 0)
		{
			number_cpy /= 10;
			i++;
		}
		option->number_size = i;
	}
}
