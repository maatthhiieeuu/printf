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

char	*ft_strchr(const char *s, int c)
{
	unsigned char	value;

	value = (unsigned char)c;
	while (*s != '\0')
	{
		if (value == *s)
		{
			return ((char *)s);
		}
		s++;
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
//	recherche la première occurrence d'un caractère dans une chaîne
//	de caractères
