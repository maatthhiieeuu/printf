/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <mboegler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 12:34:52 by mboegler          #+#    #+#             */
/*   Updated: 2023/12/08 14:15:18 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t		i;
	size_t	j;
	size_t	result_len;
	char	*result;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return(NULL);
	result_len = ft_strlen(s1) + ft_strlen(s2);
	result = (char *)malloc((1 + result_len ) * sizeof(char));
	if (result == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		result[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		result[i + j] = s2[j];
		j++;
	}
	result[i + j] = '\0';
	return (result);
}
//	strjoin sert a joindre deux chaine de caractere en une
