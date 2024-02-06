/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:24:12 by mboegler          #+#    #+#             */
/*   Updated: 2024/01/16 13:41:08 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

static void	dispatch(const char *format, va_list args, int *i, int *result)
{
	if (!format)
		return ;
	if (format[*i + 1] == 'c')
		print_character(args, i, result);
	else if (format[*i + 1] == 's')
		print_string(args, i, result);
	else if (format[*i + 1] == 'p')
		print_pointer(args, i, result);
	else if (format[*i + 1] == 'd')
		print_signed_int(args, i, result);
	else if (format[*i + 1] == 'i')
		print_integer(args, i, result);
	else if (format[*i + 1] == 'u')
		print_unsigned_int(args, i, result);
	else if (format[*i + 1] == 'x')
		print_hex_lowercase(args, i, result);
	else if (format[*i + 1] == 'X')
		print_hex_uppercase(args, i, result);
	else if (format[*i + 1] == '%')
		print_percent_sign(i, result);
	else 
		coordination_initialisation_structure(format, args, i, result);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		result;
	va_list	args;

	i = 0;
	result = 0;
	va_start (args, format);
	while (format[i])
	{
		if ((format[i] == '%') || (format[i] == 92))
			dispatch(format, args, &i, &result);
		else
		{
			ft_putchar_fd(format[i], 1);
			result++;
		}
		i++;
	}
	va_end(args);
	return (result);
}
