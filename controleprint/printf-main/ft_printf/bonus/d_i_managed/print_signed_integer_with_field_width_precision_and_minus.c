/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_signed_integer_with_field_width_pre          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:06:27 by mboegler          #+#    #+#             */
/*   Updated: 2024/02/07 14:06:28 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../obligatory/printf/ft_printf.h"

static void	print_precision(t_format *option);
static void	print_field_width(t_format *option);

void	print_signed_int_with_field_prec_minus(t_format *option)
{
	if (option == NULL)
		return ;
	print_precision(option);
	putnbr_bonus(option, option->signed_number);
	print_field_width(option);
}

static void	print_precision(t_format *option)
{
	int	i;

	i = 0;
	if (option == NULL)
		return ;
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
	if (option == NULL)
		return ;
	if (option->number_size <= option->precision_array)
	{//printf("\033[1m\033[42m L, \033[0m\n");
		while (option->precision_array + i < option->space_array)
		{
			putchar_bonus(option, ' ');
			i++;
		}
	}
	else if (option->number_size > option->precision_array)
	{//printf("\033[1m\033[42m M, \033[0m\n");
		while (option->number_size + i < option->space_array)
		{
			putchar_bonus(option, ' ');
			i++;
		}
	}
}
