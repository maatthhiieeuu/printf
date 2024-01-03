/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:18:41 by mboegler          #+#    #+#             */
/*   Updated: 2023/11/20 10:10:58 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	value;
	const char		*s_cover;

	s_cover = (char *)s;
	value = (unsigned char)c;
	while (*s_cover != '\0')
	{
		s_cover++;
	}
	if (value == '\0')
	{
		return ((char *)s_cover);
	}
	while (s <= s_cover)
	{
		if (value == *s_cover)
		{
			return ((char *)s_cover);
		}
		s_cover--;
	}
	return (NULL);
}
//	 recherche de la droite vers la gauche le caractere c .