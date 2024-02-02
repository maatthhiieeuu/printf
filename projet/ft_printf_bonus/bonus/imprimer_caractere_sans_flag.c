/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   imprimer_caractere_sans_flag.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:11:05 by mboegler          #+#    #+#             */
/*   Updated: 2024/01/16 11:11:07 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
#include "libft.h"
#include "ft_printf.h"

void    imprimer_caractere_sans_flag(va_list args, t_format *option)
{
   char recovery_char;
   //printf("Début de fonction de imprimer_caractere_ignorer_flag\n");
    if (option->specifier == 'c')
    {
        

        recovery_char = va_arg(args, int);
        putchar_bonus(option, recovery_char);
    }
}
