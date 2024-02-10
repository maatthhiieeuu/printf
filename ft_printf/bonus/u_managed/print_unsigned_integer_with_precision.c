/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unsigned_integer_with_precision.c            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:08:49 by mboegler          #+#    #+#             */
/*   Updated: 2024/02/07 14:08:50 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../obligatory/printf/ft_printf.h"

void	print_unsigned_integer_with_precision(t_format *option)
{
	int	i;

	i = 0;
	if (option == NULL)
		return ;
	count_digits(option);
	while (option->number_size + i < option->precision_array)
	{
		putchar_bonus(option, '0');
		i++;
	}
	putnbr_bonus(option, option->unsigned_number);
}
