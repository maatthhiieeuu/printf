/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   i_manage.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 15:18:17 by mboegler          #+#    #+#             */
/*   Updated: 2023/12/22 15:18:31 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include "libft.h"
#include "ft_printf.h"

static void putnbr_upper_nine(int n, int *result);

void	print_integer(const char *format, va_list args, int *i, int *result)
{
    //printf("\nDébut de imprimer_integer\n"); 
	if (format[*i + 1] == 'i')
    {
        int recovery_number;
        
        recovery_number = va_arg(args, int);
        putnbr_upper_nine(recovery_number, result);
        *i += 1;
    }
}
