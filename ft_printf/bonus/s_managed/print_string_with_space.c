/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_string_with_space.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:06:51 by mboegler          #+#    #+#             */
/*   Updated: 2024/02/07 14:06:51 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../obligatory/printf/ft_printf.h"

static void	print_without_minus(t_format *option, size_t size, char *string);
static void	print_with_minus(t_format *option, size_t size, char *string);

void	print_string_with_space(t_format *option, size_t size, char *string)
{
	if (option == NULL || string == NULL)
		return ;
	if (option->minus == false)
		print_without_minus(option, size, string);
	else if (option->minus == true)
		print_with_minus(option, size, string);
}

static void	print_without_minus(t_format *option, size_t size, char *string)
{
	size_t	j;

	j = 0;
	if (option == NULL || string == NULL)
		return ;
	while (size + j < option->space_array)
	{
		putchar_bonus(option, ' ');
		j++;
	}
	putstr_bonus(option, string);
}

static void	print_with_minus(t_format *option, size_t size, char *string)
{
	size_t	j;

	j = 0;
	if (option == NULL || string == NULL)
		return ;
	putstr_bonus(option, string);
	while (size + j < option->space_array)
	{
		putchar_bonus(option, ' ');
		j++;
	}
}
