/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compter_pourcent_jusquau_specificateur.c           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:00:01 by mboegler          #+#    #+#             */
/*   Updated: 2024/01/16 11:00:06 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <stdbool.h>
#include "libft.h"
#include "ft_printf.h"

void 	compter_pourcent_jusquau_specificateur(const char *format, t_format *option) // nom en anglais : count_to_specifier
{
	//printf("- Début de compter_pourcent_jusquau_specifieur : \n\n");
	size_t i;

	i = 0; 
	while (format[i] != option->specifier)
	{
			i++;
	}
	option->digit_char_until_specifier = i;
}
