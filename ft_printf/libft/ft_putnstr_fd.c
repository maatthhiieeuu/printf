/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnstr_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:38:48 by mboegler          #+#    #+#             */
/*   Updated: 2024/02/07 14:38:53 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnstr_fd(char *s, int n, int fd)
{
	ssize_t	check;
	if (!s)
		return ;
	while (*s != '\0' && n > 0)
	{
		check = write(fd, s, 1);
		if (check == -1)
			return ;
		s++;
		n--;
	}
}
