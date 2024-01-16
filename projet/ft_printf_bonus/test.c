#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include "libft/libft.h"
#include "printf/ft_printf.h"

int main(void)
{
    int x = 1234567891;
    int var1 = 42;
    int n = 32;
    int u = 32;
    char var2 = 'A';
    float var3 = 3.14f;
    double var4 = 6.28;
    int array[5] = {1, 2, 3, 4, 5};
    char *str = "Hello, world!";
    char lettre = 'A';
    char *ptr = &lettre;
    char phrase[] = "la coccinelle de 3cm";
    char *null_ptr = NULL;


  printf("OR :%%X = *%X*\n", x);
  ft_printf("FT :%%X = *%X*\n\n", x);
  //printf("OR :%%+X = *%+X*\n", x);
  ft_printf("FT :%%+X = *%+X*\n\n", x);
  printf("OR :%%-X = *%-X*\n", x);
  ft_printf("FT :%%-X = *%-X*\n\n", x);
  //printf("OR :%% X = *% X*\n", x);
  ft_printf("FT :%% X = *% X*\n\n", x);
  printf("OR :%%#X = *%#X*\n", x);
  ft_printf("FT :%%#X = *%#X*\n\n", x);
  printf("OR :%%.X = *%.X*\n", x);
  ft_printf("FT :%%.X = *%.X*\n\n", x);
  printf("OR :%%0X = *%0X*\n", x);
  ft_printf("FT :%%0X = *%0X*\n\n", x);
  printf("OR :%%5X = *%5X*\n", x);
  ft_printf("FT :%%5X = *%5X*\n\n", x);
  //printf("OR :%%+5X = *%+5X*\n", x);
  ft_printf("FT :%%+5X = *%+5X*\n\n", x);
  printf("OR :%%-5X = *%-5X*\n", x);
  ft_printf("FT :%%-5X = *%-5X*\n\n", x);
  printf("OR :%%.5X = *%.5X*\n", x);
  ft_printf("FT :%%.5X = *%.5X*\n\n", x);
  printf("OR :%%-.5X = *%.5X*\n", x);
  ft_printf("FT :%%-.5X = *%.5X*\n\n", x);
  printf("OR :%%.-5X = *%.5X*\n", x);
  ft_printf("FT :%%.-5X = *%.5X*\n\n", x);
  printf("OR :%%+.5X = *%.5X*\n", x);
  ft_printf("FT :%%+.5X = *%.5X*\n\n", x);
  printf("OR :%%.+5X = *%.5X*\n", x);
  ft_printf("FT :%%.+5X = *%.5X*\n\n", x);
  printf("OR :%%#5X = *%#5X*\n", x);
  ft_printf("FT :%%#5X = *%#5X*\n\n", x);
  //printf("OR :%% 5X = *% 5X*\n", x);
  ft_printf("FT :%% 5X = *% 5X*\n\n", x);
  printf("OR :%%05X = *%05X*\n", x);
  ft_printf("FT :%%05X = *%05X*\n\n", x);
  //printf("OR :%%-05X = *%-05X*\n", x);
  ft_printf("FT :%%-05X = *%-05X*\n\n", x);
  //printf("OR :%%+05X = *%+05X*\n", x);
  ft_printf("FT :%%+05X = *%+05X*\n\n", x);
  printf("OR :%%#05X = *%#05X*\n", x);
  ft_printf("FT :%%#05X = *%#05X*\n\n", x);
  printf("OR :%%8.5X = *%8.5X*\n", x);
  ft_printf("FT :%%8.5X = *%8.5X*\n\n", x);
  printf("OR :%%-8.5X = *%-8.5X*\n", x);
  ft_printf("FT :%%-8.5X = *%-8.5X*\n\n", x);
  //printf("OR :%%+8.5X = *%+8.5X*\n", x);
  ft_printf("FT :%%+8.5X = *%+8.5X*\n\n", x);
  //printf("OR :%%08.5X = *%08.5X*\n", x);
  ft_printf("FT :%%08.5X = *%08.5X*\n\n", x);
  printf("OR :%%#8.5X = *%#8.5X*\n", x);
  ft_printf("FT :%%#8.5X = *%#8.5X*\n\n", x);
  //printf("OR :%% 8.5X = *% 8.5X*\n", x);
  ft_printf("FT :%% 8.5X = *% 8.5X*\n\n", x);
  //printf("OR :%%# 8.5X = *%# 8.5X*\n", x);
  ft_printf("FT :%%# 8.5X = *%# 8.5X*\n\n", x);
  //printf("OR :%%+-8.5X = *%+-8.5X*\n", x);
  ft_printf("FT :%%+-8.5X = *%+-8.5X*\n\n", x);
  //printf("OR :%%-+8.5X = *%-+8.5X*\n", x);
  ft_printf("FT :%%-+8.5X = *%-+8.5X*\n\n", x);
  //printf("OR :%%0.X = *%0.X*\n", x);
  ft_printf("FT :%%0.X = *%0.X*\n\n", x);
  //printf("OR :%%0.5X = *%0.5X*\n", x);
  ft_printf("FT :%%0.5X = *%0.5X*\n\n", x);
  //printf("OR :%%.-5X = *%.-5X*\n", x);
  ft_printf("FT :%%.-5X = *%.-5X*\n\n", x);
  //printf("OR :%%8.-5X = *%8.-5X*\n", x);
  ft_printf("FT :%%8.-5X = *%8.-5X*\n\n", x);
    
    
/*-------------------------------------------------------*/
/*|                                                     |*/
/*|                   FT_PRINTF BONUS                   |*/
/*|                                                     |*/
/*-------------------------------------------------------*/





  printf("OR :%%x = *%x*\n", x);
  ft_printf("FT :%%x = *%x*\n\n", x);
  //printf("OR :%%+x = *%+x*\n", x);
  ft_printf("FT :%%+x = *%+x*\n\n", x);
  printf("OR :%%-x = *%-x*\n", x);
  ft_printf("FT :%%-x = *%-x*\n\n", x);
  //printf("OR :%% x = *% x*\n", x);
  ft_printf("FT :%% x = *% x*\n\n", x);
  printf("OR :%%#x = *%#x*\n", x);
  ft_printf("FT :%%#x = *%#x*\n\n", x);
  printf("OR :%%.x = *%.x*\n", x);
  ft_printf("FT :%%.x = *%.x*\n\n", x);
  printf("OR :%%0x = *%0x*\n", x);
  ft_printf("FT :%%0x = *%0x*\n\n", x);
  printf("OR :%%5x = *%5x*\n", x);
  ft_printf("FT :%%5x = *%5x*\n\n", x);
  //printf("OR :%%+5x = *%+5x*\n", x);
  ft_printf("FT :%%+5x = *%+5x*\n\n", x);
  printf("OR :%%-5x = *%-5x*\n", x);
  ft_printf("FT :%%-5x = *%-5x*\n\n", x);
  printf("OR :%%.5x = *%.5x*\n", x);
  ft_printf("FT :%%.5x = *%.5x*\n\n", x);
  printf("OR :%%-.5x = *%.5x*\n", x);
  ft_printf("FT :%%-.5x = *%.5x*\n\n", x);
  printf("OR :%%.-5x = *%.5x*\n", x);
  ft_printf("FT :%%.-5x = *%.5x*\n\n", x);
  printf("OR :%%+.5x = *%.5x*\n", x);
  ft_printf("FT :%%+.5x = *%.5x*\n\n", x);
  printf("OR :%%.+5x = *%.5x*\n", x);
  ft_printf("FT :%%.+5x = *%.5x*\n\n", x);
  printf("OR :%%#5x = *%#5x*\n", x);
  ft_printf("FT :%%#5x = *%#5x*\n\n", x);
  //printf("OR :%% 5x = *% 5x*\n", x);
  ft_printf("FT :%% 5x = *% 5x*\n\n", x);
  printf("OR :%%05x = *%05x*\n", x);
  ft_printf("FT :%%05x = *%05x*\n\n", x);
  //printf("OR :%%-05x = *%-05x*\n", x);
  ft_printf("FT :%%-05x = *%-05x*\n\n", x);
  //printf("OR :%%+05x = *%+05x*\n", x);
  ft_printf("FT :%%+05x = *%+05x*\n\n", x);
  printf("OR :%%#05x = *%#05x*\n", x);
  ft_printf("FT :%%#05x = *%#05x*\n\n", x);
  printf("OR :%%8.5x = *%8.5x*\n", x);
  ft_printf("FT :%%8.5x = *%8.5x*\n\n", x);
  printf("OR :%%-8.5x = *%-8.5x*\n", x);
  ft_printf("FT :%%-8.5x = *%-8.5x*\n\n", x);
  //printf("OR :%%+8.5x = *%+8.5x*\n", x);
  ft_printf("FT :%%+8.5x = *%+8.5x*\n\n", x);
  //printf("OR :%%08.5x = *%08.5x*\n", x);
  ft_printf("FT :%%08.5x = *%08.5x*\n\n", x);
  printf("OR :%%#8.5x = *%#8.5x*\n", x);
  ft_printf("FT :%%#8.5x = *%#8.5x*\n\n", x);
  //printf("OR :%% 8.5x = *% 8.5x*\n", x);
  ft_printf("FT :%% 8.5x = *% 8.5x*\n\n", x);
  //printf("OR :%%# 8.5x = *%# 8.5x*\n", x);
  ft_printf("FT :%%# 8.5x = *%# 8.5x*\n\n", x);
  //printf("OR :%%+-8.5x = *%+-8.5x*\n", x);
  ft_printf("FT :%%+-8.5x = *%+-8.5x*\n\n", x);
  //printf("OR :%%-+8.5x = *%-+8.5x*\n", x);
  ft_printf("FT :%%-+8.5x = *%-+8.5x*\n\n", x);
  //printf("OR :%%0.x = *%0.x*\n", x);
  ft_printf("FT :%%0.x = *%0.x*\n\n", x);
  //printf("OR :%%0.5x = *%0.5x*\n", x);
  ft_printf("FT :%%0.5x = *%0.5x*\n\n", x);
  //printf("OR :%%.-5x = *%.-5x*\n", x);
  ft_printf("FT :%%.-5x = *%.-5x*\n\n", x);
  //printf("OR :%%8.-5x = *%8.-5x*\n", x);
  ft_printf("FT :%%8.-5x = *%8.-5x*\n\n", x);

  printf("OR :%%u = *%u*\n", u);
  ft_printf("FT :%%u = *%u*\n\n", u);
  //printf("OR :%%+u = *%+u*\n", u);
  ft_printf("FT :%%+u = *%+u*\n\n", u);
  printf("OR :%%-u = *%-u*\n", u);
  ft_printf("FT :%%-u = *%-u*\n\n", u);
  //printf("OR :%% u = *% u*\n", u);
  ft_printf("FT :%% u = *% u*\n\n", u);
  //printf("OR :%%#u = *%#u*\n", u);
  ft_printf("FT :%%#u = *%#u*\n\n", u);
  printf("OR :%%.u = *%.u*\n", u);
  ft_printf("FT :%%.u = *%.u*\n\n", u);
  printf("OR :%%0u = *%0u*\n", u);
  ft_printf("FT :%%0u = *%0u*\n\n", u);
  printf("OR :%%5u = *%5u*\n", u);
  ft_printf("FT :%%5u = *%5u*\n\n", u);
  //printf("OR :%%+5u = *%+5u*\n", u);
  ft_printf("FT :%%+5u = *%+5u*\n\n", u);
  printf("OR :%%-5u = *%-5u*\n", u);
  ft_printf("FT :%%-5u = *%-5u*\n\n", u);
  printf("OR :%%.5u = *%.5u*\n", u);
  ft_printf("FT :%%.5u = *%.5u*\n\n", u);
  printf("OR :%%-.5u = *%.5u*\n", u);
  ft_printf("FT :%%-.5u = *%.5u*\n\n", u);
  printf("OR :%%.-5u = *%.5u*\n", u);
  ft_printf("FT :%%.-5u = *%.5u*\n\n", u);
  printf("OR :%%+.5u = *%.5u*\n", u);
  ft_printf("FT :%%+.5u = *%.5u*\n\n", u);
  printf("OR :%%.+5u = *%.5u*\n", u);
  ft_printf("FT :%%.+5u = *%.5u*\n\n", u);
  //printf("OR :%%#5u = *%#5u*\n", u);
  ft_printf("FT :%%#5u = *%#5u*\n\n", u);
  //printf("OR :%% 5u = *% 5u*\n", u);
  ft_printf("FT :%% 5u = *% 5u*\n\n", u);
  printf("OR :%%05u = *%05u*\n", u);
  ft_printf("FT :%%05u = *%05u*\n\n", u);
  //printf("OR :%%-05u = *%-05u*\n", u);
  ft_printf("FT :%%-05u = *%-05u*\n\n", u);
  //printf("OR :%%+05u = *%+05u*\n", u);
  ft_printf("FT :%%+05u = *%+05u*\n\n", u);
  //printf("OR :%%#05u = *%#05u*\n", u);
  ft_printf("FT :%%#05u = *%#05u*\n\n", u);
  printf("OR :%%8.5u = *%8.5u*\n", u);
  ft_printf("FT :%%8.5u = *%8.5u*\n\n", u);
  printf("OR :%%-8.5u = *%-8.5u*\n", u);
  ft_printf("FT :%%-8.5u = *%-8.5u*\n\n", u);
  //printf("OR :%%+8.5u = *%+8.5u*\n", u);
  ft_printf("FT :%%+8.5u = *%+8.5u*\n\n", u);
  //printf("OR :%%08.5u = *%08.5u*\n", u);
  ft_printf("FT :%%08.5u = *%08.5u*\n\n", u);
  //printf("OR :%%#8.5u = *%#8.5u*\n", u);
  ft_printf("FT :%%#8.5u = *%#8.5u*\n\n", u);
  //printf("OR :%% 8.5u = *% 8.5u*\n", u);
  ft_printf("FT :%% 8.5u = *% 8.5u*\n\n", u);
  //printf("OR :%%# 8.5u = *%# 8.5u*\n", u);
  ft_printf("FT :%%# 8.5u = *%# 8.5u*\n\n", u);
  //printf("OR :%%+-8.5u = *%+-8.5u*\n", u);
  ft_printf("FT :%%+-8.5u = *%+-8.5u*\n\n", u);
  //printf("OR :%%-+8.5u = *%-+8.5u*\n", u);
  ft_printf("FT :%%-+8.5u = *%-+8.5u*\n\n", u);
  //printf("OR :%%0.u = *%0.u*\n", u);
  ft_printf("FT :%%0.u = *%0.u*\n\n", u);
  //printf("OR :%%0.5u = *%0.5u*\n", u);
  ft_printf("FT :%%0.5u = *%0.5u*\n\n", u);
  //printf("OR :%%.-5u = *%.-5u*\n", u);
  ft_printf("FT :%%.-5u = *%.-5u*\n\n", u);
  //printf("OR :%%8.-5u = *%8.-5u*\n", u);
  ft_printf("FT :%%8.-5u = *%8.-5u*\n\n", u);

  printf("OR :%%d = *%d*\n", n);
  ft_printf("FT :%%d = *%d*\n\n", n);
  printf("OR :%%+d = *%+d*\n", n);
  ft_printf("FT :%%+d = *%+d*\n\n", n);
  printf("OR :%%-d = *%-d*\n", n);
  ft_printf("FT :%%-d = *%-d*\n\n", n);
  printf("OR :%% d = *% d*\n", n);
  ft_printf("FT :%% d = *% d*\n\n", n);
  //printf("OR :%%#d = *%#d*\n", n);
  ft_printf("FT :%%#d = *%#d*\n\n", n);
  printf("OR :%%.d = *%.d*\n", n);
  ft_printf("FT :%%.d = *%.d*\n\n", n);
  printf("OR :%%0d = *%0d*\n", n);
  ft_printf("FT :%%0d = *%0d*\n\n", n);
  printf("OR :%%5d = *%5d*\n", n);
  ft_printf("FT :%%5d = *%5d*\n\n", n);
  printf("OR :%%+5d = *%+5d*\n", n);
  ft_printf("FT :%%+5d = *%+5d*\n\n", n);
  printf("OR :%%-5d = *%-5d*\n", n);
  ft_printf("FT :%%-5d = *%-5d*\n\n", n);
  printf("OR :%%.5d = *%.5d*\n", n);
  ft_printf("FT :%%.5d = *%.5d*\n\n", n);
  printf("OR :%%-.5d = *%.5d*\n", n);
  ft_printf("FT :%%-.5d = *%.5d*\n\n", n);
  printf("OR :%%.-5d = *%.5d*\n", n);
  ft_printf("FT :%%.-5d = *%.5d*\n\n", n);
  printf("OR :%%+.5d = *%.5d*\n", n);
  ft_printf("FT :%%+.5d = *%.5d*\n\n", n);
  printf("OR :%%.+5d = *%.5d*\n", n);
  ft_printf("FT :%%.+5d = *%.5d*\n\n", n);
  //printf("OR :%%#5d = *%#5d*\n", n);
  ft_printf("FT :%%#5d = *%#5d*\n\n", n);

  printf("OR :%% 5d = *% 5d*\n", n);
  ft_printf("FT :%% 5d = *% 5d*\n\n", n);
  printf("OR :%%05d = *%05d*\n", n);
  ft_printf("FT :%%05d = *%05d*\n\n", n);
  //printf("OR :%%-05d = *%-05d*\n", n);
  ft_printf("FT :%%-05d = *%-05d*\n\n", n);
  printf("OR :%%+05d = *%+05d*\n", n);
  ft_printf("FT :%%+05d = *%+05d*\n\n", n);
  //printf("OR :%%#05d = *%#05d*\n", n);
  ft_printf("FT :%%#05d = *%#05d*\n\n", n);
  printf("OR :%%8.5d = *%8.5d*\n", n);
  ft_printf("FT :%%8.5d = *%8.5d*\n\n", n);
  printf("OR :%%-8.5d = *%-8.5d*\n", n);
  ft_printf("FT :%%-8.5d = *%-8.5d*\n\n", n);
  printf("OR :%%+8.5d = *%+8.5d*\n", n);
  ft_printf("FT :%%+8.5d = *%+8.5d*\n\n", n);
  //printf("OR :%%08.5d = *%08.5d*\n", n);
  ft_printf("FT :%%08.5d = *%08.5d*\n\n", n);
  //printf("OR :%%#8.5d = *%#8.5d*\n", n);
  ft_printf("FT :%%#8.5d = *%#8.5d*\n\n", n);
  printf("OR :%% 8.5d = *% 8.5d*\n", n);
  ft_printf("FT :%% 8.5d = *% 8.5d*\n\n", n);
  //printf("OR :%%# 8.5d = *%# 8.5d*\n", n);
  ft_printf("FT :%%# 8.5d = *%# 8.5d*\n\n", n);
  printf("OR :%%+-8.5d = *%+-8.5d*\n", n);
  ft_printf("FT :%%+-8.5d = *%+-8.5d*\n\n", n);
  printf("OR :%%-+8.5d = *%-+8.5d*\n", n);
  ft_printf("FT :%%-+8.5d = *%-+8.5d*\n\n", n);
  //printf("OR :%%0.d = *%0.d*\n", n);
  ft_printf("FT :%%0.d = *%0.d*\n\n", n);
  //printf("OR :%%0.5d = *%0.5d*\n", n);
  ft_printf("FT :%%0.5d = *%0.5d*\n\n", n);
  //printf("OR :%%.-5d = *%.-5d*\n", n);
  ft_printf("FT :%%.-5d = *%.-5d*\n\n", n);
  //printf("OR :%%8.-5d = *%8.-5d*\n", n);
  ft_printf("FT :%%8.-5d = *%8.-5d*\n\n", n);



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

    for (size_t i = 0; i < num_pointers; i++) 
    {
      printf("OR :%%p = *%p*\n", pointers[i]);
      ft_printf("FT :%%p = *%p*\n\n", pointers[i]);
    }
  
    // Variable pour les tests de pointeurs
    // Comparaison des chaînes avec flag.
    printf("OR :%%16p = *%16p*\n", ptr);
    ft_printf("FT :%%16p = *%16p*\n\n", ptr);
    printf("OR :%%-16p = *%-16p*\n", ptr);
    ft_printf("FT :%%-16p = *%-16p*\n\n", ptr);
  //  printf("OR :%%.17p = *%.17p*\n", ptr);
    ft_printf("FT :%%.17p = *%.17p*\n\n", ptr);
    //printf("OR :%%-.23p = *%-.23p*\n", ptr);
    ft_printf("FT :%%-.23p = *%-.23p*\n\n", ptr);
    //printf("OR :%%+p = *%+p*\n", ptr);
    ft_printf("FT :%%+p = *%+p*\n\n", ptr);
    //printf("OR :%% p = *% p*\n", ptr);
    ft_printf("FT :%% p = *% p*\n\n", ptr);
    //printf("OR :%% 19p = *% 19p*\n", ptr);
    ft_printf("FT :%% 19p = *% 19p*\n\n", ptr);
    //printf("OR :%%019p = *%019p*\n", ptr);
    ft_printf("FT :%%019p = *%019p*\n\n", ptr);
    //printf("OR :%%019.p = *%019.p*\n", ptr);
    ft_printf("FT :%%019.p = *%019.p*\n\n", ptr);
    //printf("OR :%%30.19p = *%30.19p*\n", ptr);
    ft_printf("FT :%%30.19p = *%30.19p*\n\n", ptr);
    //printf("OR :%%12.12p = *%12.12p*\n", ptr);
    ft_printf("FT :%%12.12p = *%12.12p*\n\n", ptr);
    //printf("OR :%%30.12p = *%30.12p*\n", ptr);
    ft_printf("FT :%%30.12p = *%30.12p*\n\n", ptr);
    //printf("OR :%%12.19p = *%12.19p*\n", ptr);
    ft_printf("FT :%%12.19p = *%12.19p*\n\n", ptr);
    //printf("OR :%%-30.19p = *%-30.19p*\n", ptr);
    ft_printf("FT :%%-30.19p = *%-30.19p*\n\n", ptr);
    //printf("OR :%%-12.12p = *%-12.12p*\n", ptr);
    ft_printf("FT :%%-12.12p = *%-12.12p*\n\n", ptr);
    //printf("OR :%%-30.12p = *%-30.12p*\n", ptr);
    ft_printf("FT :%%-30.12p = *%-30.12p*\n\n", ptr);
    //printf("OR :%%-12.19p = *%-12.19p*\n", ptr);
    ft_printf("FT :%%-12.19p = *%-12.19p*\n\n", ptr);
    printf("Or :%%s: *%s*\n", str);
    ft_printf("Ft :%%s: *%s*\n\n", str);
    printf("Or :%%19s: *%19s*\n", str);
    ft_printf("Ft :%%19s: *%19s*\n\n", str);
    printf("Or :%%.5s: *%.5s*\n", str);
    ft_printf("Ft :%%.5s: *%.5s*\n\n", str);
    printf("Or :%%10.5s: *%10.5s*\n", str);
    ft_printf("Ft :%%10.5s: *%10.5s*\n\n", str);
    printf("Or :%%-19s: *%-19s*\n", str);
    ft_printf("Ft :%%-19s: *%-19s*\n\n", str);
    printf("Or :%%-10.5s: *%-10.5s*\n", str);
    ft_printf("Ft :%%-10.5s: *%-10.5s*\n\n", str); 
    ft_printf("FT :%%c = *%c*\n", lettre);
    printf("OR :%%c = *%c*\n\n", lettre);
    ft_printf("FT :%%5c = *%5c*\n", lettre);
    printf("OR :%%5c = *%5c*\n\n", lettre);
    ft_printf("FT :%%-5c = *%-5c*\n", lettre);
    printf("OR :%%-5c = *%-5c*\n\n", lettre);
    ft_printf("FT :%%0c = *%0c*\n", lettre);
    //printf("OR :%%0c = *%0c*\n\n", lettre);
    ft_printf("FT :%%.c = *%.c*\n", lettre);
    //printf("OR :%%.c = *%.c*\n\n", lettre);
    ft_printf("FT :%%5.3c = *%5.3c*\n", lettre);
    //printf("OR :%%5.3c = *%5.3c*\n\n", lettre);
    ft_printf("FT :%%+c = *%+c*\n", lettre);
    //printf("OR :%%+c = *%+c*\n\n", lettre);
    ft_printf("FT :%% c = *% c*\n", lettre);
    //printf("OR :%% c = *% c*\n\n", lettre);
    ft_printf("FT :%%#c = *%#c*\n", lettre);
    //printf("OR :%%#c = *%#c*\n\n", lettre);
    ft_printf("FT :%%-0c = *%-0c*\n", lettre);
    //printf("OR :%%-0c = *%-0c*\n\n", lettre);
    ft_printf("FT :%%+-# 05.c = *%+-# 05.c*\n",lettre);
    //printf("OR :%%+-# 05.c = *%+-# 05.c*\n\n",lettre);
   

/*-------------------------------------------------------*/
/*|                                                     |*/
/*|                FT_PRINTF OBLIGATOIRE                |*/
/*|                                                     |*/
/*-------------------------------------------------------*/

    printf("OR :%%p = *%p*\n", null_ptr);
    ft_printf("FT :%%p = *%p*\n\n", null_ptr);
    printf("OR :%%c = *%c*\n", lettre);
    ft_printf("FT :%%c = *%c*\n\n", lettre);
    printf("OR :%%s = *%s*\n", str);
    ft_printf("FT :%%s = *%s*\n\n", str);
    printf("OR :%%p = *%p*\n", ptr);
    ft_printf("FT :%%p = *%p*\n\n", ptr);
    printf("OR :%%d = *%d*\n", 42);
    ft_printf("FT :%%d = *%d*\n\n", 42);
    printf("OR :%%i = *%i*\n", -42);
    ft_printf("FT :%%i = *%i*\n\n", -42);
    printf("OR :%%u = *%u*\n", 42u);
    ft_printf("FT :%%u = *%u*\n\n", 42u);
    printf("OR :%%u = *%u*\n", 4294967295u);
    ft_printf("FT :%%u = *%u*\n\n", 4294967295u);
    printf("OR :%%x = *%x*\n", 42);
    ft_printf("FT :%%x = *%x*\n\n", 42);
    printf("OR :%%X = *%X*\n", 42);
    ft_printf("FT :%%X = *%X*\n\n", 42);
    printf("OR :%%%% = *%%*\n");
    ft_printf("FT :%%%%% = *%%*\n\n");
   
    return 0;
}