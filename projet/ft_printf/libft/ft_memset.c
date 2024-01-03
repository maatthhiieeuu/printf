/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <mboegler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 15:14:26 by mboegler          #+#    #+#             */
/*   Updated: 2023/12/05 10:27:54 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int c, size_t n)
{
	unsigned char	*blc_mem;
	unsigned char	value;
	size_t			i;

	blc_mem = (unsigned char *)ptr;
	value = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		*blc_mem = value;
		blc_mem++;
		i++;
	}
	return (ptr);
}
//	 ajoute le caractere c sur n octet d'un bloc memoire