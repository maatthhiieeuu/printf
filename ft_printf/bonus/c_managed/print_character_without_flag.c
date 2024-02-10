/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_character_without_flag.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:06:06 by mboegler          #+#    #+#             */
/*   Updated: 2024/02/07 14:06:07 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../obligatory/printf/ft_printf.h"

void	print_character_without_flag(va_list args, t_format *option)
{
	char	recovery_char;

	if (option == NULL)
		return;
	if (option->specifier == 'c')
	{
		recovery_char = va_arg(args, int);
		putchar_bonus(option, recovery_char);
	}
}
