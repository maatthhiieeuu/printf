/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:24:46 by mboegler          #+#    #+#             */
/*   Updated: 2024/01/16 11:24:55 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include <stdint.h>
# include <stdbool.h>
# include "libft.h"

typedef struct s_format
{
	char					specifier;
	char					*specifier_ptr;
	size_t					space_array;
	size_t					precision_array;
	size_t					digit_char_until_specifier;
	size_t					digit_point_until_specifier;
	size_t					address_size;
	size_t					number_size;
	int						output;
	uintptr_t				address_int;
	long long int			signed_number;
	long long unsigned int	unsigned_number;
	bool					precision;
	bool					negative_precision;
	bool					space;
	bool					zero;
	bool					hash;
	bool					minus;
	bool					plus;
}t_format;

int		ft_printf(const char *format, ...);
void	print_character(va_list args, int *i, int *result);
void	print_hex_lowercase(va_list args, int *i, int *result);
void	print_hex_uppercase(va_list args, int *i, int *result);
void	print_integer(va_list args, int *i, int *result);
void	print_percent_sign(int *i, int *result);
void	print_pointer(va_list args, int *i, int *result);
void	print_signed_int(va_list args, int *i, int *result);
void	print_string(va_list args, int *i, int *result);
void	print_unsigned_int(va_list args, int *i, int *result);
void	decimal_to_hex(unsigned int num, char minmax, int *result);
void	print_address(uintptr_t num, int *result);
void	put_count_string(char *s, int *result);
void	put_unbr(unsigned int n, int *result);
void	print_int_with_char_count(int n, int *result);
void	address_option_manager(va_list args, t_format *option);
void	address_precision_manager(t_format *option);
void	address_width_manager(t_format *option);
void	check_write(ssize_t check);
void	count_address_characters(t_format *option);
void	count_digits(t_format *option);
void	count_percent_to_specifier(const char *format, t_format *option);
void	count_point_to_specifier(t_format *option, char *point_ptr);
void	default_structure_initialization(t_format *option);
void	field_size_recovery(const char *s, t_format *option);
void	flags_search(const char *format, int i, t_format *option);
void	lowercase_hexadecimal_manager(const char *format, va_list args,
			int *i, t_format *option);
void	negative_precision_search(const char *point_ptr, t_format *option);
void	precision_size_recovery(const char *point_ptr, t_format *option);
void	precision_space_value_search(const char *format, int i,
			t_format *option);
void	print_address_bonus(uintptr_t num, t_format *option);
void	print_address_with_a_space(t_format *option);
void	print_address_with_field_width(t_format *option);
void	print_address_with_field_width_and_minus(t_format *option);
void	print_address_with_plus(t_format *option);
void	print_address_with_precision(t_format *option);
void	print_address_with_precision_and_field_width(t_format *option);
void	print_character_with_space(va_list args, t_format *option);
void	print_character_without_flag(va_list args, t_format *option);
void	print_lowercase_hexadecimal(t_format *option);
void	print_raw_format(const char *format, int *i, t_format *option);
void	print_signed_integer_with_field_width_and_plus(t_format *option);
void	print_signed_integer_with_field_width_and_precision(t_format *option);
void	print_signed_int_with_field_prec_minus(t_format *option);
void	print_signed_integer_with_minus(t_format *option);
void	print_integer_with_plus(t_format *option);
void	print_signed_integer_with_plus_and_zero(t_format *option);
void	print_signed_integer_with_precision(t_format *option);
void	print_signed_integer_with_space(t_format *option);
void	print_signed_integer_without_option(t_format *option);
void	print_string_with_minus_precision_and_space(t_format *option,
			char *string, size_t size_string);
void	print_string_with_precision_and_space(t_format *option,
			char *string, size_t size_string);
void	print_string_with_space(t_format *option, size_t size, char *string);
void	print_unsigned_integer_with_field_width(t_format *option);
void	print_unsigned_integer_with_field_width_and_precision(t_format *option);
void	print_unsigned_int_with_field_prec_minus(t_format *option);
void	print_unsigned_integer_with_minus(t_format *option);
void	print_unsigned_integer_with_precision(t_format *option);
void	print_unsigned_integer_without_option(t_format *option);
void	print_uppercase_hexadecimal(t_format *option);
void	print_zeros_for_address_precision(t_format *option);
void	putchar_bonus(t_format *option, char c);
void	putnbr_bonus(t_format *option, long long int n);
void	putnstr_bonus(t_format *option, char *s, int n);
void	putstr_bonus(t_format *option, char *s);
void	send_character_for_printing(va_list args, t_format *option);
void	signed_integer_field_width_manager(t_format *option);
void	signed_integer_option_manager(const char *format,
			va_list args, int *i, t_format *option);
void	signed_integer_width_and_precision_manager(t_format *option);
void	specifier_search(const char *format, int i, t_format *option);
void	string_option_manager(va_list args, t_format *option);
void	structure_initialization_coordination(const char *format,
			va_list args, int *i, int *result);
void	summary_distribution_coordination(const char *format,
			va_list args, int *i, t_format *option);
void	unsigned_integer_option_manager(const char *format,
			va_list args, int *i, t_format *option);
void	unsigned_integer_width_and_precision_manager(t_format *option);
void	uppercase_hexadecimal_manager(const char *format,
			va_list args, int *i, t_format *option);

#endif
