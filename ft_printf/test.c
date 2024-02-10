/*#include "../obligatory/printf/ft_printf.h"
#include <stdio.h>
#include <limits.h>

int main(void)
{
    // Comparaison pour les entiers signés
    printf("test 1 : Or INT_MAX: %d\n", INT_MAX);
    ft_printf("test 1 : ft INT_MAX: %d\n\n", INT_MAX);
    printf("test 2 : Or INT_MIN: %d\n", INT_MIN);
    ft_printf("test 2 : ft INT_MIN: %d\n\n", INT_MIN);

    // Comparaison pour les entiers non signés
    printf("test 3 : Or UINT_MAX: %u\n", UINT_MAX);
    ft_printf("test 3 : ft UINT_MAX: %u\n\n", UINT_MAX);

    // Comparaison pour les pointeurs
    void *ptr = (void *)ULONG_MAX;
    printf("test 7 : Or Pointer: %p\n", ptr);
    ft_printf("test 7 : ft Pointer: %p\n\n", ptr);

    // Comparaison pour caractères et chaînes de caractères
    printf("test 8 : Or Character: %c\n", 'A');
    ft_printf("test 8 : ft Character: %c\n\n", 'A');
    printf("test 9 : Or String: %s\n", "Test string");
    ft_printf("test 9 : ft String: %s\n\n", "Test string");

    // Comparaison pour les hexadécimaux
    printf("test 10 : Or Hex (lowercase): %x\n", UINT_MAX);
    ft_printf("test 10 : ft Hex (lowercase): %x\n\n", UINT_MAX);
    printf("test 11 : Or Hex (uppercase): %X\n", UINT_MAX);
    ft_printf("test 11 : ft Hex (uppercase): %X\n\n", UINT_MAX);

    // Comparaison pour le pourcentage
    printf("test 12 : Or Percent: %%\n");
    ft_printf("test 12 : ft Percent: %%\n\n");

    return 0;
}

*/


#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <limits.h>
#include "libft/libft.h"
#include "../obligatory/printf/ft_printf.h"

