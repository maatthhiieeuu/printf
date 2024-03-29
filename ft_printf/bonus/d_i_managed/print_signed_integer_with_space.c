/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_signed_integer_with_space.c                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:06:39 by mboegler          #+#    #+#             */
/*   Updated: 2024/02/07 14:06:40 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../obligatory/printf/ft_printf.h"

void	print_signed_integer_with_space(t_format *option)
{
	if (option == NULL)
		return ;
	putchar_bonus(option, ' ');
	putnbr_bonus(option, option->signed_number);
}
