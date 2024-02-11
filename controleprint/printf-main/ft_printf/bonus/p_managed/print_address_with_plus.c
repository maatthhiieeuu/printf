/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_address_with_plus.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:05:57 by mboegler          #+#    #+#             */
/*   Updated: 2024/02/07 14:05:58 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../obligatory/printf/ft_printf.h"

void	print_address_with_plus(t_format *option)
{
	if (option == NULL)
		return ;
	putchar_bonus(option, '+');
	print_address_bonus(option->address_int, option);
}
