/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   imprimer_adresse_avec_precision.c                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:09:56 by mboegler          #+#    #+#             */
/*   Updated: 2024/01/16 11:09:58 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

void	imprimer_adresse_avec_precision(t_format *option)
{
	//printf("\nDébut de imprimer_adresse_avec_precision :\n"); 

	int	i;
	int	hexaNum[17];
	char hexadecimalMin[17];

	i = 0;
	compter_caractere_adresse(option);
	ft_strlcpy(hexadecimalMin,"0123456789abcdef",17);
	while (option->address_int != 0)
	{
		hexaNum[i] = option->address_int % 16;
		option->address_int /= 16;
		i++;
	}
	i--;
	ft_putstr_fd("0x", 1);
	
	if ((option->precision_array > 0) || (option->zero == true && option->precision == false))
		imprimer_zero_pour_precision_adresse(option);
	while (i >= 0)
	{
		ft_putchar_fd(hexadecimalMin[hexaNum[i]], 1);
		i--;
	}
} 
