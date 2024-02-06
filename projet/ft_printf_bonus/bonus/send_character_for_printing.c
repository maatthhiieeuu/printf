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

#include "libft.h"
#include "ft_printf.h"

void	send_character_for_printing(va_list args, t_format *option)
{
	if (option->space_array > 0)
		print_character_with_space(args, option);
	else
		print_character_without_flag(args, option);
}
