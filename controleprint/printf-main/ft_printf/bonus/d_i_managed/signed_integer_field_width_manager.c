/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   signed_integer_field_width_manager.c               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:07:37 by mboegler          #+#    #+#             */
/*   Updated: 2024/02/07 14:07:38 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../obligatory/printf/ft_printf.h"

void	signed_integer_field_width_manager(t_format *option)
{
	if (option == NULL)
		return ;
	if (option->plus == true && option->zero == true){//printf("\033[1m\033[42m N, \033[0m\n");
		print_signed_integer_with_plus_and_zero(option);
	}
	else if (option->space_array > 0){//printf("\033[1m\033[42m O, \033[0m\n");
		print_signed_integer_with_field(option);
	}
}
