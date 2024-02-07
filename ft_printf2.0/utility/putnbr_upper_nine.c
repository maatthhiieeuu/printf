/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putnbr_upper_nine.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:20:53 by mboegler          #+#    #+#             */
/*   Updated: 2024/02/07 14:20:56 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

void	putnbr_upper_nine(int n, int *result)
{
	char	c;

	if (n < 0)
	{
		write(1, "-", 1);
		*result += 1;
		if (n == -2147483648)
		{
			write(1, "2", 1);
			n = -147483648;
			*result += 1;
		}
		n = -n;
	}
	if (n > 9)
	{
		putnbr_upper_nine(n / 10, result);
	}
	c = n % 10 + 48;
	write(1, &c, 1);
	*result += 1;
}
