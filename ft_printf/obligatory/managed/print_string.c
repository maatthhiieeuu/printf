/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_string.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:18:09 by mboegler          #+#    #+#             */
/*   Updated: 2024/02/07 14:18:17 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../printf/ft_printf.h"

void	print_string(va_list args, int *i, int *result)
{
	char	*string;

	if (i == NULL || result == NULL)
		return ;
	string = va_arg(args, char *);
	if (string == NULL)
		put_count_string("(null)", result);
	put_count_string(string, result);
	*i += 1;
}
