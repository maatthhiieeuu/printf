/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_option_manager.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:07:53 by mboegler          #+#    #+#             */
/*   Updated: 2024/02/07 14:07:54 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../obligatory/printf/ft_printf.h"

static void	complement_parsing(t_format *option);

void	string_option_manager(va_list args, t_format *option)
{
	size_t	size_string;
	char	*string;

	complement_parsing(option);
	string = va_arg(args, char *);
	size_string = ft_strlen(string);
	if (string == NULL)
		putstr_bonus(option, "(null)");
	if (option == NULL)
		return ;
	if (option->space_array > 0 && option->precision_array == 0)
		print_string_with_space(option, size_string, string);
	else if (option->space_array == 0 && option->precision_array > 0)
		putnstr_bonus(option, string, option->precision_array);
	else if (option->space_array > 0 && option->precision_array > 0)
	{
		if (option->minus == true)
			print_string_with_minus_precision_and_space(option,
				string, ft_strlen(string));
		else if (option->minus == false)
			print_string_with_precision_and_space(option,
				string, ft_strlen(string));
	}
}

static void	complement_parsing(t_format *option)
{
	option->hash = false;
	option->space = false;
	option->plus = false;
	option->zero = false;
}
