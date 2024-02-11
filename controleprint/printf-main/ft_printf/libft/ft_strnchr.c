/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <mboegler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 14:13:03 by mboegler          #+#    #+#             */
/*   Updated: 2023/12/05 10:39:36 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnchr(const char *s, int c, int n)
{
	unsigned char	value;
	int				i;

	value = (unsigned char)c;
	i = 0;
	while (*s != '\0' && i < n)
	{
		if (value == *s)
		{
			return ((char *)s);
		}
		s++;
		n++;
	}
	if (value == '\0')
	{
		return ((char *)s);
	}
	else
	{
		return (NULL);
	}
}
