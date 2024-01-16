/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gestionnaire_hexadecimal_minuscule.c               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:08:41 by mboegler          #+#    #+#             */
/*   Updated: 2024/01/16 11:08:43 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

void    gestionnaire_hexadecimal_minuscule(const char *format, va_list args, int *i, t_format *option)
{
    //printf("\nDébut de gestionnaire_hexadecimal_minuscule\n"); 
    option->signed_number = va_arg(args, long long int);
    if (option->negative_precision == true)
        imprimer_format_brut(format, i, option);
    else
        imprimer_hexadecimal_minuscule(option);
}
 





