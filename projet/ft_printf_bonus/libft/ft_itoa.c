/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <mboegler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 10:20:04 by mboegler          #+#    #+#             */
/*   Updated: 2023/12/05 10:16:38 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int short	limit_size(int n)
{
	unsigned int	size_memory;

	size_memory = 0;
	if (n == -2147483648)
		size_memory = 11;
	else if (n == 2147483647)
		size_memory = 10;
	return (size_memory);
}

static char	*memory_allocation(int n, char *result, int *len, int *neg)
{
	while (((n > 9) || (n < -9)) && (n != -2147483648) && (n != 2147483647))
	{
		n /= 10;
		*len += 1;
	}
	if (n < 0)
	{
		*len += 1;
		*neg = 1;
	}
	if ((n == -2147483648) || (n == 2147483647))
		*len = limit_size(n);
	result = (char *)malloc(*len + 1);
	if (result == NULL)
		return (NULL);
	return (result);
}

static void	is_limit(int *n, char *result, int *len)
{
	if (*n == -2147483648)
	{
		ft_strlcpy(result, "-2147483648", 12);
		*len = -1;
	}
	else if (*n == 2147483647)
	{
		ft_strlcpy(result, "2147483647", 11);
		*len = -1;
	}
	else if (*n < 0)
	{
		result[0] = '-';
		*n *= -1;
	}
}

char	*ft_itoa(int n)
{
	char		*result;
	int			len;
	int short	digit;
	int			neg;

	len = 1;
	neg = 0;
	result = NULL;
	result = memory_allocation(n, result, &len, &neg);
	if (result == NULL)
		return (NULL);
	result[len] = '\0';
	len--;
	if ((n < 0) || (n == -2147483648) || (n == 2147483647))
		is_limit(&n, result, &len);
	while ((len >= 0) && ((n != -2147483648) && (n != 2147483647)))
	{
		digit = n % 10;
		n /= 10;
		result[len] = digit + 48;
		len--;
	}
	if (neg == 1)
		result[0] = '-';
	return (result);
}
//	retourne un entier en chaine de caractere