/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <mboegler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 14:20:24 by mboegler          #+#    #+#             */
/*   Updated: 2023/12/05 10:24:35 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	const char		*src_const_char;
	char			*dst_char;
	size_t			i;

	src_const_char = (const char *)src;
	dst_char = (char *)dst;
	i = 0;
	if (!dst && !src)
		return (NULL);
	while (i < n)
	{
		dst_char[i] = src_const_char[i];
		i++;
	}
	return (dst);
}
//	memcpy sert a copier un bloc memoire sur un autre tous deux recu en
//	parametre.
/*-----------------------------------------------------------------------*/
/*		 ATTENTION Memcpy ne prend pas en compte le chevauchement 		 */	