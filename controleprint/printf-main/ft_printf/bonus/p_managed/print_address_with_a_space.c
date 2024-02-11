/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_address_with_a_space.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:05:45 by mboegler          #+#    #+#             */
/*   Updated: 2024/02/07 14:05:46 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../obligatory/printf/ft_printf.h"

void	print_address_with_a_space(t_format *option)
{
	if (option == NULL)
		return ;
	putchar_bonus(option, ' ');
	print_address_bonus(option->address_int, option);
}
