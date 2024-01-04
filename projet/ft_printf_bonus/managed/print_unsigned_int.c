/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   u_manage.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 14:57:27 by mboegler          #+#    #+#             */
/*   Updated: 2023/12/22 14:57:31 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include "libft.h"
#include "ft_printf.h"

void	print_unsigned_int(const char *format, va_list args, int **i)
{
    //printf("\nDébut de imprimer_entier_non_signe\n"); 
	if (format[**i + 1] == 'u')
	{
		long unsigned int recovery_number;

		recovery_number = va_arg(args, unsigned int);
		put_unbr(recovery_number);
		**i += 1;
	}
}
//4294967295
