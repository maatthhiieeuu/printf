/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gestionnaire_entier_signe_avec_largeur_de          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:07:04 by mboegler          #+#    #+#             */
/*   Updated: 2024/01/16 11:07:06 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

void	signed_integer_field_width_manager(t_format *option)
{
	if (option->plus == true && option->zero == true)
		print_signed_integer_with_plus_and_zero(option);
	else if (option->space_array > 0)
		print_signed_integer_with_field_width_and_plus(option);
}
