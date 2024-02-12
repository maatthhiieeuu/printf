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
	int x = 0;
	unsigned int u = 0u;
	int n = INT_MIN;
	char *ptr = (void *)LONG_MIN;
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
	char lettre = 'n';
	char *null_ptr = NULL;
	char phrase[] = "la coccinelle de 3cm était toute petite, mais fortE courageusE devant des punaise à peine plus grande qu'elle. C'est pourquoi elle n'avait pas peur de grimper pour chercher les pucerons qui était à sa portée.";
	int max = 0;

	
		
/*

	printf("   _     _     _     _ \n  |-|   |-|   |-|   |-|\n  |-|   |-|   |-|   |-|\n ----- ----- ----- -----\n  ---   ---   ---   ---\n   -     -     -     -\n\n");
	printf("*   |||---   BONUS : %%X   ---|||   *\n\n\n");

	result_Or = printf("OR :%%X = *%X*\n", x);
	result_Ft = ft_printf("FT :%%X = *%X*\n", x);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%-X = *%-X*\n", x);
	result_Ft = ft_printf("FT :%%-X = *%-X*\n", x);
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

	result_Or = printf("OR :%%05X = *%05X*\n", x);
	result_Ft = ft_printf("FT :%%05X = *%05X*\n", x);
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

	result_Or = printf("OR :%%#8.5X = *%#8.5X*\n", x);
	result_Ft = ft_printf("FT :%%#8.5X = *%#8.5X*\n", x);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%#8.5X, %%-8.5X, %%8.5X = *%#8.5X*, *%-8.5X*, *%8.5X*\n", x, NULL, 9000);
	result_Ft = ft_printf("FT :%%#8.5X, %%-8.5X, %%8.5X = *%#8.5X*, *%-8.5X*, *%8.5X*\n", x, NULL, 9000);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);


	printf("  ---   ---   ---   ---\n  |-|   |-|   |-|   |-|\n  |-|   |-|   |-|   |-|\n ----- ----- ----- -----\n  ---   ---   ---   ---\n   -     -     -     -\n\n");
	printf("*   |||---   BONUS : %%x   ---|||   *\n\n\n");

	result_Or = printf("OR :%%x = *%x*\n", x);
	result_Ft = ft_printf("FT :%%x = *%x*\n", x);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%-x = *%-x*\n", x);
	result_Ft = ft_printf("FT :%%-x = *%-x*\n", x);
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

	result_Or = printf("OR :%%05x = *%05x*\n", x);
	result_Ft = ft_printf("FT :%%05x = *%05x*\n", x);
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

	result_Or = printf("OR :%%#8.5x = *%#8.5x*\n", x);
	result_Ft = ft_printf("FT :%%#8.5x = *%#8.5x*\n", x);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%#8.5x, %%-8.5x, %%8.5x = *%#8.5x*, *%-8.5x*, *%8.5x*\n", x, NULL, 9000);
	result_Ft = ft_printf("FT :%%#8.5x, %%-8.5x, %%8.5x = *%#8.5x*, *%-8.5x*, *%8.5x*\n", x, NULL, 9000);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	printf("  ---   ---   ---   ---\n  |-|   |-|   |-|   |-|\n  |-|   |-|   |-|   |-|\n ----- ----- ----- -----\n  ---   ---   ---   ---\n   -     -     -     -\n\n");
	printf("*   |||---   BONUS : %%u   ---|||   *\n\n\n");

	result_Or = printf("OR :%%u = *%u*\n", u);
	result_Ft = ft_printf("FT :%%u = *%u*\n", u);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%-u = *%-u*\n", u);
	result_Ft = ft_printf("FT :%%-u = *%-u*\n", u);
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

	result_Or = printf("OR :%%05u = *%05u*\n", u);
	result_Ft = ft_printf("FT :%%05u = *%05u*\n", u);
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

	result_Or = printf("OR :%%u, %%-8.5u, %%8.5u = *%u*, *%-8.5u*, *%8.5u*\n", u, u, u);
	result_Ft = ft_printf("FT :%%u, %%-8.5u, %%8.5u = *%u*, *%-8.5u*, *%8.5u*\n", u, u, u);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	printf("  ---   ---   ---   ---\n  |-|   |-|   |-|   |-|\n  |-|   |-|   |-|   |-|\n ----- ----- ----- -----\n  ---   ---   ---   ---\n   -     -     -     -\n\n");
	printf("*   |||---   BONUS : %%d   ---|||   *\n\n\n");

	result_Or = printf("OR :%%d = *%d*\n", n);
	result_Ft = ft_printf("FT :%%d = *%d*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

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

	result_Or = printf("OR :%% 5d = *% 5d*\n", n);
	result_Ft = ft_printf("FT :%% 5d = *% 5d*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%05d = *%05d*\n", n);
	result_Ft = ft_printf("FT :%%05d = *%05d*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%+05d = *%+05d*\n", n);
	result_Ft = ft_printf("FT :%%+05d = *%+05d*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%8.5d = *%8.5d*\n", n);
	result_Ft = ft_printf("FT :%%8.5d = *%8.5d*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%-8.5d = *%-8.5d*\n", n);
	result_Ft = ft_printf("FT :%%-8.5d //= *%-8.5d*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%+8.5d = *%+8.5d*\n", n);
	result_Ft = ft_printf("FT :%%+8.5d = *%+8.5d*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%% 8.5d = *% 8.5d*\n", n);
	result_Ft = ft_printf("FT :%% 8.5d = *% 8.5d*\n", n);
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

	result_Or = printf("OR :%%d, %%+d, %%-d, %% d, %%.d, %%0d, %%15d, %%+15d, %%-15d, %%.15d,  = *%d*, *%+d*, *%-d*, *% d*, *%.d*, *%0d*, *%15d*, *%+15d, *%-15d*, %.15d\n", n, n, n, n, n, n, n, n, n, n);
	result_Ft = ft_printf("FT :%%d, %%+d, %%-d, %% d, %%.d, %%0d, %%15d, %%+15d, %%-15d, %%.15d,  = *%d*, *%+d*, *%-d*, *% d*, *%.d*, *%0d*, *%15d*, *%+15d, *%-15d*, %.15d\n", n, n, n, n, n, n, n, n, n, n);
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

	result_Or = printf("OR :%%.i = *%.i*\n", n);
	result_Ft = ft_printf("FT :%%.i = *%.i*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%0d = *%0i*\n", n);
	result_Ft = ft_printf("FT :%%0i = *%0i*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%15i = *%15i*\n", n);
	result_Ft = ft_printf("FT :%%15i = *%15i*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%+15i = *%+15i*\n", n);
	result_Ft = ft_printf("FT :%%+15i = *%+15i*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%-15i = *%-15i*\n", n);
	result_Ft = ft_printf("FT :%%-15i = *%-15i*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%.15i = *%.15i*\n", n);
	result_Ft = ft_printf("FT :%%.15i = *%.15i*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%-.15i = *%.15i*\n", n);
	result_Ft = ft_printf("FT :%%-.15i = *%.15i*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%.-15i = *%.15i*\n", n);
	result_Ft = ft_printf("FT :%%.-15i = *%.15i*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%+.15i = *%.15i*\n", n);
	result_Ft = ft_printf("FT :%%+.15i = *%.15i*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%.+15i = *%.15i*\n", n);
	result_Ft = ft_printf("FT :%%.+15i = *%.15i*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%% 15i = *% 15i*\n", n);
	result_Ft = ft_printf("FT :%% 15i = *% 15i*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%015i = *%015i*\n", n);
	result_Ft = ft_printf("FT :%%015i = *%015i*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%+015i = *%+015i*\n", n);
	result_Ft = ft_printf("FT :%%+015i = *%+015i*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%18.15i = *%18.5i*\n", n);
	result_Ft = ft_printf("FT :%%18.15i = *%18.5i*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%-18.5i = *%-18.5i*\n", n);
	result_Ft = ft_printf("FT :%%-18.5i = *%-18.5i*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%+18.5i = *%+18.5i*\n", n);
	result_Ft = ft_printf("FT :%%+18.5i = *%+18.5i*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%% 18.5i = *% 18.5i*\n", n);
	result_Ft = ft_printf("FT :%% 18.5i = *% 18.5i*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%+-18.5i = *%+-18.5i*\n", n);
	result_Ft = ft_printf("FT :%%+-18.5i = *%+-18.5i*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%-+18.5i = *%-+18.5i*\n", n);
	result_Ft = ft_printf("FT :%%-+18.5i = *%-+18.5i*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);


	result_Or = printf("OR :%%i, %%+i, %%-i, %% i, %%.i, %%0i, %%15i, %%+15i, %%-15i, %%.15i,  = *%i*, *%+i*, *%-i*, *% i*, *%.i*, *%0i*, *%15i*, *%+15i, *%-15i*, %.15i\n", n, n, n, n, n, n, n, n, n, n);
	result_Ft = ft_printf("FT :%%i, %%+i, %%-i, %% i, %%.i, %%0i, %%15i, %%+15i, %%-15i, %%.15i,  = *%i*, *%+i*, *%-i*, *% i*, *%.i*, *%0i*, *%15i*, *%+15i, *%-15i*, %.15i\n", n, n, n, n, n, n, n, n, n, n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);


	printf("  ---   ---   ---   ---\n  |-|   |-|   |-|   |-|\n  |-|   |-|   |-|   |-|\n ----- ----- ----- -----\n  ---   ---   ---   ---\n   -     -     -     -\n\n");
	printf("*   |||---   BONUS : %%p   ---|||   *\n\n\n");


	result_Or = printf("OR :%%16p = *%16p*\n", ptr);
	result_Ft = ft_printf("FT :%%16p = *%16p*\n", ptr);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%-16p = *%-16p*\n", ptr);
	result_Ft = ft_printf("FT :%%-16p = *%-16p*\n", ptr);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%16p, %%-16p = *%16p*, *%-16p*\n", ptr, ptr);
	result_Ft = ft_printf("FT :%%16p = *%16p*\n", ptr);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	for (size_t i = 0; i < num_pointers; i++) 
	{
		result_Or = printf("OR :%%p = *%p*\n", pointers[i]);
		result_Ft = ft_printf("FT :%%p = *%p*\n", pointers[i]);
		printf("result Or = %d\n", result_Or);
		printf("result Ft = %d\n\n", result_Ft);
	}

*/
	printf("  ---   ---   ---   ---\n  |-|   |-|   |-|   |-|\n  |-|   |-|   |-|   |-|\n ----- ----- ----- -----\n  ---   ---   ---   ---\n   -     -     -     -\n\n");
	printf("*   |||---   BONUS : %%s   ---|||   *\n\n\n");

	result_Or = printf("Or :%%s: *%s*\n", str);
	result_Ft = ft_printf("Ft :%%s: *%s*\n", str);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("Or :%%23s: *%23s*\n", "La petite fleur bleue.");
	result_Ft = ft_printf("Ft :%%23s: *%23s*\n", "La petite fleur bleue.");
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

	result_Or = printf("Or :%%s = *%s*, %%23s = *%23s*, %%.5s = *%.5s*, %%10.5s = *%10.5s*, %%-23s = *%-23s*, %%-10.5s = *%-10.5s*\n", "La petite fleur bleue.", "La petite fleur bleue.", "La petite fleur bleue.", "La petite fleur bleue.", "La petite fleur bleue.", "La petite fleur bleue.");
	result_Ft = ft_printf("Ft :%%s = *%s*, %%23s = *%23s*, %%.5s = *%.5s*, %%10.5s = *%10.5s*, %%-23s = *%-23s*, %%-10.5s = *%-10.5s*\n", "La petite fleur bleue.", "La petite fleur bleue.", "La petite fleur bleue.", "La petite fleur bleue.", "La petite fleur bleue.", "La petite fleur bleue.");
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
/*
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

	result_Ft = ft_printf("FT :%%c, %%5c, %%-5c = *%c*, *%5c*, *%-5c*\n", ' ', lettre, 'A');
	result_Or = printf("OR :%%c, %%5c, %%-5c = *%c*, *%5c*, *%-5c*\n", ' ', lettre, 'A');
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
	*//*   

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

	printf("\n\n  ---   ---   ---   ---\n  |-|   |-|   |-|   |-|\n  |-|   |-|   |-|   |-|\n ----- ----- ----- -----\n  ---   ---   ---   ---\n   -     -     -     -\n\n");
	printf("*   |||---   OBLIGATOIRE correction  ---|||   *\n\n\n");


	result_Or = printf("OR :%%d = *%d*\n", 0);
	result_Ft = ft_printf("FT :%%d = *%d*\n", 0);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%i = *%i*\n", 0);
	result_Ft = ft_printf("FT :%%i = *%i*\n", 0);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%u = *%u*\n", 0u);
	result_Ft = ft_printf("FT :%%u = *%u*\n", 0u);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%X = *%X*\n", 0);
	result_Ft = ft_printf("FT :%%X = *%X*\n", 0);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%s = *%s*\n", "");
	result_Ft = ft_printf("FT :%%s = *%s*\n", "");
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%p = *%p*\n", NULL);
	result_Ft = ft_printf("FT :%%p = *%p*\n", NULL);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%d, %%i, %%u, %%X, %%s, %%p = *%d*, *%i*, *%u*, *%X*, *%s*, *%p*\n", 0, 0, 0u, 0, "", NULL);
	result_Ft = ft_printf("FT :%%d, %%i, %%u, %%X, %%s, %%p = *%d*, *%i*, *%u*, *%X*, *%s*, *%p*\n", 0, 0, 0u, 0, "", NULL);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%d, %%d, %%d, %%d, %%d, %%d = *%d*, *%d*, *%d*, *%d*, *%d*, *%d*\n", 0, 0, 0, 0, 0, 0);
	result_Ft = ft_printf("FT :%%d, %%d, %%d, %%d, %%d, %%d = *%d*, *%d*, *%d*, *%d*, *%d*, *%d*\n", 0, 0, 0, 0, 0, 0);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%i, %%i, %%i, %%i, %%i, %%i = *%i*, *%i*, *%i*, *%i*, *%i*, *%i*\n", 0, 0, 0, 0, 0, 0);
	result_Ft = ft_printf("FT :%%i, %%i, %%i, %%i, %%i, %%i = *%i*, *%i*, *%i*, *%i*, *%i*, *%i*\n", 0, 0, 0, 0, 0, 0);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%u, %%u, %%u, %%u, %%u, %%u = *%u*, *%u*, *%u*, *%u*, *%u*, *%u*\n", 0u, 0u, 0u, 0u, 0u, 0u);
	result_Ft = ft_printf("FT :%%u, %%u, %%u, %%u, %%u, %%u = *%u*, *%u*, *%u*, *%u*, *%u*, *%u*\n", 0u, 0u, 0u, 0u, 0u, 0u);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%x, %%x, %%x, %%x, %%x, %%x = *%x*, *%x*, *%x*, *%x*, *%x*, *%x*\n", 0, 0, 0, 0, 0, 0);
	result_Ft = ft_printf("FT :%%x, %%x, %%x, %%x, %%x, %%x = *%x*, *%x*, *%x*, *%x*, *%x*, *%x*\n", 0, 0, 0, 0, 0, 0);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%X, %%X, %%X, %%X, %%X, %%X = *%X*, *%X*, *%X*, *%X*, *%X*, *%X*\n", 0, 0, 0, 0, 0, 0);
	result_Ft = ft_printf("FT :%%X, %%X, %%X, %%X, %%X, %%X = *%X*, *%X*, *%X*, *%X*, *%X*, *%X*\n", 0, 0, 0, 0, 0, 0);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%p, %%p, %%p, %%p, %%p, %%p = *%p*, *%p*, *%p*, *%p*, *%p*, *%p*\n", NULL, NULL, NULL, NULL, NULL, NULL);
	result_Ft = ft_printf("FT :%%p, %%p, %%p, %%p, %%p, %%p = *%p*, *%p*, *%p*, *%p*, *%p*, *%p*\n", NULL, NULL, NULL, NULL, NULL, NULL);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%s, %%s, %%s, %%s, %%s, %%s = *%s*, *%s*, *%s*, *%s*, *%s*, *%s*\n", "", "", "", "", "", "");
	result_Ft = ft_printf("FT :%%s, %%s, %%s, %%s, %%s, %%s = *%s*, *%s*, *%s*, *%s*, *%s*, *%s*\n", "", "", "", "", "", "");
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%d = *%d*\n", INT_MIN);
	result_Ft = ft_printf("FT :%%d = *%d*\n", INT_MIN);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%i = *%i*\n", INT_MIN);
	result_Ft = ft_printf("FT :%%i = *%i*\n", INT_MIN);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%u = *%u*\n", UINT_MAX);
	result_Ft = ft_printf("FT :%%u = *%u*\n", UINT_MAX);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%X = *%X*\n", INT_MIN);
	result_Ft = ft_printf("FT :%%X = *%X*\n", INT_MIN);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%x = *%x*\n", INT_MAX);
	result_Ft = ft_printf("FT :%%x = *%x*\n", INT_MAX);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%s = *%s*\n", "JVBFJADVBFJDAVBPJFDAPBVJFDKAVBJFDKBVJFDKBVJFDKBVFJDBVJFDBVJFDBVJFDBVJFDBVJFDVBJFDBVJFDBVJFDBVJFDABVUJREIPGHUREGHTBVHGFBVJFKDNAVJDPHFURHBVFDJKVJFDAHPUFRIPEHGFBNVJKFDNZJHEUGHFSBVJFKDNVJDO[HAGURFHBFVJSDVNJDKAVNIOEPHGUFBVJKBVNDZJKVNDKASHGURIEBGHVFSD NK;NCZJKV;NDKHGJFDBSVJNKFDV;FMDKSOJGIRSPHGJBLSFNVKDNEWJPNJEWBFJDKSNBJVDPSBJF");
	result_Ft = ft_printf("FT :%%s = *%s*\n", "JVBFJADVBFJDAVBPJFDAPBVJFDKAVBJFDKBVJFDKBVJFDKBVFJDBVJFDBVJFDBVJFDBVJFDBVJFDVBJFDBVJFDBVJFDBVJFDABVUJREIPGHUREGHTBVHGFBVJFKDNAVJDPHFURHBVFDJKVJFDAHPUFRIPEHGFBNVJKFDNZJHEUGHFSBVJFKDNVJDO[HAGURFHBFVJSDVNJDKAVNIOEPHGUFBVJKBVNDZJKVNDKASHGURIEBGHVFSD NK;NCZJKV;NDKHGJFDBSVJNKFDV;FMDKSOJGIRSPHGJBLSFNVKDNEWJPNJEWBFJDKSNBJVDPSBJF");
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%p = *%p*\n", ULONG_MAX);
	result_Ft = ft_printf("FT :%%p = *%p*\n", ULONG_MAX);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%d, %%i, %%u, %%X, %%s, %%p = *%d*, *%i*, *%u*, *%X*, *%s*, *%p*\n", 0, 0, 0u, 0, "", NULL);
	result_Ft = ft_printf("FT :%%d, %%i, %%u, %%X, %%s, %%p = *%d*, *%i*, *%u*, *%X*, *%s*, *%p*\n", 0, 0, 0u, 0, "", NULL);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%d, %%d, %%d, %%d, %%d, %%d = *%d*, *%d*, *%d*, *%d*, *%d*, *%d*\n", 0, 0, 0, 0, 0, 0);
	result_Ft = ft_printf("FT :%%d, %%d, %%d, %%d, %%d, %%d = *%d*, *%d*, *%d*, *%d*, *%d*, *%d*\n", 0, 0, 0, 0, 0, 0);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%i, %%i, %%i, %%i, %%i, %%i = *%i*, *%i*, *%i*, *%i*, *%i*, *%i*\n", 0, 0, 0, 0, 0, 0);
	result_Ft = ft_printf("FT :%%i, %%i, %%i, %%i, %%i, %%i = *%i*, *%i*, *%i*, *%i*, *%i*, *%i*\n", 0, 0, 0, 0, 0, 0);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%u, %%u, %%u, %%u, %%u, %%u = *%u*, *%u*, *%u*, *%u*, *%u*, *%u*\n", 0u, 0u, 0u, 0u, 0u, 0u);
	result_Ft = ft_printf("FT :%%u, %%u, %%u, %%u, %%u, %%u = *%u*, *%u*, *%u*, *%u*, *%u*, *%u*\n", 0u, 0u, 0u, 0u, 0u, 0u);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%x, %%x, %%x, %%x, %%x, %%x = *%x*, *%x*, *%x*, *%x*, *%x*, *%x*\n", 0, 0, 0, 0, 0, 0);
	result_Ft = ft_printf("FT :%%x, %%x, %%x, %%x, %%x, %%x = *%x*, *%x*, *%x*, *%x*, *%x*, *%x*\n", 0, 0, 0, 0, 0, 0);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%X, %%X, %%X, %%X, %%X, %%X = *%X*, *%X*, *%X*, *%X*, *%X*, *%X*\n", 0, 0, 0, 0, 0, 0);
	result_Ft = ft_printf("FT :%%X, %%X, %%X, %%X, %%X, %%X = *%X*, *%X*, *%X*, *%X*, *%X*, *%X*\n", 0, 0, 0, 0, 0, 0);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%p, %%p, %%p, %%p, %%p, %%p = *%p*, *%p*, *%p*, *%p*, *%p*, *%p*\n", NULL, NULL, NULL, NULL, NULL, NULL);
	result_Ft = ft_printf("FT :%%p, %%p, %%p, %%p, %%p, %%p = *%p*, *%p*, *%p*, *%p*, *%p*, *%p*\n", NULL, NULL, NULL, NULL, NULL, NULL);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

	result_Or = printf("OR :%%s, %%s, %%s, %%s, %%s, %%s = *%s*, *%s*, *%s*, *%s*, *%s*, *%s*\n", "", "", "", "", "", "");
	result_Ft = ft_printf("FT :%%s, %%s, %%s, %%s, %%s, %%s = *%s*, *%s*, *%s*, *%s*, *%s*, *%s*\n", "", "", "", "", "", "");
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
*/

	}



//Or :%s, %19s, %.5s, %10.5s, %-19s, %-10.5s: *la coccinelle de 3cm était toute petite, mais fort courageus devant des punaise à peine plus grande qu'elle. C'est pourquoi elle n'avait pas peur de grimper pour chercher les pucerons qui était à sa portée.*, *la coccinelle de 3cm était toute petite, mais fort courageus devant des punaise à peine plus grande qu'elle. C'est pourquoi elle n'avait pas peur de grimper pour chercher les pucerons qui était à sa portée.*, *la co*, *     la co*, *la coccinelle de 3cm était toute petite, mais fort courageus devant des punaise à peine plus grande qu'elle. C'est pourquoi elle n'avait pas peur de grimper pour chercher les pucerons qui était à sa portée.*, *la co     *
//Ft :%s, %19s, %.5s, %10.5s, %-19s, %-10.5s: *la coccinelle de 3cm était toute petite, mais fort courageus devant des punaise à peine plus grande qu'elle. C'est pourquoi elle n'avait pas peur de grimper pour chercher les pucerons qui était à sa portée.*, *              la co*, *la co*, *     la co*, *la co              *, *la co     *
