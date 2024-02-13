/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   uppercase_hexadecimal_manager.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:08:09 by mboegler          #+#    #+#             */
/*   Updated: 2024/02/07 14:08:10 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../obligatory/printf/ft_printf.h"

static void	parsing_complement(t_format *option);

void	uppercase_hexadecimal_manager(const char *format,
		va_list args, int *i, t_format *option)
{
	if (format == NULL || i == NULL || option == NULL)
		return ;
	option->signed_number = va_arg(args, long long int);
	parsing_complement(option);
	if (option->negative_precision == true)
		print_raw_format(format, i, option);
	else if(option->space_array > 0 && option->space == true)
		print_uppercase_hexadecimal_with_field_space(option);
	else
		print_uppercase_hexadecimal(option);
}

static void	parsing_complement(t_format *option)
{
	count_digits_hex(option);
	if (option->zero == true && option->space == true)
		option->space = false;
}