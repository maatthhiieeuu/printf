/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   signed_integer_option_manager.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:07:41 by mboegler          #+#    #+#             */
/*   Updated: 2024/02/07 14:07:43 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../obligatory/printf/ft_printf.h"

static void	modify_parsing(t_format *option);
static bool	check_flag(t_format *option);

void	signed_integer_option_manager(const char *format, va_list args,
		int *i, t_format *option)
{
	if (format == NULL || i == NULL || option == NULL)
		return ;
	option->signed_number = va_arg(args, int);
	modify_parsing(option);
	if (option->negative_precision == true)
		print_raw_format(format, i, option);
	else if (option->space_array > 0 && option->precision == true){//printf("\033[1m\033[42m A\033[0m");
		print_signed_integer_with_field_precision(option);
	}
	else if (option->space_array > 0 && option->precision_array == 0 && option->precision_zero == false){//printf("\033[1m\033[42m B\033[0m");

		print_signed_integer_with_field(option);
	}
	else if (option->space_array == 0 && option->precision_array > 0 && option->precision_zero == false){//printf("\033[1m\033[42m C\033[0m");

		print_signed_integer_with_precision(option);
	}
	else if (check_flag(option) && option->precision_zero == false){
		print_signed_integer_with_flag(option);
	}
	else if (option->precision_zero == false)
	{//printf("\033[1m\033[42m D\033[0m");
		print_signed_integer_without_option(option);
	}
}

static bool	check_flag(t_format *option)
{
	if (option->plus == true || option->minus == true || option->hash == true)
		return (true);
	else if (option->zero == true || option->space == true)
		return (true);
	return (false);
}

static void	modify_parsing(t_format *option)
{
	if (option == NULL)
		return ;
	if (option->hash == true)
		option->hash = false;
	if (option->plus == true)
		option->space = false;
	if (option->plus == true && option->signed_number < 0)
		option->plus = false;
	if (option->space == true && option->signed_number < 0)
		option->space = false;
	

	
}
