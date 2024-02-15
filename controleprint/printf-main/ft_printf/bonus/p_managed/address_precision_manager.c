/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   address_precision_manager.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:04:03 by mboegler          #+#    #+#             */
/*   Updated: 2024/02/07 14:04:10 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../obligatory/printf/ft_printf.h"

void	address_precision_manager(t_format *option)
{
	if (option == NULL)
		return ;
	if (option->precision_array > 0 && option->zero == false){
		print_address_with_precision(option);
	}
	else if (option->zero == true && option->precision == false)
	{
		option->precision_array -= 2;
		print_address_with_precision(option);
	}
}
