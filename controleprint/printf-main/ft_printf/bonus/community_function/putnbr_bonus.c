/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putnbr_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:07:19 by mboegler          #+#    #+#             */
/*   Updated: 2024/02/07 14:07:21 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../obligatory/printf/ft_printf.h"

void	putnbr_bonus(t_format *option, long long int n)
{
	char	c;

	if (option == NULL)
		return ;
	if (n < 0)
	{
		//check_write(write(1, "-", 1));
		option->output += 1;
		if (n == -2147483648)
		{
			check_write(write(1, "2", 1));
			option->output += 1;
			n = -147483648;
		}
		n = -n;
	}
	if (n > 9)
	{
		putnbr_bonus(option, n / 10);
	}
	c = n % 10 + 48;
	check_write(write(1, &c, 1));
	option->output += 1;
}
