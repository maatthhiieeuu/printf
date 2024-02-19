/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <mboegler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 14:17:08 by mboegler          #+#    #+#             */
/*   Updated: 2023/12/05 10:07:54 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	conversion(const char *s, int *sign, int *result);

int	ft_atoi(const char *s)
{
	int	sign;
	int	result;

	result = 0;
	sign = 1;
	if (s == NULL)
		return (-1);
	conversion(s, &sign, &result);
	return (result * sign);
}

static int	conversion(const char *s, int *sign, int *result)
{
	int	i;

	i = 0;
	if (s == NULL || sign == NULL || result == NULL)
		return (-1);
	while (!ft_isdigit(s[i]))
	{
		i++;
	}
	if (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
		{
			*sign *= -1;
		}
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		*result = (*result * 10) + (s[i] - 48);
		i++;
	}
	return (*result * *sign);
}
