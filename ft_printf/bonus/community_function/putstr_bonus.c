/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putstr_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:07:28 by mboegler          #+#    #+#             */
/*   Updated: 2024/02/07 14:07:29 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../obligatory/printf/ft_printf.h"

void	putstr_bonus(t_format *option, char *s)
{
	if (option == NULL || s == NULL)
		return ;
	while (*s != '\0')
	{
		check_write(write(1, s, 1));
		option->output += 1;
		s++;
	}
}
