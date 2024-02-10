/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <mboegler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 15:49:29 by mboegler          #+#    #+#             */
/*   Updated: 2023/12/05 10:36:25 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	ssize_t	check;
	if (!s)
		return ;
	while (*s != '\0')
	{
		check = write(fd, s, 1);
		if (check == -1)
			return ;
		s++;
	}
}
