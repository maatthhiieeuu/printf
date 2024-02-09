/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:17:16 by mboegler          #+#    #+#             */
/*   Updated: 2024/02/07 14:17:21 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../printf/ft_printf.h"

void	print_hex_uppercase(va_list args, int *i, int *result)
{
	int	recovery_number;

	recovery_number = va_arg(args, int);
	decimal_to_hex(recovery_number, 'M', result);
	*i += 1;
}
