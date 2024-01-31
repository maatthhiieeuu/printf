/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   x_manage.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 15:20:27 by mboegler          #+#    #+#             */
/*   Updated: 2023/12/22 15:20:42 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

void	print_percent_sign(const char *format, int *i, int *result)
{
	//printf("print_percent_sign");

	if (format[*i + 1] == '%')
	{
		ft_putchar_fd('%', 1);
		*i += 1;
		*result += 1;
	}
}
