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

char	*ft_strnchr(const char *s, int c, char *ptr_end)
{
    unsigned char	value;

    value = (unsigned char)c;
    if (s == NULL || ptr_end == NULL)
        return (NULL);
    while (s < ptr_end && *s != '\0')
    {
        if (value == *s)
        {
            return ((char *)s);
        }
        s++;
    }
    if (value == '\0' && s == ptr_end)
    {
        return ((char *)s);
    }
    return (NULL);
}
