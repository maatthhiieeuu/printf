/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_signed_integer_with_field_width_and          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:06:24 by mboegler          #+#    #+#             */
/*   Updated: 2024/02/07 14:06:25 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../obligatory/printf/ft_printf.h"

static void	print_precision(t_format *option);
static void	print_field_width(t_format *option);

void	print_signed_integer_with_field_precision(t_format *option)
{
	if (option == NULL)
		return ;
	count_digits(option);
	if (option->space == true)
		putchar_bonus(option, ' ');
	if (option->minus == false)
	{
		print_field_width(option);
		if (option->signed_number < 0)
		{
			check_write(write(1, "-", 1));
			option->output += 1;
		}
		
		print_precision(option);
		if (option->precision_zero == false)
			putnbr_bonus(option, option->signed_number);
	}
	else if (option->minus == true)
	{
		if (option->signed_number < 0)
		{
			check_write(write(1, "-", 1));
			option->output += 1;
		}
		print_precision(option);
		if (option->precision_zero == false)
			putnbr_bonus(option, option->signed_number);
		print_field_width(option);
	}
		
}

static void	print_field_width(t_format *option)
{
	int	i;

	i = 0;
	if (option == NULL)
		return ;
	//printf("%zu < %zu", option->number_size, option->precision_array);
	if (option->number_size < option->space_array)
	{//printf("\033[1m\033[42m J, \033[0m\n");
		if (option->plus == true && option->signed_number >= 0)
			option->space_array -= 1;
		while (option->precision_array + i < option->space_array)
		{
			putchar_bonus(option, ' ');
			i++;
		}
	}
	else if (option->number_size > option->space_array)
	{printf("\033[1m\033[42m K, \033[0m\n");
		while (option->number_size + i < option->space_array)
		{
			putchar_bonus(option, ' ');
			i++;
		}
	}
}

static void	print_precision(t_format *option)
{
	int	i;

	i = 0;
	if (option == NULL)
		return ;
	if (option->plus == true && option->signed_number >= 0)
		putchar_bonus(option, '+');

	while (option->number_size + i < option->precision_array)
	{
		putchar_bonus(option, '0');
		i++;
	}
}
