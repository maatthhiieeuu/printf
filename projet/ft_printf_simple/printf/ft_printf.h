/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <mboegler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 15:24:33 by mboegler          #+#    #+#             */
/*   Updated: 2023/12/08 14:00:33 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include "libft.h"

int     ft_printf(const char *format, ...);
void    print_character(const char *format, va_list args, int **i);
void    print_signed_int(const char *format, va_list args, int **i);
void    print_integer(const char *format, va_list args, int **i);
void    print_pointer_address(const char *format, va_list args, int **i);
void    print_percent_sign(const char *format, int **i);
void    print_string(const char *format, va_list args, int **i);
void    print_unsigned_int(const char *format, va_list args, int **i);
void    print_hex_uppercase(const char *format, va_list args, int **i);
void    print_hex_lowercase(const char *format, va_list args, int **i);
void    decimal_to_hex(int num, char minmax);
void    print_adress(uintptr_t num);
void    put_unbr(unsigned int n);

#endif