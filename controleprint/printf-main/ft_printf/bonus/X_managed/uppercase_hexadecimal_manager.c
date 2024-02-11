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

void	uppercase_hexadecimal_manager(const char *format,
		va_list args, int *i, t_format *option)
{
	if (format == NULL || i == NULL || option == NULL)
		return ;
	option->signed_number = va_arg(args, long long int);
	if (option->negative_precision == true)
		print_raw_format(format, i, option);
	else
		print_uppercase_hexadecimal(option);
}
