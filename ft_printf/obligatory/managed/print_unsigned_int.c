/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unsigned_int.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:18:32 by mboegler          #+#    #+#             */
/*   Updated: 2024/02/07 14:18:37 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../printf/ft_printf.h"

void	print_unsigned_int(va_list args, int *i, int *result)
{
	long unsigned int	recovery_number;

	recovery_number = va_arg(args, unsigned int);
	if (i == NULL || result == NULL)
		return ;
	put_unbr(recovery_number, result);
	*i += 1;
}
