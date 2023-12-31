/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   x_manage.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 15:20:27 by mboegler          #+#    #+#             */
/*   Updated: 2023/12/22 15:20:42 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <stdbool.h>
#include "libft.h"
#include "ft_printf.h"

void    init_struct_format(const char *format, int **i, t_format *option)    
{
    option->specifier = 0;
    option->space_array = 0;
    option->large_zero = 0;
    option->precision = -1;
    option->hash = false;
    option->minus = false;
    option->plus = false;
    printf("\nEnvoie à format_search\n");
    format_search(format, i, option);
}
char	format_search(const char *format, int **i, t_format *option)
{
    //printf("Début de fonction de format_search\n");
    int j;
    //int count;
    int index;
    char tab_char[] = "cspdiuxX";

    //count = 0;
    index = **i;
	while (format[index])
    {
        //printf("Début de boucle principale\n");
        j = 0;
        while (j < 9)
        {
            //printf("Début de boucle secondaire\n");
            ft_strchr(format + index, tab_char[j]);
            if (format)
            {
                option->specifier = tab_char[j];
                printf("format_search a trouvé le caractère %c\n!", option->specifier);
                return (option->specifier);
            }
            j++;
        }
        index++;
    }
    //printf("format_search n'a pas trouvé le caractère !\n");
    return (option->specifier);
}

