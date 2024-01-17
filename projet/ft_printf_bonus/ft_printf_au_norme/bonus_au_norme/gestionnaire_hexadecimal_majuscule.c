/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gestionnaire_hexadecimal_majuscule.c               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:08:26 by mboegler          #+#    #+#             */
/*   Updated: 2024/01/16 11:08:28 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

void	gestionnaire_hexadecimal_majuscule(const char *format, va_list args, int *i, t_format *option)
{
	option->signed_number = va_arg(args, long long int);
	if (option->negative_precision == true)
		imprimer_format_brut(format, i, option);
	else
		imprimer_hexadecimal_majuscule(option);
}
