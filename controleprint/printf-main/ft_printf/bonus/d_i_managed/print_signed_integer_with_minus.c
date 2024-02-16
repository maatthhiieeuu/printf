/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_signed_integer_with_minus.c                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:09:41 by mboegler          #+#    #+#             */
/*   Updated: 2024/02/07 14:09:42 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../obligatory/printf/ft_printf.h"

void	print_signed_integer_with_minus(t_format *option)
{
	if (option == NULL)
		return ;
	//printf("\033[1m\033[42m V, \033[0m\n");
	putnbr_bonus(option, option->signed_number);
}
