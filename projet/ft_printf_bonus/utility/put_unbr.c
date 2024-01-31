/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unsigned_utility.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 14:57:16 by mboegler          #+#    #+#             */
/*   Updated: 2023/12/22 14:57:20 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

static void	putnbr_upper_nine(int n, int *result);

void	put_unbr(unsigned int n, int *result)
{
	char	c;

	if (n > 9)
	{
		putnbr_upper_nine(n / 10, result);
	}
	c = n % 10 + 48;
	ft_putchar_fd(c, 1);
	*result += 1;
}
static void	putnbr_upper_nine(int n, int *result)
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