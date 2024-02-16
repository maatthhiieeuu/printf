/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_signed_integer_with_plus.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:06:35 by mboegler          #+#    #+#             */
/*   Updated: 2024/02/07 14:06:36 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../obligatory/printf/ft_printf.h"

void	print_integer_with_plus(t_format *option)
{
	if (option == NULL)
		return ;
	printf("\033[1m\033[42m V, \033[0m\n");
	putchar_bonus(option, '+');
	putnbr_bonus(option, option->signed_number);
}
