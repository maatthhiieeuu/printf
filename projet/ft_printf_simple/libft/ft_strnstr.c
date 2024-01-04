/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <mboegler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 16:26:41 by mboegler          #+#    #+#             */
/*   Updated: 2023/12/11 09:15:26 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*big_ptr;

	i = 0;
	j = 0;
	big_ptr = (char *)big;
	if (*little == '\0' || little == NULL)
		return (big_ptr);
	while (i < len && big_ptr[i] != '\0' )
	{
		if (big_ptr[i] == little[j])
		{
			while (little[j] != '\0' && big_ptr[i + j] == little[j]
				&& i + j < len)
				j++;
			if (little[j] == '\0')
				return (&big_ptr[i]);
		}
		j = 0;
		i++;
	}
	return (NULL);
}
//	Elle verifie la presence ou non d'une sous-chaine dans la chaine initiale
