/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unsigned_integer_without_option.c            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:07:08 by mboegler          #+#    #+#             */
/*   Updated: 2024/02/07 14:07:09 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../obligatory/printf/ft_printf.h"

void	print_unsigned_integer_without_option(t_format *option)
{
	if (option == NULL)
		return ;
	if (option->signed_number != 0)
		putnbr_bonus(option, option->unsigned_number);
	else if (option->signed_number == 0 && !(option->precision == true && option->value_precision == false))
		putchar_bonus(option, '0');
}
