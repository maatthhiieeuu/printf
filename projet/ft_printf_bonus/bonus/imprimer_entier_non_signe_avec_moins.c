/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   imprimer_entier_non_signe_avec_moins.c             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:13:25 by mboegler          #+#    #+#             */
/*   Updated: 2024/01/16 11:13:27 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

void	imprimer_entier_non_signe_avec_moins(t_format *option)
{
	putnbr_bonus(option, option->unsigned_number);
}
