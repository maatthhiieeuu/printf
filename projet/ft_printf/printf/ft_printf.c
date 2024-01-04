#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include "libft.h"
#include "ft_printf.h"

static	void	envoyer_impression_ou_bonus(const char *format, va_list args, int *i, t_format *option);

/*----------------------------------------------------------------------------*/

int ft_printf(const char *format, ...)
{
	//printf("\nDébut de fonction de 1.ft_printf\n");
	int	i;

	i = 0;
	va_list args;
	t_format option;
	va_start(args, format);
	while(format[i])
	{
		if ((format[i] == '%') || (format[i] == 92))
		{
			envoyer_impression_ou_bonus(format, args, &i, &option);
		}
		else
			ft_putchar_fd(format[i], 1);
		i++;
	}
	//printf("\n    i = %d", i);
	va_end(args);
	/*printf("ETAT STRUCTURE DE DONNEE : \nFin de fonction ft_printf\n");
    printf("specifier  -  - = %c\n", option.specifier);
    printf("space_array  -  = %d\n", option.space_array);
    printf("precision_array = %d\n", option.precision_array);*/
    //printf("digit_char_until_specifier = %d",option.digit_char_until_specifier);
   /* printf("\nZero  -  -  -  -= %s\n", option.zero ? "true" : "false");
    printf("Space  -  -  -  = %s\n", option.space ? "true" : "false");
    printf("Hash   -  -  -  = %s\n", option.hash ? "true" : "false");
    printf("Minus   -  -  - = %s\n", option.minus ? "true" : "false");
    printf("Plus  -  -  -  -= %s\n", option.plus ? "true" : "false");
    printf("Precision  -  - = %s\n\n", option.precision ? "true" : "false");
    printf("i = %d\n", i);*/
	return (i);
}

/*----------------------------------------------------------------------------*/

static	void	envoyer_impression_ou_bonus(const char *format, va_list args, int *i, t_format *option) // nom en anglais : dispatchAndRouteToBonus
{
	//printf("\nDébut de 2.envoyer_impression_ou_bonus\n");
	if (!format)
		return;
	if (format[*i + 1] == 'c')
		imprimer_caractere(format, args, &i);
	else if (format[*i + 1] == 's')
		imprimer_chaine(format, args, &i);
	else if (format[*i + 1] == 'p')
		imprimer_adresse_pointeur(format, args, &i);
	else if (format[*i + 1] == 'd')
		imprimer_entier_signe(format, args, &i);
	else if (format[*i + 1] == 'i')
		imprimer_entier(format, args, &i);
	else if (format[*i + 1] == 'u')
		imprimer_entier_non_signe(format, args, &i);
	else if (format[*i + 1] == 'x')
		imprimer_hex_minuscule(format, args, &i);
	else if (format[*i + 1] == 'X')
		imprimer_hex_majuscule(format, args, &i);
	else if (format[*i + 1] == '%')
		imprimer_signe_pourcentage(format, &i);
	else
		coordinateur_options_et_flags(format, args, i, option);
}

