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

typedef struct s_format
{
    char specifier; //stockage du format exemple specifier = 'd' pour un entier 
    int space_array;// stockage de la valeur de champs necessaire avec completion d'espace
    int large_zero; // stockage de la valeur de champs necessaire avec completion de zero
    int precision; // stockage de la precision 
    bool hash; // stockage de # oui ou non 
    bool minus; // stockage de '-' oui ou non 
    bool plus; // stockage de '+' oui ou non 
}t_format;

int 	ft_printf(const char *format, ...);
void	c_manage(const char *format, va_list args, int **i);
void	d_manage(const char *format, va_list args, int **i);
void	i_manage(const char *format, va_list args, int **i);
void	p_manage(const char *format, va_list args, int **i);
void	percent_manage(const char *format, int **i);
void	s_manage(const char *format, va_list args, int **i);
void	u_manage(const char *format, va_list args, int **i);
void	X_manage(const char *format, va_list args, int **i);
void	x_manage(const char *format, va_list args, int **i);
void	dectohex(int num, char minmax);
void	put_adress(uintptr_t num);
void	put_unbr(int n);
char	format_search(const char *format, int **i, t_format *option);
void	format_zero(int n, int size, bool flag);
void	format_space(int n, int size, bool flag);
void    init_struct_format(const char *format, int **i, t_format *option);


#endif