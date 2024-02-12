/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   summary_distribution_coordination.c                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:08:00 by mboegler          #+#    #+#             */
/*   Updated: 2024/02/07 14:08:01 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../obligatory/printf/ft_printf.h"

void	summary_distribution_coordination(const char *format, va_list args,
		int *i, t_format *option)
{
	if (format == NULL || i == NULL || option == NULL)
		return ;
	if (option->specifier == 'c')
		send_character_for_printing(args, option);
	else if (option->specifier == 's')
		string_option_manager(args, option);
	else if (option->specifier == 'p')
		address_option_manager(args, option);
	else if (option->specifier == 'd' || option->specifier == 'i')
		signed_integer_option_manager(format, args, i, option);
	else if (option->specifier == 'u')
		unsigned_integer_option_manager(format, args, i, option);
	else if (option->specifier == 'x')
		lowercase_hexadecimal_manager(format, args, i, option);
	else if (option->specifier == 'X')
		uppercase_hexadecimal_manager(format, args, i, option);
	/*printf("\nTAT STRUCTURE DE DONNEE : \n");
    printf("specifier  -  - = %c\n", option->specifier);
    printf("space_array  -  = %zu\n", option->space_array);
    printf("precision_array = %zu\n", option->precision_array);*/

}
