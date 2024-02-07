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
#include "ft_printf.h"

void	put_unbr(unsigned int n, int *result)
{
	char	c;

	if (n > 9)
		putnbr_upper_nine(n / 10, result);
	c = n % 10 + 48;
	ft_putchar_fd(c, 1);
	*result += 1;
}
