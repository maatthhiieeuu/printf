/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_unbr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:19:19 by mboegler          #+#    #+#             */
/*   Updated: 2024/02/07 14:19:28 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../printf/ft_printf.h"

void	put_unbr(unsigned int n, int *result)
{
	char	c;

	if (result == NULL)
		return ;
	else if (n > 9)
		print_int_with_char_count(n / 10, result);
	c = n % 10 + 48;
	ft_putchar_fd(c, 1);
	*result += 1;
}
