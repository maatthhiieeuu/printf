/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   imprimer_entier_signe_avec_espace.c                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:14:20 by mboegler          #+#    #+#             */
/*   Updated: 2024/01/16 11:14:21 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

void	print_signed_integer_with_space(t_format *option)
{
	putchar_bonus(option, ' ');
	putnbr_bonus(option, option->signed_number);
}
