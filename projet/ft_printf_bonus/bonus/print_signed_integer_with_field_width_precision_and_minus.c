/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   imprimer_entier_signe_avec_largeur_de_cha          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:16:05 by mboegler          #+#    #+#             */
/*   Updated: 2024/01/16 11:16:06 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

static void	print_precision(t_format *option);
static void	print_field_width(t_format *option);

void	print_signed_integer_with_field_width_precision_and_minus(t_format *option)
{
	print_precision(option);
	putnbr_bonus(option, option->signed_number);
	print_field_width(option);
}

static void	print_precision(t_format *option)
{
	int	i;

	i = 0;
	if (option->plus == true)
	{
		putchar_bonus(option, '+');
		option->space_array -= 1;
	}

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