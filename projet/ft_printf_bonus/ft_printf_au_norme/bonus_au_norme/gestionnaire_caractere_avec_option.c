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

#include "libft.h"
#include "ft_printf.h"

void	gestionnaire_caractere_avec_option(va_list args, t_format *option)
{
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
