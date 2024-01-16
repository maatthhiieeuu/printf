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
	//printf("\nDébut de imprimer_adresse_avec_un_espace :\n");     	

	ft_putchar_fd(' ', 1);
	print_adress(option->address_int);
}
