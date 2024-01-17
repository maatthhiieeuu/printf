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

static void	dispatch(const char *format, va_list args, int *i)
{
	if (!format)
		return ;
	if (format[*i + 1] == 'c')
		print_character(format, args, &i);
	else if (format[*i + 1] == 's')
		print_string(format, args, &i);
	else if (format[*i + 1] == 'p')
		print_pointer_address(format, args, &i);
	else if (format[*i + 1] == 'd')
		print_signed_int(format, args, &i);
	else if (format[*i + 1] == 'i')
		print_integer(format, args, &i);
	else if (format[*i + 1] == 'u')
		print_unsigned_int(format, args, &i);
	else if (format[*i + 1] == 'x')
		print_hex_lowercase(format, args, &i);
	else if (format[*i + 1] == 'X')
		print_hex_uppercase(format, args, &i);
	else if (format[*i + 1] == '%')
		print_percent_sign(format, &i);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	va_list	args;

	i = 0;
	va_start (args, format);
	while (format[i])
	{
		if ((format[i] == '%') || (format[i] == 92))
			dispatch(format, args, &i);
		else
			ft_putchar_fd(format[i], 1);
		i++;
	}
	va_end(args);
	return (i);
}
