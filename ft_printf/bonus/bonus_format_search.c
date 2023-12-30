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
#include "libft.h"
#include "ft_printf.h"

char	format_search(const char *format, int **i)
{
    //printf("Début de fonction de format_search\n");
    int j;
    int count;
    int index;
    char specifier;
    char tab_char[] = "cspdiuxXA";

    
    count = 0;
    index = **i;
    specifier = 'A';
	while (format[index] && count < 6)
    {
        //printf("Début de boucle principale\n");
        j = 0;
        while (j < 9)
        {
            //printf("Début de boucle secondaire\n");
            if (ft_strchr(format + index, tab_char[j]))
            {
                specifier = tab_char[j];
                printf("format_search a trouvé le caractère %c\n!", specifier);
                return (specifier);
            }
            j++;
        }
        index++;
    }
    //printf("format_search n'a pas trouvé le caractère !\n");
    return (specifier);
}

