/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_digits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:04:39 by mboegler          #+#    #+#             */
/*   Updated: 2024/02/07 14:04:43 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../obligatory/printf/ft_printf.h"

static void	count_signed_digits(t_format *option, size_t *i);
static void	count_unsigned_digits(t_format *option, size_t *i);

void	count_digits(t_format *option)
{
	size_t	i;

	i = 0;
	if (option == NULL)
		return ;
	if (option->specifier == 'd' || option->specifier == 'i')
		count_signed_digits(option, &i);
	if (option->specifier == 'u')
		count_unsigned_digits(option, &i);
	if (option->signed_number == 0 && option->precision_zero == true && (option->specifier == 'd' || option->specifier == 'i'))
		option->number_size = 0;
}

static void	count_signed_digits(t_format *option, size_t *i)
{
	long long int	number_cpy;

	if (option == NULL || i == NULL)
		return ;
	number_cpy = option->signed_number;
	if (number_cpy < 0)
	{
		number_cpy *= -1;
		*i += 1;
	}
	while (number_cpy > 0)
	{
		*i += 1;
		number_cpy /= 10;
	}
	if (option->signed_number == 0)
		*i = 1;
	option->number_size = *i;
}

static void	count_unsigned_digits(t_format *option, size_t *i)
{
	long long int	number_cpy;

	if (option == NULL || i == NULL)
		return ;
	number_cpy = option->unsigned_number;
	while (number_cpy > 0)
	{
		number_cpy /= 10;
		*i += 1;
	}
	option->number_size = *i;
}
