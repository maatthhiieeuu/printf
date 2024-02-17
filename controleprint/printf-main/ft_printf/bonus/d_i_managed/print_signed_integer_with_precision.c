/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_signed_integer_with_precision.c              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:09:03 by mboegler          #+#    #+#             */
/*   Updated: 2024/02/07 14:09:04 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../obligatory/printf/ft_printf.h"

void	print_signed_integer_with_precision(t_format *option)
{
	size_t	i;

	i = 0;
	if (option == NULL)
		return ;
	//printf("\033[1m\033[42mX\033[0m\n");
	count_digits(option);
	if (option->signed_number < 0)
	{//printf("\033[1m\033[42mY\033[0m\n");
		putchar_bonus(option, '-');
		option->signed_number *= -1;
		option->precision_array += 1;
	}
	if (option->plus == true && option->signed_number >= 0)
		putchar_bonus(option, '+');
	while (option->number_size + i < option->precision_array)
	{//printf ("\033[1m\033[42m%zu + %zu < %zu\033[0m\n", option->number_size, i, option->precision_array);
		putchar_bonus(option, '0');
		i++;
	}
	putnbr_bonus(option, option->signed_number);
}
