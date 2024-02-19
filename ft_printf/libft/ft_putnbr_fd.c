/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <mboegler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 09:50:45 by mboegler          #+#    #+#             */
/*   Updated: 2023/12/05 10:35:20 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	check_written(ssize_t check);

void	ft_putnbr_fd(int n, int fd)
{
	char	c;

	if (n < 0)
	{
		check_written(write(fd, "-", 1));
		if (n == -2147483648)
		{
			check_written(write(fd, "2", 1));
			n = -147483648;
		}
		n = -n;
	}
	if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
	}
	c = n % 10 + 48;
	check_written(write(fd, &c, 1));
}

static void	check_written(ssize_t check)
{
	if (check == -1)
		return ;
}
