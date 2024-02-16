/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_signed_integer_without_option.c              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:06:31 by mboegler          #+#    #+#             */
/*   Updated: 2024/02/07 14:06:32 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../obligatory/printf/ft_printf.h"

void	print_signed_integer_without_option(t_format *option)
{
	if (option == NULL)
		return ;
	//printf("\033[1m\033[42m Z, \033[0m\n");
	putnbr_bonus(option, option->signed_number);
}
