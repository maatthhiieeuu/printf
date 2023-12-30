/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <mboegler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 14:30:32 by mboegler          #+#    #+#             */
/*   Updated: 2023/12/05 10:11:59 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t elementCount, size_t elementSize)
{
	void			*ptr;	

	ptr = malloc(elementCount * elementSize);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, elementCount * elementSize);
	return (ptr);
}
//	utilise malloc pour obtenir de la memoire dynamique et initialise tous
//	les octets a zero