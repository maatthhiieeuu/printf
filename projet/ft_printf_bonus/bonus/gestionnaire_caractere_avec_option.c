/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gestionnaire_caractere_avec_option.c               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:04:19 by mboegler          #+#    #+#             */
/*   Updated: 2024/01/16 11:04:40 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include "libft.h"
#include "ft_printf.h"

void    gestionnaire_caractere_avec_option(va_list args, t_format *option) // nom en anglais : manage_char_option
{
    //printf("\nDébut de 10.gerer_option_caractere\n");
     if (option->hash == true)
        option->hash = false;
    if (option->space == true)
        option->space = false;
    if (option->plus == true)
        option->plus = false;
    if (option->zero == true)
        option->zero = false;
    if (option->precision == true)
        option->precision = false;
    envoyer_caractere_impression(args, option);
}
/**/
