/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   d_manage.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 14:57:44 by mboegler          #+#    #+#             */
/*   Updated: 2023/12/22 14:57:47 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

void	print_signed_int(const char *format, va_list args, int **i) // nom en anglais : print_signed_int
{
    //printf("\nDébut de imprimer_entier_signe\n");    
	if (format[**i + 1] == 'd')
	{
		int recovery_number;
		
		recovery_number = va_arg(args, int);
		ft_putnbr_fd(recovery_number, 1);
		**i += 1;
	}
}