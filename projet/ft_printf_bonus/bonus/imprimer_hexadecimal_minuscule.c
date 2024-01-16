/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   imprimer_hexadecimal_minuscule.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:19:17 by mboegler          #+#    #+#             */
/*   Updated: 2024/01/16 11:19:18 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

void    imprimer_hexadecimal_minuscule(t_format *option)
{
   //printf("\nDébut de imprimer_hexadecimal_minuscule\n"); 
    int i;
    int hexaNum[50];
    char tableHexadecimal[17];

    i = 0;
    ft_strlcpy(tableHexadecimal, "0123456789abcdef", 17);
    while (option->signed_number != 0)
    {
        hexaNum[i] = option->signed_number % 16;
        option->signed_number /= 16;
        i++;
    }
    i--;
    if (option->hash == true)
        write(1, "0x", 2);
    while (i >= 0)
    {
        ft_putchar_fd(tableHexadecimal[hexaNum[i]], 1);
        i--;
    }
}
 
