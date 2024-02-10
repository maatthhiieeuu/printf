/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_character_with_space.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:06:10 by mboegler          #+#    #+#             */
/*   Updated: 2024/02/07 14:06:11 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../obligatory/printf/ft_printf.h"

void	print_character_with_space(va_list args, t_format *option)
{
	size_t	j;
	char	character;

	j = 0;
	character = va_arg(args, int);
	if (option == NULL)
		return;
	if (option->minus == false)
	{
		while (j + 1 < option->space_array)
		{
			putchar_bonus(option, ' ');
			j++;
		}
		putchar_bonus(option, character);
	}
	else if (option->minus == true)
	{
		putchar_bonus(option, character);
		while (j + 1 < option->space_array)
		{
			putchar_bonus(option, ' ');
			j++;
		}
	}
}
