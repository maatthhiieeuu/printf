/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   send_character_for_printing.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:07:32 by mboegler          #+#    #+#             */
/*   Updated: 2024/02/07 14:07:33 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../obligatory/printf/ft_printf.h"

void	send_character_for_printing(va_list args, t_format *option)
{
	if (option == NULL)
		return;
	if (option->space_array > 0)
		print_character_with_space(args, option);
	else
		print_character_without_flag(args, option);
}
