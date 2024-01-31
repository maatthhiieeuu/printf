/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   envoyer_caractere_impression.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:02:48 by mboegler          #+#    #+#             */
/*   Updated: 2024/01/16 11:02:50 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include "libft.h"
#include "ft_printf.h"

void    envoyer_caractere_impression(va_list args, t_format *option) // nom en anglais : manage_char_option
{
    //printf("\n*envoyer_caractere_impression*\n");
    if (option->space_array > 0)
        imprimer_caractere_avec_espace(args, option);
    else
        imprimer_caractere_sans_flag(args, option);
}
/**/
