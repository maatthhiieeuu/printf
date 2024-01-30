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

static void	compter_nombre_de_chiffre_signe(t_format *option, size_t *i)
{
	long long int	number_cpy;

	number_cpy = option->signed_number;
	while (number_cpy > 0 )
	{
		*i += 1;
		number_cpy /= 10;
	}
	option->number_size = *i;
}

static void	compter_nombre_de_chiffre_non_signe(t_format *option, size_t *i)
{
	long long int	number_cpy;

	number_cpy = option->unsigned_number;
	while (number_cpy > 0)
	{
		number_cpy /= 10;
		*i += 1;
	}
	option->number_size = *i;
}

void	compter_nombre_de_chiffre(t_format *option)
{
	//printf("compter_nombre_de_chiffre");
	size_t	i;

	i = 0;
	if (option->specifier == 'd' || option->specifier == 'i')
		compter_nombre_de_chiffre_signe(option, &i);
	if (option->specifier == 'u')
		compter_nombre_de_chiffre_non_signe(option, &i);
}

