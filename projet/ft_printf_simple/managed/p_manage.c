/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_manage.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 15:14:58 by mboegler          #+#    #+#             */
/*   Updated: 2023/12/22 15:15:01 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdint.h>
#include "libft.h"
#include "ft_printf.h"

void	print_pointer_address(const char *format, va_list args, int **i)
{
    //printf("\nDébut de imprimer_adresse_pointeur\n");     
	uintptr_t recovery_adress;

	recovery_adress = va_arg(args, uintptr_t);
	if (format[**i + 1] == 'p')
	{
		if (recovery_adress != 0)
		{
			print_adress(recovery_adress);
			**i += 1;
		}
		
	}
}