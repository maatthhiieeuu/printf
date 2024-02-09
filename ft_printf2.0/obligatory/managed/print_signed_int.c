/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_signed_int.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:17:55 by mboegler          #+#    #+#             */
/*   Updated: 2024/02/07 14:18:05 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../printf/ft_printf.h"

void	print_signed_int(va_list args, int *i, int *result)
{
	int	recovery_number;

	recovery_number = va_arg(args, int);
	print_int_with_char_count(recovery_number, result);
	*i += 1;
}
