/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <mboegler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 14:41:04 by mboegler          #+#    #+#             */
/*   Updated: 2023/12/07 10:59:09 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	size_t	index;
	size_t	len;
	char	*cpy;

	index = 0;
	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	cpy = (char *)malloc((len + 1) * sizeof(char));
	if (cpy == NULL)
		return (NULL);
	while (index <= len)
	{
		cpy[index] = src[index];
		index++;
	}
	return (cpy);
}
//cree une copie de la chaine de maniere dynamique 