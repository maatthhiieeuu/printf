/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_manage.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 14:58:13 by mboegler          #+#    #+#             */
/*   Updated: 2023/12/22 14:58:32 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

void	print_character(va_list args, int *i, int *result)
{
	char recovery_char;

	recovery_char = va_arg(args, int);
	ft_putchar_fd(recovery_char, 1);
	*i += 1;
	*result += 1;
}