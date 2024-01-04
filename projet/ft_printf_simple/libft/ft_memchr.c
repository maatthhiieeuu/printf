/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <mboegler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 14:08:33 by mboegler          #+#    #+#             */
/*   Updated: 2023/12/05 10:19:15 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr_s;
	unsigned char	cast_c;
	size_t			i;

	ptr_s = (unsigned char *)s;
	cast_c = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (ptr_s[i] == cast_c)
		{
			return (ptr_s + i);
		}
		i++;
	}
	return (NULL);
}
//	memchr cherche le caractere int c dans les n premier caractere de la chaine s