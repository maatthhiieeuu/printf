/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_character.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:16:07 by mboegler          #+#    #+#             */
/*   Updated: 2024/02/07 14:16:14 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../printf/ft_printf.h"

void	print_character(va_list args, int *i, int *result)
{
	char	recovery_char;

	recovery_char = va_arg(args, int);
	ft_putchar_fd(recovery_char, 1);
	*i += 1;
	*result += 1;
}
