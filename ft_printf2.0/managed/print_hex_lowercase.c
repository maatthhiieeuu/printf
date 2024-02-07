/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:16:20 by mboegler          #+#    #+#             */
/*   Updated: 2024/02/07 14:17:11 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

void	print_hex_lowercase(va_list args, int *i, int *result)
{
	int	recovery_number;

	recovery_number = va_arg(args, int);
	decimal_to_hex(recovery_number, 'm', result);
	*i += 1;
}
