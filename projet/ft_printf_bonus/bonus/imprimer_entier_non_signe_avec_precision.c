/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   imprimer_entier_non_signe_avec_precision.          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:13:41 by mboegler          #+#    #+#             */
/*   Updated: 2024/01/16 11:13:44 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

void	imprimer_entier_non_signe_avec_precision(t_format *option)
{
	int	i;

	i = 0;
	compter_nombre_de_chiffre(option);
	while (option->number_size + i < option->precision_array)
	{
		putchar_bonus(option, '0');
		i++;
	}
	putnbr_bonus(option, option->unsigned_number);
}
