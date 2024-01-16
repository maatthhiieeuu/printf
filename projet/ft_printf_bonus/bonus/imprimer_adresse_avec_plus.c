/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   imprimer_adresse_avec_plus.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:09:45 by mboegler          #+#    #+#             */
/*   Updated: 2024/01/16 11:09:47 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

void	imprimer_adresse_avec_plus(t_format *option)
{
	//printf("\nDébut de imprimer_adresse_avec_plus : \n");	
	ft_putchar_fd('+', 1);
	print_adress(option->address_int);
}
