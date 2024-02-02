/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   imprimer_zero_pour_precision_adresse.c             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:19:41 by mboegler          #+#    #+#             */
/*   Updated: 2024/01/16 11:19:42 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

void	imprimer_zero_pour_precision_adresse(t_format *option)
{
	size_t	i;

	i = 0;
	if (option->zero == false && option->precision == true)
	{
		while (option->address_size + i - 2 < option->precision_array)
		{
			putchar_bonus(option, '0');
			i++;
		}
	}
	else if (option->zero == true && option->precision == false)
	{
		while (option->address_size + i - 2 < option->precision_array)
		{
			putchar_bonus(option, '0');
			i++;
		}
	}
}
