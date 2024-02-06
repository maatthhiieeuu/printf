/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   i_manage.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 15:18:17 by mboegler          #+#    #+#             */
/*   Updated: 2023/12/22 15:18:31 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

void	print_integer(va_list args, int *i, int *result)
{
	int recovery_number;

	recovery_number = va_arg(args, int);
	putnbr_upper_nine(recovery_number, result);
	*i += 1;
}
