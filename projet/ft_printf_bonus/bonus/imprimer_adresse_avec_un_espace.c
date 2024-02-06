/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   imprimer_adresse_avec_un_espace.c                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:10:19 by mboegler          #+#    #+#             */
/*   Updated: 2024/01/16 11:10:24 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

void	imprimer_adresse_avec_un_espace(t_format *option)
{
	putchar_bonus(option, ' ');
	print_adress_bonus(option->address_int, option);
}
