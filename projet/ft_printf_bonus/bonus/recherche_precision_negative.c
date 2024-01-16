/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   recherche_precision_negative.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:21:47 by mboegler          #+#    #+#             */
/*   Updated: 2024/01/16 11:21:50 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

void    recherche_precision_negative(const char *point_ptr, t_format *option) // nom en anglais : process_numeric_option
{
    //printf("\n- Début de recherche_precision_negative :\n\n");
	size_t j;

    j = 0;
	while (j < option->digit_point_until_specifier && option->negative_precision == false)
	{
		if (ft_atoi(point_ptr + j) < 0)
			option->negative_precision = true;
		j++;
  	}
}
