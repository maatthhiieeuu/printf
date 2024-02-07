/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lowercase_hexadecimal_manager.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:05:25 by mboegler          #+#    #+#             */
/*   Updated: 2024/02/07 14:05:29 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

void	lowercase_hexadecimal_manager(const char *format, va_list args,
		int *i, t_format *option)
{
	option->signed_number = va_arg(args, long long int);
	if (option->negative_precision == true)
		print_raw_format(format, i, option);
	else
		print_lowercase_hexadecimal(option);
}
