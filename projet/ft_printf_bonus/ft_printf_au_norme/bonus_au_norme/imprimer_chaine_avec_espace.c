/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   imprimer_chaine_avec_espace.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:11:29 by mboegler          #+#    #+#             */
/*   Updated: 2024/01/16 11:11:31 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

void	imprimer_chaine_avec_espace(t_format *option, size_t size, char *string)
{
	size_t	j;

	j = 0;
	if (option->minus == false)
	{
		while (size + j < option->space_array)
		{
			ft_putchar_fd(' ', 1);
			j++;
		}
		ft_putstr_fd(string, 1);
	}
	else if (option->minus == true)
	{
		ft_putstr_fd(string, 1);
		while (size + j < option->space_array)
		{
			ft_putchar_fd(' ', 1);
			j++;
		}
	}
}
