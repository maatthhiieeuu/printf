/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   imprimer_entier_non_signe_avec_largeur_de          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:13:09 by mboegler          #+#    #+#             */
/*   Updated: 2024/01/16 11:13:13 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

static void	print_precision(t_format *option);
static void	print_field_width(t_format *option);

void	print_unsigned_integer_with_field_width_precision_and_minus(t_format *option)
{
	print_precision(option);
	putnbr_bonus(option, option->unsigned_number);
	print_field_width(option);
}

static void	print_precision(t_format *option)
{
	int	i;

	i = 0;
	while (option->number_size + i < option->precision_array)
	{
		putchar_bonus(option, '0');
		i++;
	}
}

static void	print_field_width(t_format *option)
{
	int	i;

	i = 0;
	if (option->number_size < option->precision_array)
	{
		while (option->precision_array + i < option->space_array)
		{
			putchar_bonus(option, ' ');
			i++;
		}
	}
	else if (option->number_size > option->precision_array)
	{
		while (option->number_size + i < option->space_array)
		{
			putchar_bonus(option, ' ');
			i++;
		}
	}
}
