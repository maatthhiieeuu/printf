/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gestionnaire_chaine_avec_option.c                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:04:58 by mboegler          #+#    #+#             */
/*   Updated: 2024/01/16 11:05:02 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

void	gestionnaire_chaine_avec_option(va_list args, t_format *option)
{
	size_t	size_string;
	char	*string;

	option->hash = false;
	option->space = false;
	option->plus = false;
	option->zero = false;
	string = va_arg(args, char *);
	size_string = ft_strlen(string);
	if (option->space_array > 0 && option->precision_array == 0)
		imprimer_chaine_avec_espace(option, size_string, string);
	else if (option->space_array == 0 && option->precision_array > 0)
		ft_putnstr_fd(string, option->precision_array, 1);
	else if (option->space_array > 0 && option->precision_array > 0)
	{
		if (option->minus == true)
			imprimer_chaine_avec_minus_precision_et_espace(option, string, ft_strlen(string));
		else if (option->minus == false)
			imprimer_chaine_avec_precision_et_espace(option, string, ft_strlen(string));
	}
}
