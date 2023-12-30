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

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <stdbool.h>
#include "libft/libft.h"
#include "ft_printf.h"

void	format_space(int n, int size, bool flag)
{
	int nCpy;
	int	nbrDigit;
	int	count;

	nCpy = n;
	nbrDigit = 0;
	count = 0;
	while (nCpy > 0)
	{
		nCpy /= 10;
		nbrDigit++;
	}
	while ((flag == true) && (count < (size - nbrDigit)))
	{
		ft_putchar_fd(' ', 1);
		count++;
	}
	ft_putnbr_fd(n, 1);
}