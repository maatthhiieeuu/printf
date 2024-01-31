/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_manage.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 14:57:57 by mboegler          #+#    #+#             */
/*   Updated: 2023/12/22 14:57:59 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

void	put_count_string(char *s, int *result);

void	print_string(const char *format, va_list args, int *i, int *result)
{
	//printf("print_string");

	if (format[*i + 1] == 's')
	{
		put_count_string(va_arg(args, char *), result);
		*i += 1;
	}
}

void	put_count_string(char *s, int *result)
{
	if (!s)
		return ;
	while (*s != '\0')
	{
		write(1, s, 1);
		*result += 1;
		s++;
	}
}