/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   coordination_initialisation_structure.c            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboegler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:02:32 by mboegler          #+#    #+#             */
/*   Updated: 2024/01/16 11:02:34 by mboegler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

void	coordination_initialisation_structure(const char *format, va_list args, int *i) // nom en anglais : coordinator_options_and_flags
{
    //printf("\nDébut de fonction de coordination_initialisation_structure\n");
	t_format option;
	initialisation_par_default_structure(&option);
	recherche_specificateur(format, *i, &option);
    if(option.specifier != 0)
	{
   		recherche_drapeaux(format, *i, &option);
    	recherche_valeur_espace_precision(format, *i, &option);
    	*i += option.digit_char_until_specifier;
    	coordination_distribution_sommaire(format, args, i, &option);
        
	}
}
/*
printf("*\n\n");
        printf("    ETAT STRUCTURE DE DONNEE : \n");
        printf("        -specifier  -  - = %c\n", option.specifier);
        printf("        -space_array  -  = %ld\n", option.space_array);
        printf("        -precision_array = %ld\n", option.precision_array);
        printf("        -digit_char_until_specifier = %ld\n",option.digit_char_until_specifier);
        printf("        -digit_point_until_specifier = %ld\n",option.digit_point_until_specifier);
        printf("        -address_size -  = %ld\n",option.address_size);
        printf("        -Precision  -  - = %s\n", option.precision ? "true" : "false");
        printf("        -Precision_negative  -  - = %s\n", option.negative_precision ? "true" : "false");
        printf("        -Space  -  -  -  = %s\n", option.space ? "true" : "false");
        printf("        -Zero  -  -  -  -= %s\n", option.zero ? "true" : "false");
        printf("        -Hash   -  -  -  = %s\n", option.hash ? "true" : "false");
        printf("        -Minus   -  -  - = %s\n", option.minus ? "true" : "false");
        printf("        -Plus  -  -  -  -= %s\n", option.plus ? "true" : "false");
        printf("        -i  -   -   -   -= %d\n\n", *i);
*/
