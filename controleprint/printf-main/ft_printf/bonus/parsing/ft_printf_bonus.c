/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:09:37 by mboegler          #+#    #+#             */
/*   Updated: 2024/02/07 14:09:38 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../obligatory/printf/ft_printf.h"

static void	dispatch(const char *format, va_list args, int *i, int *result)
{
	if (format == NULL || i == NULL || result == NULL)
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
		structure_initialization_coordination(format, args, i, result);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		result;
	va_list	args;

	i = 0;
	result = 0;
	if (format == NULL)
		return ;
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
