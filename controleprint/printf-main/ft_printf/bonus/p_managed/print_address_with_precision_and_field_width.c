/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_address_with_precision_and_field_wi          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:06:01 by mboegler          #+#    #+#             */
/*   Updated: 2024/02/07 14:06:04 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../obligatory/printf/ft_printf.h"

static void	write_space(t_format *option);
static void	without_minus(t_format *option);
static void	with_minus(t_format *option);

void	print_address_with_precision_and_field_width(t_format *option)
{
	if (option == NULL)
		return ;
	count_address_characters(option);
	if (option->minus == false){
		without_minus(option);
	}
	else if (option->minus == true){
		with_minus(option);
	}
}

static void	write_space(t_format *option)
{
	size_t	i;

	i = 0;
	if (option == NULL)
		return ;
	while (option->precision_array + i < option->space_array)
	{
		putchar_bonus(option, ' ');
		i += 1;
	}
}

static void	without_minus(t_format *option)
{
	size_t	i;

	i = 0;
	if (option == NULL)
		return ;
	option->space_array -= 2;
	if (option->precision_array >= option->address_size)
	{
		{
			write_space(option);
			print_address_with_precision(option);
		}
	}
	else if (option->precision_array < option->address_size)
	{
		while (option->address_size + i - 3 < option->space_array)
		{
			putchar_bonus(option, ' ');
			i += 1;
		}
		print_address_with_precision(option);
	}
}

static void	with_minus(t_format *option)
{
	size_t	i;

	i = 0;
	if (option == NULL)
		return ;
	print_address_with_precision(option);
	option->space_array -= 2;
	if (option->precision_array >= option->address_size)
		write_space(option);
	else if (option->precision_array < option->address_size)
	{
		while (option->address_size + i - 3 < option->space_array)
		{
			putchar_bonus(option, ' ');
			i += 1;
		}
	}
}
