#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <stdbool.h>
#include "libft.h"
#include "ft_printf.h"

void	convertir_espace_chaine_en_entier(const char *s, t_format *option) // nom en anglais : atoi_for_space
{
	//printf("\nDébut de 8.convertir_espace_chaine_en_entier\n");
	
    int    i;
    int    array_size;

    array_size = 0;
    i = 0;

    while ((s[i] != option->specifier) && (s[i] != '.') && (s[i]))
    {
      if (s[i] >= '0' && s[i] <= '9')
          array_size = (array_size * 10) + (s[i] - 48); 
      i++;
    }
    option->space_array = array_size;
    /*printf("ETAT STRUCTURE DE DONNEE : \nFin de fonction 8.convertir_espace_chaine_en_entier\n");
    printf("specifier  -  - = %c\n", option->specifier);
    printf("space_array  -  = %d\n", option->space_array);
    printf("precision_array = %d\n", option->precision_array);
    printf("\nZero  -  -  -  -= %s\n", option->zero ? "true" : "false");
    printf("Space  -  -  -  = %s\n", option->space ? "true" : "false");
    printf("Hash   -  -  -  = %s\n", option->hash ? "true" : "false");
    printf("Minus   -  -  - = %s\n", option->minus ? "true" : "false");
    printf("Plus  -  -  -  -= %s\n", option->plus ? "true" : "false");
    printf("Precision  -  - = %s\n\n", option->precision ? "true" : "false");*/
}

/*----------------------------------------------------------------------------*/

void	convertir_precision_chaine_en_entier(const char *s, t_format *option) // nom en anglais : atoi_for_precision
{
	//printf("\nDébut de 10.convertir_precision_chaine_en_entier\n");
	int    i;
  int    precision_size;

  precision_size = 0;
  i = 0;
  while (s[i] != option->specifier)
  {
    if (s[i] >= '0' && s[i] <= '9')
      precision_size = (precision_size * 10) + (s[i] - 48); 
    i++;
  }
	option->precision_array = precision_size;
  /*printf("ETAT STRUCTURE DE DONNEE : \nFin de fonction 10.convertir_precision_chaine_en_entier\n");
  printf("specifier  -  - = %c\n", option->specifier);
  printf("space_array  -  = %d\n", option->space_array);
  printf("precision_array = %d\n", option->precision_array);
  printf("Zero  -  -  -  -= %s\n", option->zero ? "true" : "false");
  printf("Space  -  -  -  = %s\n", option->space ? "true" : "false");
  printf("Hash   -  -  -  = %s\n", option->hash ? "true" : "false");
  printf("Minus   -  -  - = %s\n", option->minus ? "true" : "false");
  printf("Plus  -  -  -  -= %s\n", option->plus ? "true" : "false");
  printf("Precision  -  - = %s\n\n", option->precision ? "true" : "false");*/
}

/*----------------------------------------------------------------------------*/

int 	compter_jusquau_specifieur(const char *format, t_format *option) // nom en anglais : count_to_specifier
{
	//printf("\nDébut de 9.compter_jusquau_specifieur : \n");
	int i;

	i = 0; 
	while (format[i] != option->specifier)
	{
			i++;
	}
  //printf("Fin de fonction 9.compter_jusquau_specifieur = %d\n\n", i);
	return (i);
  
}