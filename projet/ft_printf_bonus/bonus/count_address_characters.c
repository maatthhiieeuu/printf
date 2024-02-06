/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compter_caractere_adresse.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 10:58:41 by mboegler          #+#    #+#             */
/*   Updated: 2024/01/16 10:58:49 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

void	count_address_characters(t_format *option)
{
	size_t	result;
	uintptr_t	recovery_address;

	result = 0;
	recovery_address = option->address_int;
	while (recovery_address > 0)
	{
		recovery_address /= 10;
		result++;
	}
	option->address_size = result - 1;
}