int main(void)
{
	int result_Or = -1;
	int result_Ft = -1;
	int x = UINT_MAX;
	int u = UINT_MAX;
	int n = INT_MAX;
	char *ptr = (void *)ULONG_MAX;
	int var1 = INT_MAX;
	char var2 = ' ';
	float var3 = 3.14f;
	double var4 = 6.28;
	int array[5] = {1, 2, 3, 4, 5};
	char *str = "la coccinelle de 3cm était toute petite, mais fort courageus devant des punaise à peine plus grande qu'elle. C'est pourquoi elle n'avait pas peur de grimper pour chercher les pucerons qui était à sa portée.";
	void *pointers[] = 
	    {
			NULL,
			&var1,
			&var2,
			&var3,
			&var4,
			array,
			str,
			&pointers,
			main // Pointeur vers une fonction
		};
	size_t num_pointers = sizeof(pointers) / sizeof(void *);
	char lettre = '~';
	char *null_ptr = NULL;
	char phrase[] = "la coccinelle de 3cm était toute petite, mais fort courageus devant des punaise à peine plus grande qu'elle. C'est pourquoi elle n'avait pas peur de grimper pour chercher les pucerons qui était à sa portée.";
	int max = INT_MIN;

	while(max < INT_MAX)
	{
		result_Or = printf("OR : *%d*\n", max);
		result_Ft = ft_printf("FT : *%d*\n", max);
		printf("result Or = %d\n", result_Or);
		printf("result Ft = %d\n\n", result_Ft);
		max++;
	}
		

/*
	printf("   _     _     _     _ \n  |-|   |-|   |-|   |-|\n  |-|   |-|   |-|   |-|\n ----- ----- ----- -----\n  ---   ---   ---   ---\n   -     -     -     -\n\n");
	printf("*   |||---   BONUS : %%X   ---|||   *\n\n\n");

	result_Or = printf("OR :%%X = *%X*\n", x);
	result_Ft = ft_printf("FT :%%X = *%X*\n", x);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%+X = *%+X*\n", x);
	result_Ft = ft_printf("FT :%%+X = *%+X*\n", x);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%-X = *%-X*\n", x);
	result_Ft = ft_printf("FT :%%-X = *%-X*\n", x);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%% X = *% X*\n", x);
	result_Ft = ft_printf("FT :%% X = *% X*\n", x);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%#X = *%#X*\n", x);
	result_Ft = ft_printf("FT :%%#X = *%#X*\n", x);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%.X = *%.X*\n", x);
	result_Ft = ft_printf("FT :%%.X = *%.X*\n", x);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%0X = *%0X*\n", x);
	result_Ft = ft_printf("FT :%%0X = *%0X*\n", x);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%5X = *%5X*\n", x);
	result_Ft = ft_printf("FT :%%5X = *%5X*\n", x);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%+5X = *%+5X*\n", x);
	result_Ft = ft_printf("FT :%%+5X = *%+5X*\n", x);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%-5X = *%-5X*\n", x);
	result_Ft = ft_printf("FT :%%-5X = *%-5X*\n", x);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%.5X = *%.5X*\n", x);
	result_Ft = ft_printf("FT :%%.5X = *%.5X*\n", x);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%-.5X = *%.5X*\n", x);
	result_Ft = ft_printf("FT :%%-.5X = *%.5X*\n", x);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%.-5X = *%.5X*\n", x);
	result_Ft = ft_printf("FT :%%.-5X = *%.5X*\n", x);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%+.5X = *%.5X*\n", x);
	result_Ft = ft_printf("FT :%%+.5X = *%.5X*\n", x);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%.+5X = *%.5X*\n", x);
	result_Ft = ft_printf("FT :%%.+5X = *%.5X*\n", x);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%#5X = *%#5X*\n", x);
	result_Ft = ft_printf("FT :%%#5X = *%#5X*\n", x);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%% 5X = *% 5X*\n", x);
	result_Ft = ft_printf("FT :%% 5X = *% 5X*\n", x);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%05X = *%05X*\n", x);
	result_Ft = ft_printf("FT :%%05X = *%05X*\n", x);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%-05X = *%-05X*\n", x);
	result_Ft = ft_printf("FT :%%-05X = *%-05X*\n", x);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%+05X = *%+05X*\n", x);
	result_Ft = ft_printf("FT :%%+05X = *%+05X*\n", x);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%#05X = *%#05X*\n", x);
	result_Ft = ft_printf("FT :%%#05X = *%#05X*\n", x);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%8.5X = *%8.5X*\n", x);
	result_Ft = ft_printf("FT :%%8.5X = *%8.5X*\n", x);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%-8.5X = *%-8.5X*\n", x);
	result_Ft = ft_printf("FT :%%-8.5X = *%-8.5X*\n", x);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%+8.5X = *%+8.5X*\n", x);
	result_Ft = ft_printf("FT :%%+8.5X = *%+8.5X*\n", x);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%08.5X = *%08.5X*\n", x);
	result_Ft = ft_printf("FT :%%08.5X = *%08.5X*\n", x);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%#8.5X = *%#8.5X*\n", x);
	result_Ft = ft_printf("FT :%%#8.5X = *%#8.5X*\n", x);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%% 8.5X = *% 8.5X*\n", x);
	result_Ft = ft_printf("FT :%% 8.5X = *% 8.5X*\n", x);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%# 8.5X = *%# 8.5X*\n", x);
	result_Ft = ft_printf("FT :%%# 8.5X = *%# 8.5X*\n", x);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%+-8.5X = *%+-8.5X*\n", x);
	result_Ft = ft_printf("FT :%%+-8.5X = *%+-8.5X*\n", x);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%-+8.5X = *%-+8.5X*\n", x);
	result_Ft = ft_printf("FT :%%-+8.5X = *%-+8.5X*\n", x);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%0.X = *%0.X*\n", x);
	result_Ft = ft_printf("FT :%%0.X = *%0.X*\n", x);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%0.5X = *%0.5X*\n", x);
	result_Ft = ft_printf("FT :%%0.5X = *%0.5X*\n", x);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%.-5X = *%.-5X*\n", x);
	result_Ft = ft_printf("FT :%%.-5X = *%.-5X*\n", x);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%8.-5X = *%8.-5X*\n", x);
	result_Ft = ft_printf("FT :%%8.-5X = *%8.-5X*\n", x);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);


	printf("  ---   ---   ---   ---\n  |-|   |-|   |-|   |-|\n  |-|   |-|   |-|   |-|\n ----- ----- ----- -----\n  ---   ---   ---   ---\n   -     -     -     -\n\n");
	printf("*   |||---   BONUS : %%x   ---|||   *\n\n\n");

	result_Or = printf("OR :%%x = *%x*\n", x);
	result_Ft = ft_printf("FT :%%x = *%x*\n", x);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%+x = *%+x*\n", x);
	result_Ft = ft_printf("FT :%%+x = *%+x*\n", x);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%-x = *%-x*\n", x);
	result_Ft = ft_printf("FT :%%-x = *%-x*\n", x);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%% x = *% x*\n", x);
	result_Ft = ft_printf("FT :%% x = *% x*\n", x);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%#x = *%#x*\n", x);
	result_Ft = ft_printf("FT :%%#x = *%#x*\n", x);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%.x = *%.x*\n", x);
	result_Ft = ft_printf("FT :%%.x = *%.x*\n", x);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%0x = *%0x*\n", x);
	result_Ft = ft_printf("FT :%%0x = *%0x*\n", x);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%5x = *%5x*\n", x);
	result_Ft = ft_printf("FT :%%5x = *%5x*\n", x);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%+5x = *%+5x*\n", x);
	result_Ft = ft_printf("FT :%%+5x = *%+5x*\n", x);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%-5x = *%-5x*\n", x);
	result_Ft = ft_printf("FT :%%-5x = *%-5x*\n", x);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%.5x = *%.5x*\n", x);
	result_Ft = ft_printf("FT :%%.5x = *%.5x*\n", x);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%-.5x = *%.5x*\n", x);
	result_Ft = ft_printf("FT :%%-.5x = *%.5x*\n", x);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%.-5x = *%.5x*\n", x);
	result_Ft = ft_printf("FT :%%.-5x = *%.5x*\n", x);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%+.5x = *%.5x*\n", x);
	result_Ft = ft_printf("FT :%%+.5x = *%.5x*\n", x);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%.+5x = *%.5x*\n", x);
	result_Ft = ft_printf("FT :%%.+5x = *%.5x*\n", x);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%#5x = *%#5x*\n", x);
	result_Ft = ft_printf("FT :%%#5x = *%#5x*\n", x);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%% 5x = *% 5x*\n", x);
	result_Ft = ft_printf("FT :%% 5x = *% 5x*\n", x);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%05x = *%05x*\n", x);
	result_Ft = ft_printf("FT :%%05x = *%05x*\n", x);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%-05x = *%-05x*\n", x);
	result_Ft = ft_printf("FT :%%-05x = *%-05x*\n", x);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%+05x = *%+05x*\n", x);
	result_Ft = ft_printf("FT :%%+05x = *%+05x*\n", x);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%#05x = *%#05x*\n", x);
	result_Ft = ft_printf("FT :%%#05x = *%#05x*\n", x);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%8.5x = *%8.5x*\n", x);
	result_Ft = ft_printf("FT :%%8.5x = *%8.5x*\n", x);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%-8.5x = *%-8.5x*\n", x);
	result_Ft = ft_printf("FT :%%-8.5x = *%-8.5x*\n", x);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%+8.5x = *%+8.5x*\n", x);
	result_Ft = ft_printf("FT :%%+8.5x = *%+8.5x*\n", x);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%08.5x = *%08.5x*\n", x);
	result_Ft = ft_printf("FT :%%08.5x = *%08.5x*\n", x);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%#8.5x = *%#8.5x*\n", x);
	result_Ft = ft_printf("FT :%%#8.5x = *%#8.5x*\n", x);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%% 8.5x = *% 8.5x*\n", x);
	result_Ft = ft_printf("FT :%% 8.5x = *% 8.5x*\n", x);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%# 8.5x = *%# 8.5x*\n", x);
	result_Ft = ft_printf("FT :%%# 8.5x = *%# 8.5x*\n", x);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%+-8.5x = *%+-8.5x*\n", x);
	result_Ft = ft_printf("FT :%%+-8.5x = *%+-8.5x*\n", x);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%-+8.5x = *%-+8.5x*\n", x);
	result_Ft = ft_printf("FT :%%-+8.5x = *%-+8.5x*\n", x);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%0.x = *%0.x*\n", x);
	result_Ft = ft_printf("FT :%%0.x = *%0.x*\n", x);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%0.5x = *%0.5x*\n", x);
	result_Ft = ft_printf("FT :%%0.5x = *%0.5x*\n", x);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%.-5x = *%.-5x*\n", x);
	result_Ft = ft_printf("FT :%%.-5x = *%.-5x*\n", x);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%8.-5x = *%8.-5x*\n", x);
	result_Ft = ft_printf("FT :%%8.-5x = *%8.-5x*\n", x);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);


	printf("  ---   ---   ---   ---\n  |-|   |-|   |-|   |-|\n  |-|   |-|   |-|   |-|\n ----- ----- ----- -----\n  ---   ---   ---   ---\n   -     -     -     -\n\n");
	printf("*   |||---   BONUS : %%u   ---|||   *\n\n\n");

	result_Or = printf("OR :%%u = *%u*\n", u);
	result_Ft = ft_printf("FT :%%u = *%u*\n", u);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%+u = *%+u*\n", u);
	result_Ft = ft_printf("FT :%%+u = *%+u*\n", u);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%-u = *%-u*\n", u);
	result_Ft = ft_printf("FT :%%-u = *%-u*\n", u);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%% u = *% u*\n", u);
	result_Ft = ft_printf("FT :%% u = *% u*\n", u);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%#u = *%#u*\n", u);
	result_Ft = ft_printf("FT :%%#u = *%#u*\n", u);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%.u = *%.u*\n", u);
	result_Ft = ft_printf("FT :%%.u = *%.u*\n", u);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%0u = *%0u*\n", u);
	result_Ft = ft_printf("FT :%%0u = *%0u*\n", u);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%5u = *%5u*\n", u);
	result_Ft = ft_printf("FT :%%5u = *%5u*\n", u);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%+5u = *%+5u*\n", u);
	result_Ft = ft_printf("FT :%%+5u = *%+5u*\n", u);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%-5u = *%-5u*\n", u);
	result_Ft = ft_printf("FT :%%-5u = *%-5u*\n", u);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%.5u = *%.5u*\n", u);
	result_Ft = ft_printf("FT :%%.5u = *%.5u*\n", u);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%-.5u = *%.5u*\n", u);
	result_Ft = ft_printf("FT :%%-.5u = *%.5u*\n", u);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%.-5u = *%.5u*\n", u);
	result_Ft = ft_printf("FT :%%.-5u = *%.5u*\n", u);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%+.5u = *%.5u*\n", u);
	result_Ft = ft_printf("FT :%%+.5u = *%.5u*\n", u);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%.+5u = *%.5u*\n", u);
	result_Ft = ft_printf("FT :%%.+5u = *%.5u*\n", u);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%#5u = *%#5u*\n", u);
	result_Ft = ft_printf("FT :%%#5u = *%#5u*\n", u);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%% 5u = *% 5u*\n", u);
	result_Ft = ft_printf("FT :%% 5u = *% 5u*\n", u);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%05u = *%05u*\n", u);
	result_Ft = ft_printf("FT :%%05u = *%05u*\n", u);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%-05u = *%-05u*\n", u);
	result_Ft = ft_printf("FT :%%-05u = *%-05u*\n", u);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%+05u = *%+05u*\n", u);
	result_Ft = ft_printf("FT :%%+05u = *%+05u*\n", u);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%#05u = *%#05u*\n", u);
	result_Ft = ft_printf("FT :%%#05u = *%#05u*\n", u);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%8.5u = *%8.5u*\n", u);
	result_Ft = ft_printf("FT :%%8.5u = *%8.5u*\n", u);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%-8.5u = *%-8.5u*\n", u);
	result_Ft = ft_printf("FT :%%-8.5u = *%-8.5u*\n", u);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%+8.5u = *%+8.5u*\n", u);
	result_Ft = ft_printf("FT :%%+8.5u = *%+8.5u*\n", u);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%08.5u = *%08.5u*\n", u);
	result_Ft = ft_printf("FT :%%08.5u = *%08.5u*\n", u);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%#8.5u = *%#8.5u*\n", u);
	result_Ft = ft_printf("FT :%%#8.5u = *%#8.5u*\n", u);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%% 8.5u = *% 8.5u*\n", u);
	result_Ft = ft_printf("FT :%% 8.5u = *% 8.5u*\n", u);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%# 8.5u = *%# 8.5u*\n", u);
	result_Ft = ft_printf("FT :%%# 8.5u = *%# 8.5u*\n", u);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%+-8.5u = *%+-8.5u*\n", u);
	result_Ft = ft_printf("FT :%%+-8.5u = *%+-8.5u*\n", u);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%-+8.5u = *%-+8.5u*\n", u);
	result_Ft = ft_printf("FT :%%-+8.5u = *%-+8.5u*\n", u);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%0.u = *%0.u*\n", u);
	result_Ft = ft_printf("FT :%%0.u = *%0.u*\n", u);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%0.5u = *%0.5u*\n", u);
	result_Ft = ft_printf("FT :%%0.5u = *%0.5u*\n", u);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%.-5u = *%.-5u*\n", u);
	result_Ft = ft_printf("FT :%%.-5u = *%.-5u*\n", u);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%8.-5u = *%8.-5u*\n", u);
	result_Ft = ft_printf("FT :%%8.-5u = *%8.-5u*\n", u);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);


	printf("  ---   ---   ---   ---\n  |-|   |-|   |-|   |-|\n  |-|   |-|   |-|   |-|\n ----- ----- ----- -----\n  ---   ---   ---   ---\n   -     -     -     -\n\n");
	printf("*   |||---   BONUS : %%d   ---|||   *\n\n\n");

	result_Or = printf("OR :%%d = *%d*\n", n);
	result_Ft = ft_printf("FT :%%d = *%d*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%+d = *%+d*\n", n);
	result_Ft = ft_printf("FT :%%+d = *%+d*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%-d = *%-d*\n", n);
	result_Ft = ft_printf("FT :%%-d = *%-d*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%% d = *% d*\n", n);
	result_Ft = ft_printf("FT :%% d = *% d*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%#d = *%#d*\n", n);
	result_Ft = ft_printf("FT :%%#d = *%#d*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%.d = *%.d*\n", n);
	result_Ft = ft_printf("FT :%%.d = *%.d*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%0d = *%0d*\n", n);
	result_Ft = ft_printf("FT :%%0d = *%0d*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%5d = *%5d*\n", n);
	result_Ft = ft_printf("FT :%%5d = *%5d*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%+5d = *%+5d*\n", n);
	result_Ft = ft_printf("FT :%%+5d = *%+5d*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%-5d = *%-5d*\n", n);
	result_Ft = ft_printf("FT :%%-5d = *%-5d*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%.5d = *%.5d*\n", n);
	result_Ft = ft_printf("FT :%%.5d = *%.5d*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%-.5d = *%.5d*\n", n);
	result_Ft = ft_printf("FT :%%-.5d = *%.5d*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%.-5d = *%.5d*\n", n);
	result_Ft = ft_printf("FT :%%.-5d = *%.5d*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%+.5d = *%.5d*\n", n);
	result_Ft = ft_printf("FT :%%+.5d = *%.5d*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%.+5d = *%.5d*\n", n);
	result_Ft = ft_printf("FT :%%.+5d = *%.5d*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%#5d = *%#5d*\n", n);
	result_Ft = ft_printf("FT :%%#5d = *%#5d*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%% 5d = *% 5d*\n", n);
	result_Ft = ft_printf("FT :%% 5d = *% 5d*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%05d = *%05d*\n", n);
	result_Ft = ft_printf("FT :%%05d = *%05d*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%-05d = *%-05d*\n", n);
	result_Ft = ft_printf("FT :%%-05d = *%-05d*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%+05d = *%+05d*\n", n);
	result_Ft = ft_printf("FT :%%+05d = *%+05d*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%#05d = *%#05d*\n", n);
	result_Ft = ft_printf("FT :%%#05d = *%#05d*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%8.5d = *%8.5d*\n", n);
	result_Ft = ft_printf("FT :%%8.5d = *%8.5d*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%-8.5d = *%-8.5d*\n", n);
	result_Ft = ft_printf("FT :%%-8.5d = *%-8.5d*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%+8.5d = *%+8.5d*\n", n);
	result_Ft = ft_printf("FT :%%+8.5d = *%+8.5d*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%08.5d = *%08.5d*\n", n);
	result_Ft = ft_printf("FT :%%08.5d = *%08.5d*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%#8.5d = *%#8.5d*\n", n);
	result_Ft = ft_printf("FT :%%#8.5d = *%#8.5d*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%% 8.5d = *% 8.5d*\n", n);
	result_Ft = ft_printf("FT :%% 8.5d = *% 8.5d*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%% +8.5d = *% +8.5d*\n", n);
	result_Ft = ft_printf("FT :%% +8.5d = *% +8.5d*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%# 8.5d = *%# 8.5d*\n", n);
	result_Ft = ft_printf("FT :%%# 8.5d = *%# 8.5d*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%+-8.5d = *%+-8.5d*\n", n);
	result_Ft = ft_printf("FT :%%+-8.5d = *%+-8.5d*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%-+8.5d = *%-+8.5d*\n", n);
	result_Ft = ft_printf("FT :%%-+8.5d = *%-+8.5d*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%0.d = *%0.d*\n", n);
	result_Ft = ft_printf("FT :%%0.d = *%0.d*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%0.5d = *%0.5d*\n", n);
	result_Ft = ft_printf("FT :%%0.5d = *%0.5d*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%.-5d = *%.-5d*\n", n);
	result_Ft = ft_printf("FT :%%.-5d = *%.-5d*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%8.-5d = *%8.-5d*\n", n);
	result_Ft = ft_printf("FT :%%8.-5d = *%8.-5d*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);


	printf("  ---   ---   ---   ---\n  |-|   |-|   |-|   |-|\n  |-|   |-|   |-|   |-|\n ----- ----- ----- -----\n  ---   ---   ---   ---\n   -     -     -     -\n\n");
	printf("*   |||---   BONUS : %%i   ---|||   *\n\n\n");

	result_Or = printf("OR :%%i = *%i*\n", n);
	result_Ft = ft_printf("FT :%%i = *%i*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%+i = *%+i*\n", n);
	result_Ft = ft_printf("FT :%%+i = *%+i*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%-i = *%-i*\n", n);
	result_Ft = ft_printf("FT :%%-i = *%-i*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%% i = *% i*\n", n);
	result_Ft = ft_printf("FT :%% i = *% i*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%#i = *%#i*\n", n);
	result_Ft = ft_printf("FT :%%#i = *%#i*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%.i = *%.i*\n", n);
	result_Ft = ft_printf("FT :%%.i = *%.i*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%0d = *%0i*\n", n);
	result_Ft = ft_printf("FT :%%0i = *%0i*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%5i = *%5i*\n", n);
	result_Ft = ft_printf("FT :%%5i = *%5i*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%+5i = *%+5i*\n", n);
	result_Ft = ft_printf("FT :%%+5i = *%+5i*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%-5i = *%-5i*\n", n);
	result_Ft = ft_printf("FT :%%-5i = *%-5i*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%.5i = *%.5i*\n", n);
	result_Ft = ft_printf("FT :%%.5i = *%.5i*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%-.5i = *%.5i*\n", n);
	result_Ft = ft_printf("FT :%%-.5i = *%.5i*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%.-5i = *%.5i*\n", n);
	result_Ft = ft_printf("FT :%%.-5i = *%.5i*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%+.5i = *%.5i*\n", n);
	result_Ft = ft_printf("FT :%%+.5i = *%.5i*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%.+5i = *%.5i*\n", n);
	result_Ft = ft_printf("FT :%%.+5i = *%.5i*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%#5i = *%#5i*\n", n);
	result_Ft = ft_printf("FT :%%#5i = *%#5i*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%% 5i = *% 5i*\n", n);
	result_Ft = ft_printf("FT :%% 5i = *% 5i*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%05i = *%05i*\n", n);
	result_Ft = ft_printf("FT :%%05i = *%05i*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%-05i = *%-05i*\n", n);
	result_Ft = ft_printf("FT :%%-05i = *%-05i*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%+05i = *%+05i*\n", n);
	result_Ft = ft_printf("FT :%%+05i = *%+05i*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%#05i = *%#05i*\n", n);
	result_Ft = ft_printf("FT :%%#05i = *%#05i*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%8.5i = *%8.5i*\n", n);
	result_Ft = ft_printf("FT :%%8.5i = *%8.5i*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%-8.5i = *%-8.5i*\n", n);
	result_Ft = ft_printf("FT :%%-8.5i = *%-8.5i*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%+8.5i = *%+8.5i*\n", n);
	result_Ft = ft_printf("FT :%%+8.5i = *%+8.5i*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%08.5i = *%08.5i*\n", n);
	result_Ft = ft_printf("FT :%%08.5i = *%08.5i*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%#8.5i = *%#8.5i*\n", n);
	result_Ft = ft_printf("FT :%%#8.5i = *%#8.5i*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%% 8.5i = *% 8.5i*\n", n);
	result_Ft = ft_printf("FT :%% 8.5i = *% 8.5i*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%# 8.5i = *%# 8.5i*\n", n);
	result_Ft = ft_printf("FT :%%# 8.5i = *%# 8.5i*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%+-8.5i = *%+-8.5i*\n", n);
	result_Ft = ft_printf("FT :%%+-8.5i = *%+-8.5i*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%-+8.5i = *%-+8.5i*\n", n);
	result_Ft = ft_printf("FT :%%-+8.5i = *%-+8.5i*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%0.i = *%0.i*\n", n);
	result_Ft = ft_printf("FT :%%0.i = *%0.i*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%0.5i = *%0.5i*\n", n);
	result_Ft = ft_printf("FT :%%0.5i = *%0.5i*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%.-5i = *%.-5i*\n", n);
	result_Ft = ft_printf("FT :%%.-5i = *%.-5i*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%8.-5i = *%8.-5i*\n", n);
	result_Ft = ft_printf("FT :%%8.-5i = *%8.-5i*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);


	printf("  ---   ---   ---   ---\n  |-|   |-|   |-|   |-|\n  |-|   |-|   |-|   |-|\n ----- ----- ----- -----\n  ---   ---   ---   ---\n   -     -     -     -\n\n");
	printf("*   |||---   BONUS : %%p   ---|||   *\n\n\n");

	result_Or = printf("OR :%%2.1p = *%2.1p*\n", ptr);
	result_Ft = ft_printf("FT :%%2.1p = *%2.1p*\n", ptr);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%16p = *%16p*\n", ptr);
	result_Ft = ft_printf("FT :%%16p = *%16p*\n", ptr);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%-16p = *%-16p*\n", ptr);
	result_Ft = ft_printf("FT :%%-16p = *%-16p*\n", ptr);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%.17p = *%.17p*\n", ptr);
	result_Ft = ft_printf("FT :%%.17p = *%.17p*\n", ptr);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%-.23p = *%-.23p*\n", ptr);
	result_Ft = ft_printf("FT :%%-.23p = *%-.23p*\n", ptr);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%+p = *%+p*\n", ptr);
	result_Ft = ft_printf("FT :%%+p = *%+p*\n", ptr);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%% p = *% p*\n", ptr);
	result_Ft = ft_printf("FT :%% p = *% p*\n", ptr);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%% 19p = *% 19p*\n", ptr);
	result_Ft = ft_printf("FT :%% 19p = *% 19p*\n", ptr);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%019p = *%019p*\n", ptr);
	result_Ft = ft_printf("FT :%%019p = *%019p*\n", ptr);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%019.p = *%019.p*\n", ptr);
	result_Ft = ft_printf("FT :%%019.p = *%019.p*\n", ptr);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%30.19p = *%30.19p*\n", ptr);
	result_Ft = ft_printf("FT :%%30.19p = *%30.19p*\n", ptr);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%12.12p = *%12.12p*\n", ptr);
	result_Ft = ft_printf("FT :%%12.12p = *%12.12p*\n", ptr);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%12.19p = *%12.19p*\n", ptr);
	result_Ft = ft_printf("FT :%%12.19p = *%12.19p*\n", ptr);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%-32.21p = *%-30.21p*\n", ptr);
	result_Ft = ft_printf("FT :%%-32.21p = *%-30.21p*\n", ptr);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%-12.12p = *%-12.12p*\n", ptr);
	result_Ft = ft_printf("FT :%%-12.12p = *%-12.12p*\n", ptr);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%30.14p = *%30.14p*\n", ptr);
	result_Ft = ft_printf("FT :%%30.14p = *%30.14p*\n", ptr);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);


	result_Or = printf("OR :%%-30.8p = *%-30.8p*\n", ptr);
	result_Ft = ft_printf("FT :%%-30.8p = *%-30.8p*\n", ptr);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%-12.19p = *%-12.19p*\n", ptr);
	result_Ft = ft_printf("FT :%%-12.19p = *%-12.19p*\n", ptr);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	for (size_t i = 0; i < num_pointers; i++) 
	{
		result_Or = printf("OR :%%p = *%p*\n", pointers[i]);
		result_Ft = ft_printf("FT :%%p = *%p*\n", pointers[i]);
		printf("result Or = %d\n", result_Or);
		printf("result Ft = %d\n\n", result_Ft);
	}


	printf("  ---   ---   ---   ---\n  |-|   |-|   |-|   |-|\n  |-|   |-|   |-|   |-|\n ----- ----- ----- -----\n  ---   ---   ---   ---\n   -     -     -     -\n\n");
	printf("*   |||---   BONUS : %%s   ---|||   *\n\n\n");

	result_Or = printf("Or :%%s: *%s*\n", str);
	result_Ft = ft_printf("Ft :%%s: *%s*\n", str);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("Or :%%19s: *%19s*\n", str);
	result_Ft = ft_printf("Ft :%%19s: *%19s*\n", str);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("Or :%%.5s: *%.5s*\n", str);
	result_Ft = ft_printf("Ft :%%.5s: *%.5s*\n", str);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("Or :%%10.5s: *%10.5s*\n", str);
	result_Ft = ft_printf("Ft :%%10.5s: *%10.5s*\n", str);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("Or :%%-19s: *%-19s*\n", str);
	result_Ft = ft_printf("Ft :%%-19s: *%-19s*\n", str);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("Or :%%-10.5s: *%-10.5s*\n", str);
	result_Ft = ft_printf("Ft :%%-10.5s: *%-10.5s*\n", str);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);


	printf("  ---   ---   ---   ---\n  |-|   |-|   |-|   |-|\n  |-|   |-|   |-|   |-|\n ----- ----- ----- -----\n  ---   ---   ---   ---\n   -     -     -     -\n\n");
	printf("*   |||---   BONUS : %%c   ---|||   *\n\n\n");

	result_Ft = ft_printf("FT :%%c = *%c*\n", lettre);
	result_Or = printf("OR :%%c = *%c*\n", lettre);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Ft = ft_printf("FT :%%5c = *%5c*\n", lettre);
	result_Or = printf("OR :%%5c = *%5c*\n", lettre);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Ft = ft_printf("FT :%%-5c = *%-5c*\n", lettre);
	result_Or = printf("OR :%%-5c = *%-5c*\n", lettre);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Ft = ft_printf("FT :%%0c = *%0c*\n", lettre);
	result_Or = printf("OR :%%0c = *%0c*\n", lettre);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Ft = ft_printf("FT :%%.c = *%.c*\n", lettre);
	result_Or = printf("OR :%%.c = *%.c*\n", lettre);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Ft = ft_printf("FT :%%5.3c = *%5.3c*\n", lettre);
	result_Or = printf("OR :%%5.3c = *%5.3c*\n", lettre);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Ft = ft_printf("FT :%%+c = *%+c*\n", lettre);
	result_Or = printf("OR :%%+c = *%+c*\n", lettre);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Ft = ft_printf("FT :%% c = *% c*\n", lettre);
	result_Or = printf("OR :%% c = *% c*\n", lettre);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Ft = ft_printf("FT :%%#c = *%#c*\n", lettre);
	result_Or = printf("OR :%%#c = *%#c*\n", lettre);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Ft = ft_printf("FT :%%-0c = *%-0c*\n", lettre);
	result_Or = printf("OR :%%-0c = *%-0c*\n", lettre);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Ft = ft_printf("FT :%%+-# 05.c = *%+-# 05.c*\n",lettre);
	result_Or = printf("OR :%%+-# 05.c = *%+-# 05.c*\n",lettre);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
	   

	printf("\n\n  ---   ---   ---   ---\n  |-|   |-|   |-|   |-|\n  |-|   |-|   |-|   |-|\n ----- ----- ----- -----\n  ---   ---   ---   ---\n   -     -     -     -\n\n");
	printf("*   |||---   OBLIGATOIRE   ---|||   *\n\n\n");

	result_Or = printf("OR :%%p = *%p*\n", null_ptr);
	result_Ft = ft_printf("FT :%%p = *%p*\n", null_ptr);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%c = *%c*\n", lettre);
	result_Ft = ft_printf("FT :%%c = *%c*\n", lettre);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%s = *%s*\n", str);
	result_Ft = ft_printf("FT :%%s = *%s*\n", str);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%p = *%p*\n", ptr);
	result_Ft = ft_printf("FT :%%p = *%p*\n", ptr);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%d = *%d*\n", 42);
	result_Ft = ft_printf("FT :%%d = *%d*\n", 42);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%i = *%i*\n", -42);
	result_Ft = ft_printf("FT :%%i = *%i*\n", -42);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%u = *%u*\n", 42u);
	result_Ft = ft_printf("FT :%%u = *%u*\n", 42u);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%u = *%u*\n", 4294967295u);
	result_Ft = ft_printf("FT :%%u = *%u*\n", 4294967295u);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%x = *%x*\n", 42);
	result_Ft = ft_printf("FT :%%x = *%x*\n", 42);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%X = *%X*\n", 42);
	result_Ft = ft_printf("FT :%%X = *%X*\n", 42);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%%% = *%%*\n");
	result_Ft = ft_printf("FT :%%%% = *%%*\n");
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%c = *%c*\n");
	result_Ft = ft_printf("FT :%%c = *%c*\n");
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("");
	result_Ft = ft_printf("");
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("", lettre);
	result_Ft = ft_printf("", lettre);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);*/
	}