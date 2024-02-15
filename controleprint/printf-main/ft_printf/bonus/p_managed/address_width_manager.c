/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   address_width_manager.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:04:15 by mboegler          #+#    #+#             */
/*   Updated: 2024/02/07 14:04:25 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../obligatory/printf/ft_printf.h"

void	address_width_manager(t_format *option)
{
	if (option == NULL)
		return ;
	if (option->space_array > 0 && option->minus == false){//printf("\033[1;31mI\033[0m\n");
		print_address_with_field_width(option);
	}
	else if (option->space_array > 0 && option->minus == true){//printf("\033[1;31mJ\033[0m\n");
		print_address_with_field_width_and_minus(option);
	}
	else if (option->space == true && option->space_array == 0){//printf("\033[1;31mK\033[0m\n");
		print_address_with_a_space(option);
	}
}
