#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <limits.h>
#include "libft/libft.h"
#include "../obligatory/printf/ft_printf.h"

void fonctionSansRetourNiArguments(void);
int fonctionAvecRetourEtSansArguments(void);
char *fonctionAvecRetourEtAvecArguments(int, char);
void maFonction(void); 

int main(void)
{   
    char *str = "Test";
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
    int ret_printf, ret_ft_printf;
    unsigned int test_vals[] = {0, 1, 42, UINT_MAX, 0x7FFFFFFF, 0x12345678};
    int test_count = sizeof(test_vals) / sizeof(test_vals[0]);
    int original, custom;
    int original_return;
    int ft_return;
    void *null_p = NULL;
    int entier = 42;
    char caractere = 'A';
    float flottant = 3.14f;
    int tableau[5] = {1, 2, 3, 4, 5};
    int *ptr_entier = &entier;
    char *ptr_caractere = &caractere;
    float *ptr_flottant = &flottant;
    int *ptr_tableau = tableau; // Pointe vers le premier élément du tableau
    void *ptr_null = NULL;

	// Combinaisons complexes de flags
    printf("\nTest : 001\n");
    ft_printf("Ft = Combi complexe avec largeur et précision: *%+-10.5d*, *%#08X*\n", 12345, 255);
    printf("Or = Combi complexe avec largeur et précision: *%+-10.5d*, *%#08X*\n\n", 12345, 255);

    // Précision et largeur pour les chaînes de caractères et les nombres
    printf("\nTest : 002\n");
    printf("Or = Précision avec chaîne: *%.5s*, Largeur avec entier: *%10d*\n", "abcdefg", 123);
    ft_printf("Ft = Précision avec chaîne: *%.5s*, Largeur avec entier: *%10d*\n\n", "abcdefg", 123);
    printf("Or = Combiné précision et largeur: *%10.5d*\n", 123);
    ft_printf("Ft = Combiné précision et largeur: *%10.5d*\n\n", 123);

    // Comportement des flags '+' et ' ' avec des nombres
    printf("\nTest : 003\n");
    printf("Or = Nombre positif avec '+': *%+d*, avec ' ': *% d*\n", 123, 123);
    ft_printf("Ft = Nombre positif avec '+': *%+d*, avec ' ': *% d*\n\n", 123, 123);
    printf("Or = Nombre négatif avec '+': *%+d*, avec ' ': *% d*\n", -123, -123);
    ft_printf("Ft = Nombre négatif avec '+': *%+d*, avec ' ': *% d*\n\n", -123, -123);

    printf("\nTest : 004\n");
    printf("Or = INT_MAX: *%d*, INT_MIN: *%d*, UINT_MAX: *%u*\n", INT_MAX, INT_MIN, UINT_MAX);
    ft_printf("Ft = INT_MAX: *%d*, INT_MIN: *%d*, UINT_MAX: *%u*\n\n", INT_MAX, INT_MIN, UINT_MAX);
    printf("Or = Hexa max unsigned int: *%#x*, *%#X*\n", UINT_MAX, UINT_MAX);
    ft_printf("Ft = Hexa max unsigned int: *%#x*, *%#X*\n\n", UINT_MAX, UINT_MAX);

    printf("\nTest : 005\n");
    printf("Or = Nombre avec flag '+': *%+d* au milieu d'une phrase.\n", 42);
    ft_printf("Ft = Nombre avec flag '+': *%+d* au milieu d'une phrase.\n\n", 42);
    printf("Or = Nombre hexadécimal avec flag '#': *%#x* entouré de texte.\n", 170);
    ft_printf("Ft = Nombre hexadécimal avec flag '#': *%#x* entouré de texte.\n\n", 170);

    printf("\nTest : 006\n");
    int len1 = ft_printf("Ft = Test retour: *%d*, *%s*, *%p*\n", 123, "abc", &len1);
    int len2 = printf("Or = Test retour: *%d*, *%s*, *%p*\n", 123, "abc", &len2);
    printf("Ft = printf a retourné %d caractères.\nOr = printf a retourné %d caractères.\n\n", len1, len2);

    printf("\nTest : 007\n");
    printf("Or = Mix: *%d*, *%s*, *%+d*, *%#x*, *%10s*\n", INT_MIN, "test", 42, 255, "right");
    ft_printf("Ft = Mix: *%d*, *%s*, *%+d*, *%#x*, *%10s*\n\n", INT_MIN, "test", 42, 255, "right");

    printf("\nTest : 008\n");
    printf("Or = Longue chaîne: *%s*\n", "Ceci est une très très longue chaîne de caractères destinée à tester la capacité de ft_printf à gérer de grands volumes de données.");
    ft_printf("Ft = Longue chaîne: *%s*\n\n", "Ceci est une très très longue chaîne de caractères destinée à tester la capacité de ft_printf à gérer de grands volumes de données.");

    // Test combiné de différents types avec flags
    printf("\nTest : 009\n");
    printf("Or = Mix: *%+d*, *%u*, *%#x*, *%s*, *%c*, *%p*, *%%*\n", INT_MIN, UINT_MAX, 0xDEADBEEF, "test", 'A', str);
    ft_printf("Ft = Mix: *%+d*, *%u*, *%#x*, *%s*, *%c*, *%p*, *%%*\n\n", INT_MIN, UINT_MAX, 0xDEADBEEF, "test", 'A', str);

    // Test des bordures pour les entiers non signés
    printf("\nTest : 010\n");
    printf("Or = UINT_MAX: *%u*, 0: *%u*\n", UINT_MAX, 0);
    ft_printf("Ft = UINT_MAX: *%u*, 0: *%u*\n\n", UINT_MAX, 0);

    // Test des combinaisons de flags sur un même type de donnée
    printf("\nTest : 011\n");
    printf("Or = Combi flags: *%+d*, *% d*, *%0d*, *%-d*, *%.5d*\n", INT_MIN, INT_MIN, INT_MIN, INT_MIN, INT_MIN);
    ft_printf("Ft = Combi flags: *%+d*, *% d*, *%0d*, *%-d*, *%.5d*\n\n", INT_MIN, INT_MIN, INT_MIN, INT_MIN, INT_MIN);

    // Test des combinaisons de flags avec différentes conversions dans une phrase
    printf("\nTest : 012\n");
    printf("Or = Hexa *%#x* avec zero *%05d* et signe *%+d* dans une phrase.\n", 255, 42, -42);
    ft_printf("Ft = Hexa *%#x* avec zero *%05d* et signe *%+d* dans une phrase.\n\n", 255, 42, -42);

    // Test avec de très longues chaînes de caractères
    printf("\nTest : 013\n");
    printf("Or = Longue chaîne: *%s*\n", "Ceci est une très longue chaîne de caractères pour tester la capacité de ft_printf à gérer de grands volumes de données sans problème.");
    ft_printf("Ft = Longue chaîne: *%s*\n\n", "Ceci est une très longue chaîne de caractères pour tester la capacité de ft_printf à gérer de grands volumes de données sans problème.");

    // Combinaisons complexes de flags pour les entiers
    printf("\nTest : 014\n");
    printf("Or = Mix: *%+08d*, *%%-#10x*: *%-#10x*, *%+ .5i*\n", INT_MIN, 255, 42);
    ft_printf("Ft = Mix: *%+08d*, *%%-#10x*: *%-#10x*, *%+ .5i*\n\n", INT_MIN, 255, 42);

    printf("\nTest : 015\n");
    printf("Or = Mix: *%+ .5i*\n", 42);
    ft_printf("Ft = Mix: *%+ .5i*\n", 42);

    printf("\nTest : 016\n");
    printf("Or = Pointeur avec flags: *%#p*\n", &ret_ft_printf);
    ft_printf("Ft = Pointeur avec flags: *%#p*\n", &ret_ft_printf);
    
    // Combinaisons complexes de flags pour les chaînes et les pointeurs
    printf("\nTest : 017\n");
    printf("Or = Chaîne avec précision et largeur: *%-.10s*, Pointeur avec flags: *%#p*\n", "test", &ret_ft_printf);
    ft_printf("Ft = Chaîne avec précision et largeur: *%-.10s*, Pointeur avec flags: *%#p*\n\n", "test", &ret_ft_printf);

    // Longue chaîne de caractères
    printf("\nTest : 018\n");
    printf("Or = Longue chaîne: *%s*\n", "Ceci est une très longue chaîne de caractères pour tester la capacité de ft_printf à gérer des données importantes.");
    ft_printf("Ft = Longue chaîne: *%s*\n\n", "Ceci est une très longue chaîne de caractères pour tester la capacité de ft_printf à gérer des données importantes.");

    printf("\nTest : 019\n");
    printf("Or = Mix: *%+08d*, *%-#10x*, *%+ .5i*, *% 10.5u*\n", INT_MIN, 255, -42, UINT_MAX);
    ft_printf("Ft = Mix: *%+08d*, *%-#10x*, *%+ .5i*, *% 10.5u*\n\n", INT_MIN, 255, -42, UINT_MAX);

    printf("\nTest : 020\n");
    printf("Or = Longue chaîne: *%s*\n", "Ceci est une très longue chaîne de caractères destinée à tester la capacité de ft_printf à gérer de grands volumes de données.");
    ft_printf("Ft = Longue chaîne: *%s*\n\n", "Ceci est une très longue chaîne de caractères destinée à tester la capacité de ft_printf à gérer de grands volumes de données.");

    // Test de combinaisons complexes de flags
    printf("\nTest : 78\n");
    printf("Or = Mix: *%+08d*, *%-#10x*, *% 10.5u*, *%+-10.5s*\n", INT_MIN, 255, UINT_MAX, "test");
    ft_printf("Ft = Mix: *%+08d*, *%-#10x*, *% 10.5u*, *%+-10.5s*\n\n", INT_MIN, 255, UINT_MAX, "test");



	 // Tests simples sans flags
    printf("\nTest : 44\n");
    ret_printf = printf("Char : *%c*, Chaine : *%s*, Pointeur : *%p*, Entier : *%d*, Non signé : *%u*, Hex minuscule : *%x*, Hex majuscule : *%X*, Pourcentage : *%%*\n", 'A', "test", str, 42, 42, 42, 42);
    ret_ft_printf = ft_printf("Char : *%c*, Chaine : *%s*, Pointeur : *%p*, Entier : *%d*, Non signé : *%u*, Hex minuscule : *%x*, Hex majuscule : *%X*, Pourcentage : *%%*\n", 'A', "test", str, 42, 42, 42, 42);
    if (ret_printf != ret_ft_printf) printf("Erreur de correspondance des valeurs de retour pour le test simple sans flags.\n\n");

    // Tests des cas spéciaux
    printf("\nTest : 45\n");
    ret_printf = printf("0 : *%d*, INT_MIN : *%d*, Chaine vide : *%s*, Pointeur NULL : *%p*\n", 0, INT_MIN, "", null_ptr);
    ret_ft_printf = ft_printf("0 : *%d*, INT_MIN : *%d*, Chaine vide : *%s*, Pointeur NULL : *%p*\n\n", 0, INT_MIN, "", null_ptr);

    // Test avec plusieurs arguments et conversions
    printf("\nTest : 46\n");
    ret_printf = printf("Valeurs multiples : *%d* *%s* *%x* *%X* *%%*\n", 123, "abcd", 456, 789);
    ret_ft_printf = ft_printf("Valeurs multiples : *%d* *%s* *%x* *%X* *%%*\n\n", 123, "abcd", 456, 789);

    // Tests des flags dans une phrase

    printf("\nTest : 47\n");
    ret_printf = printf("Texte avec des flags, comme -123 et zéro *%05d*, au milieu.\n", 456);
    ret_ft_printf = ft_printf("Texte avec des flags, comme -123 et zéro *%05d*, au milieu.\n\n", 456);

    // Tests fous avec vérification des valeurs de retour
    printf("\nTest : 48\n");
    ret_printf = printf("Combinaison : *%d* *%s* *%p* *%x* *%X* *%%*\n", INT_MAX, "combi", str, 255, 255);
    ret_ft_printf = ft_printf("Combinaison : *%d* *%s* *%p* *%x* *%X* *%%*\n", INT_MAX, "combi", str, 255, 255);
    if (ret_printf != ret_ft_printf) printf("Erreur de correspondance des valeurs de retour pour le test combinaison.\n\n");

    // Tests des conversions identiques à la suite
    printf("\nTest : 49\n");
    ret_printf = printf("Identiques : *%d%d%d*\n", 42, 42, 42);
    ret_ft_printf = ft_printf("Identiques : *%d%d%d*\n\n", 42, 42, 42);

    // Partie bonus : gestion simple des flags
    printf("\nTest : 50\n");
    ret_printf = printf("Test flag '.' avec précision variable : *%.5d*, *%.3s*\n", 42, "abcdef");
    ret_ft_printf = ft_printf("Test flag '.' avec précision variable : *%.5d*, *%.3s*\n\n", 42, "abcdef");
    ret_printf = printf("Test flag '-' pour aligner à gauche : *%-5d*\n", 42);
    ret_ft_printf = ft_printf("Test flag '-' pour aligner à gauche : *%-5d*\n\n", 42);
    ret_printf = printf("Test flag '0' pour padding : *%05d*, *%010d*\n", 42, -42);
    ret_ft_printf = ft_printf("Test flag '0' pour padding : *%05d*, *%010d*\n\n", 42, -42);

    // Tests avancés des flags et combinaisons
    printf("\nTest : 51\n");
    ret_printf = printf("Combi avancée : *%+-5d*, *%#x*, *% .5s*\n", 42, 255, "abcdef");
    ret_ft_printf = ft_printf("Combi avancée : *%+-5d*, *%#x*, *% .5s*\n\n", 42, 255, "abcdef");

    // #, +, espace
    printf("\nTest : 30\n");
    ret_printf = printf("Flag '#' avec hexa : *%#x*, *%#X*\n", 255, 255);
    ret_ft_printf = ft_printf("Flag '#' avec hexa : *%#x*, *%#X*\n\n", 255, 255);
    ret_printf = printf("Flag '+' avec signe : *%+d*, *%+d*\n", 42, -42);
    ret_ft_printf = ft_printf("Flag '+' avec signe : *%+d*, *%+d*\n\n", 42, -42);
    ret_printf = printf("Flag ' ' avec espace : *% d*, *% d*\n", 42, -42);
    ret_ft_printf = ft_printf("Flag ' ' avec espace : *% d*, *% d*\n\n", 42, -42);

    // Tests supplémentaires pour les flags au milieu d'une phrase
    printf("\nTest : 53\n");
    ret_printf = printf("Ceci est un test avec un entier : *%d*, et un hexa : *%#x*.\n", INT_MAX, 255);
    ret_ft_printf = ft_printf("Ceci est un test avec un entier : *%d*, et un hexa : *%#x*.\n", INT_MAX, 255);
    if (ret_printf != ret_ft_printf) printf("Erreur de correspondance des valeurs de retour pour les flags au milieu d'une phrase.\n\n");

    // Tests pour des combinaisons de flags et de conversions
    printf("\nTest : 54\n");
    ret_printf = printf("Or = Combi complexe: *%+d*, *% 10d*, *%-10d*, *%.5s*, *%-.5s*, *%05d*\n", 42, -42, 42, "abcdef", "ghijkl", -42);
    ret_ft_printf = ft_printf("Ft = Combi complexe: *%+d*, *% 10d*, *%-10d*, *%.5s*, *%-.5s*, *%05d*\n", 42, -42, 42, "abcdef", "ghijkl", -42);
    if (ret_printf != ret_ft_printf) printf("Erreur de correspondance des valeurs de retour pour les combinaisons complexes de flags et de conversions.\n\n");

    // Tests pour vérifier le comportement des flags '+' et ' ' avec des entiers positifs et négatifs
    printf("\nTest : 55\n");
    ret_printf = printf("Positif avec '+': *%+d*, Positif avec ' ': *% d*. Negatif avec '+': *%+d*, Negatif avec ' ': *% d*\n", 42, 42, -42, -42);
    ret_ft_printf = ft_printf("Positif avec '+': *%+d*, Positif avec ' ': *% d*. Negatif avec '+': *%+d*, Negatif avec ' ': *% d*\n", 42, 42, -42, -42);
    if (ret_printf != ret_ft_printf) printf("Erreur de correspondance des valeurs de retour pour les flags '+' et ' '.\n\n");



	printf("   _     _     _     _ \n  |-|   |-|   |-|   |-|\n  |-|   |-|   |-|   |-|\n ----- ----- ----- -----\n  ---   ---   ---   ---\n   -     -     -     -\n\n");
	printf("*   |||---   BONUS : %%X   ---|||   *\n\n\n");

    printf("\nTest : 79\n");
    for (int i = 0; i < test_count; i++) {
        original = printf("Or: '*%%x*' =                *%x*\n", test_vals[i], test_vals[i]);
        custom = ft_printf("Ft: '*%%x*' =               *%x*\n", test_vals[i], test_vals[i]);
        printf("Length: Or = %d, Ft = %d\n\n", original, custom);
    }

    // Test avec flag '#'
    printf("\nTest : 80\n");
    for (int i = 0; i < test_count; i++) {
        original = printf("Or: '*%%#x*' =               *%#x*\n", test_vals[i], test_vals[i]);
        custom = ft_printf("Ft: '*%%#x*' =              *%#x*\n", test_vals[i], test_vals[i]);
        printf("Length: Or = %d, Ft = %d\n\n", original, custom);
    }

    // Test avec flag '0'
    printf("\nTest : 81\n");
    for (int i = 0; i < test_count; i++) {
        original = printf("Or: '*%%08x*' =              *%#08x*\n", test_vals[i], test_vals[i]);
        custom = ft_printf("Ft: '*%%08x*' =                 *%#08x*\n", test_vals[i], test_vals[i]);
        printf("Length: Or = %d, Ft = %d\n\n", original, custom);
    }

    // Test avec flag '-'
    printf("\nTest : 82\n");
    for (int i = 0; i < test_count; i++) {
        original = printf("Or: '*%%-8x*' =              *%#-8x*\n", test_vals[i], test_vals[i]);
        custom = ft_printf("Ft: '*%%-8x*' =                 *%#-8x*\n", test_vals[i], test_vals[i]);
        printf("Length: Or = %d, Ft = %d\n\n", original, custom);
        original = printf("Or: '*%%-08x*' =             *%#-08x*\n", test_vals[i], test_vals[i]);
        custom = ft_printf("Ft: '*%%-08x*' =            *%#-08x*\n", test_vals[i], test_vals[i]);
        printf("Length: Or = %d, Ft = %d\n\n", original, custom);
        original = printf("Or: '*%%8x*' =               *%#8x*\n", test_vals[i], test_vals[i]);
        custom = ft_printf("Ft: '*%%8x*' =              *%#8x*\n", test_vals[i], test_vals[i]);
        printf("Length: Or = %d, Ft = %d\n\n", original, custom);
        original = printf("Or: '*%%08x*' =              *%#08x*\n", test_vals[i], test_vals[i]);
        custom = ft_printf("Ft: '*%%08x*' =                 *%#08x*\n", test_vals[i], test_vals[i]);
        printf("Length: Or = %d, Ft = %d\n\n", original, custom);
    }

    // Test avec flag '.' (précision)
    printf("\nTest : 83\n");
    for (int i = 0; i < test_count; i++) {
        original = printf("Or: '*%%.25x*' =                 *%#.25x*\n", test_vals[i], test_vals[i]);
        custom = ft_printf("Ft: '*%%.25x*' =                *%#.25x*\n", test_vals[i], test_vals[i]);
        printf("Length: Or = %d, Ft = %d\n\n", original, custom);
    }
    printf("\nTest : 84\n");
    for (int i = 0; i < test_count; i++) {
        original = printf("Or: '*%%25x*' =          *%25x*\n", test_vals[i], test_vals[i]);
        custom = ft_printf("Ft: '*%%25x*' =          *%25x*\n\n", test_vals[i], test_vals[i]);
        original = printf("Or: '*%%025x*' =         *%025x*\n", test_vals[i], test_vals[i]);
        custom = ft_printf("Ft: '*%%025x*' =         *%025x*\n\n", test_vals[i], test_vals[i]);
        original = printf("Or: '*%%-25x*' =         *%-25x*\n", test_vals[i], test_vals[i]);
        custom = ft_printf("Ft: '*%%-25x*' =         *%-25x*\n\n", test_vals[i], test_vals[i]);
        original = printf("Or: '*%%-025x*' =        *%-025x*\n", test_vals[i], test_vals[i]);
        custom = ft_printf("Ft: '*%%-025x*' =        *%-025x*\n\n", test_vals[i], test_vals[i]);
        original = printf("Or: '*%%#25x*' =         *%#25x*\n", test_vals[i], test_vals[i]);
        custom = ft_printf("Ft: '*%%#25x*' =         *%#25x*\n\n", test_vals[i], test_vals[i]);
        original = printf("Or: '*%%#025x*' =        *%#025x*\n", test_vals[i], test_vals[i]);
        custom = ft_printf("Ft: '*%%#025x*' =        *%#025x*\n\n", test_vals[i], test_vals[i]);
        original = printf("Or: '*%%-#25x*' =        *%-#25x*\n", test_vals[i], test_vals[i]);
        custom = ft_printf("Ft: '*%%-#25x*' =        *%-#25x*\n\n", test_vals[i], test_vals[i]);
        original = printf("Or: '*%%-#025x*' =       *%-#025x*\n", test_vals[i], test_vals[i]);
        custom = ft_printf("Ft: '*%%-#025x*' =       *%-#025x*\n\n", test_vals[i], test_vals[i]);
        printf("Length: Or = %d, Ft = %d\n\n", original, custom);
    }

    // Test avec flag 'xx.xx' (Largeur de champs et précision)
    printf("\nTest : 40\n");
    for (int i = 0; i < test_count; i++) {
        original = printf("Or: '*%%#25.15x*' =          *%#25.15x*\n", test_vals[i], test_vals[i]);
        custom = ft_printf("Ft: '*%%#25.15x*' =             *%#25.15x*\n", test_vals[i], test_vals[i]);
        original = printf("Or: '*%%#-25.15x*' =             *%#-25.15x*\n", test_vals[i], test_vals[i]);
        custom = ft_printf("Ft: '*%%#-25.15x*' =            *%#-25.15x*\n", test_vals[i], test_vals[i]);
        printf("Length: Or = %d, Ft = %d\n\n", original, custom);
    }
    // Tests supplémentaires pour observer le comportement avec flags ' ' et '+'
    // Remarque: Ces flags ne modifient pas la sortie pour '%x', mais sont inclus pour la complétude

    // Test avec flag ' ' (espace)
    printf("\nTest : 86\n");
    for (int i = 0; i < test_count; i++) {
        original = printf("Or: '*%%# 0x*' =                 *%# 0x*\n", test_vals[i], test_vals[i]);
        custom = ft_printf("Ft: '*%%# 0x*' =                *%# 0x*\n", test_vals[i], test_vals[i]);
        printf("Length: Or = %d, Ft = %d\n\n", original, custom);
    }

    printf("\nTest : 87\n");
    for (int i = 0; i < test_count; i++) {
        original = printf("Or: '*%%# 4x*' =                 *%# 4x*\n", test_vals[i], test_vals[i]);
        custom = ft_printf("Ft: '*%%# 4x*' =                *%# 4x*\n", test_vals[i], test_vals[i]);
        printf("Length: Or = %d, Ft = %d\n\n", original, custom);
    }
    printf("\nTest : 88\n");
    for (int i = 0; i < test_count; i++) {
        original = printf("Or: '*%%X*' =               *%X*\n", test_vals[i], test_vals[i]);
        custom = ft_printf("Ft: '*%%X*' =               *%X*\n", test_vals[i], test_vals[i]);
        printf("Length: Or = %d, Ft = %d\n\n", original, custom);
    }

    // Test avec flag '#'
    printf("\nTest : 89\n");
    for (int i = 0; i < test_count; i++) {
        original = printf("Or: '*%%#X*' =              *%#X*\n", test_vals[i], test_vals[i]);
        custom = ft_printf("Ft: '*%%#X*' =              *%#X*\n", test_vals[i], test_vals[i]);
        printf("Length: Or = %d, Ft = %d\n\n", original, custom);
    }

    // Test avec flag '0'
    printf("\nTest : 90\n");
    for (int i = 0; i < test_count; i++) {
        original = printf("Or: '*%%08X*' =              *%#08X*\n", test_vals[i], test_vals[i]);
        custom = ft_printf("Ft: '*%%08X*' =              *%#08X*\n", test_vals[i], test_vals[i]);
        printf("Length: Or = %d, Ft = %d\n\n", original, custom);
    }

    // Test avec flag '-'
    printf("\nTest : 91\n");
    for (int i = 0; i < test_count; i++) {
        original = printf("Or: '*%%-8X*' =              *%#-8X*\n", test_vals[i], test_vals[i]);
        custom = ft_printf("Ft: '*%%-8X*' =              *%#-8X*\n", test_vals[i], test_vals[i]);
        printf("Length: Or = %d, Ft = %d\n\n", original, custom);
        original = printf("Or: '*%%-08X*' =             *%#-08X*\n", test_vals[i], test_vals[i]);
        custom = ft_printf("Ft: '*%%-08X*' =             *%#-08X*\n", test_vals[i], test_vals[i]);
        printf("Length: Or = %d, Ft = %d\n\n", original, custom);
        original = printf("Or: '*%%8X*' =               *%#8X*\n", test_vals[i], test_vals[i]);
        custom = ft_printf("Ft: '*%%8X*' =               *%#8X*\n", test_vals[i], test_vals[i]);
        printf("Length: Or = %d, Ft = %d\n\n", original, custom);
        original = printf("Or: '*%%08X*' =              *%#08X*\n", test_vals[i], test_vals[i]);
        custom = ft_printf("Ft: '*%%08X*' =              *%#08X*\n", test_vals[i], test_vals[i]);
        printf("Length: Or = %d, Ft = %d\n\n", original, custom);
   }
 
    // Test avec flag '.' (précision)
    printf("\nTest : 92\n");
    for (int i = 0; i < test_count; i++) {
        original = printf("Or: '*%%.25X*' =                *%#.25X*\n", test_vals[i], test_vals[i]);
        custom = ft_printf("Ft: '*%%.25X*' =                *%#.25X*\n", test_vals[i], test_vals[i]);
        printf("Length: Or = %d, Ft = %d\n\n", original, custom);
    }
    printf("\nTest : 93\n");
    for (int i = 0; i < test_count; i++) {
        original = printf("Or: '*%%25X*' =          *%25X*\n", test_vals[i], test_vals[i]);
        custom = ft_printf("Ft: '*%%25X*' =          *%25X*\n\n", test_vals[i], test_vals[i]);
        original = printf("Or: '*%%025X*' =         *%025X*\n", test_vals[i], test_vals[i]);
        custom = ft_printf("Ft: '*%%025X*' =         *%025X*\n\n", test_vals[i], test_vals[i]);
        original = printf("Or: '*%%-25X*' =         *%-25X*\n", test_vals[i], test_vals[i]);
        custom = ft_printf("Ft: '*%%-25X*' =         *%-25X*\n\n", test_vals[i], test_vals[i]);
        original = printf("Or: '*%%-025X*' =        *%-025X*\n", test_vals[i], test_vals[i]);
        custom = ft_printf("Ft: '*%%-025X*' =        *%-025X*\n\n", test_vals[i], test_vals[i]);
        original = printf("Or: '*%%#25X*' =         *%#25X*\n", test_vals[i], test_vals[i]);
        custom = ft_printf("Ft: '*%%#25X*' =         *%#25X*\n\n", test_vals[i], test_vals[i]);
        original = printf("Or: '*%%#025X*' =        *%#025X*\n", test_vals[i], test_vals[i]);
        custom = ft_printf("Ft: '*%%#025X*' =        *%#025X*\n\n", test_vals[i], test_vals[i]);
        original = printf("Or: '*%%-#25X*' =        *%-#25X*\n", test_vals[i], test_vals[i]);
        custom = ft_printf("Ft: '*%%-#25X*' =        *%-#25X*\n\n", test_vals[i], test_vals[i]);
        original = printf("Or: '*%%-#025X*' =       *%-#025X*\n", test_vals[i], test_vals[i]);
        custom = ft_printf("Ft: '*%%-#025X*' =       *%-#025X*\n\n", test_vals[i], test_vals[i]);
        printf("Length: Or = %d, Ft = %d\n\n", original, custom);
    }

    // Test avec flag 'xx.xx' (Largeur de champs et précision)
    printf("\nTest : 94\n");
    for (int i = 0; i < test_count; i++) {
        original = printf("Or: '*%%#25.15X*' =             *%#25.15X*\n", test_vals[i], test_vals[i]);
        custom = ft_printf("Ft: '*%%#25.15X*' =             *%#25.15X*\n", test_vals[i], test_vals[i]);
        original = printf("Or: '*%%#-25.15X*' =            *%#-25.15X*\n", test_vals[i], test_vals[i]);
        custom = ft_printf("Ft: '*%%#-25.15X*' =            *%#-25.15X*\n", test_vals[i], test_vals[i]);
        printf("Length: Or = %d, Ft = %d\n\n", original, custom);
    }
    // Tests supplémentaires pour observer le comportement avec flags ' ' et '+'
    // Remarque: Ces flags ne modifient pas la sortie pour '%x', mais sont inclus pour la complétude

    // Test avec flag ' ' (espace)
    printf("\nTest : 50\n");
    for (int i = 0; i < test_count; i++) {
        original = printf("Or: '*%%# 0X*' =                *%# 0X*\n", test_vals[i], test_vals[i]);
        custom = ft_printf("Ft: '*%%# 0X*' =                *%# 0X*\n", test_vals[i], test_vals[i]);
        printf("Length: Or = %d, Ft = %d\n\n", original, custom);
    }

    printf("\nTest : 96\n");
    for (int i = 0; i < test_count; i++) {
        original = printf("Or: '*%%# 4X*' =                *%# 4X*\n", test_vals[i], test_vals[i]);
        custom = ft_printf("Ft: '*%%# 4X*' =                *%# 4X*\n", test_vals[i], test_vals[i]);
        printf("Length: Or = %d, Ft = %d\n\n", original, custom);
    }// Exemples de variables pour les tests

    // Test des valeurs limites pour les conversions en hexadécimal
    printf("\nTest : 57\n");
    printf("Or = UINT_MAX en hexa: *%x*, en HEXA: *%X*\n", UINT_MAX, UINT_MAX);
    ft_printf("Ft = UINT_MAX en hexa: *%x*, en HEXA: *%X*\n\n", UINT_MAX, UINT_MAX);

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

    printf("\nTest : 060\n");
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

    printf("\nTest : 070\n");
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

    printf("\nTest : 080\n");
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

    printf("\nTest : 090\n");
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

    printf("\nTest : 100\n");
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

    printf("\nTest : 110\n");
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

    printf("\nTest : 120\n");
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

    printf("\nTest : 130\n");
	result_Or = printf("OR :%%d, %%+d, %%-d, %% d, %%.d, %%0d, %%15d, %%+15d, %%-15d, %%.15d,  = *%d*, *%+d*, *%-d*, *% d*, *%.d*, *%0d*, *%15d*, *%+15d, *%-15d*, %.15d\n", n, n, n, n, n, n, n, n, n, n);
	result_Ft = ft_printf("FT :%%d, %%+d, %%-d, %% d, %%.d, %%0d, %%15d, %%+15d, %%-15d, %%.15d,  = *%d*, *%+d*, *%-d*, *% d*, *%.d*, *%0d*, *%15d*, *%+15d, *%-15d*, %.15d\n", n, n, n, n, n, n, n, n, n, n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);

    printf("\nTest : 1\n");
    original_return = printf("Or :   |% i|\n", 42);
    ft_return = ft_printf("Ft :   |% i|\n", 42);
    printf("Or: %d\nFT: %d\n\n", original_return, ft_return);


    printf("\nTest : 2\n");
    original_return = printf("Or :   |%+i|\n", 42);
    ft_return = ft_printf("Ft :   |%+i|\n", 42);
    printf("Or: %d\nFT: %d\n\n", original_return, ft_return);


    printf("\nTest : 3\n");
    original_return = printf("Or :   |%-10i|\n", 42);
    ft_return = ft_printf("Ft :   |%-10i|\n", 42);
    printf("Or: %d\nFT: %d\n\n", original_return, ft_return);


    printf("\nTest : 4\n");
    original_return = printf("Or :   |%010i|\n", 42);
    ft_return = ft_printf("Ft :   |%010i|\n", 42);
    printf("Or: %d\nFT: %d\n\n", original_return, ft_return);

    printf("\nTest : 5\n");
    original_return = printf("Or :   |%10i|\n", 42);
    ft_return = ft_printf("Ft :   |%10i|\n", 42);
    printf("Or: %d\nFT: %d\n\n", original_return, ft_return);

    printf("\nTest : 6\n");
    original_return = printf("Or :   |%.5i|\n", 42);
    ft_return = ft_printf("Ft :   |%.5i|\n", 42);
    printf("Or: %d\nFT: %d\n\n", original_return, ft_return);

    printf("\nTest : 7\n");
    original_return = printf("Or :   |% 0+-10.5i|\n", 42);
    ft_return = ft_printf("Ft :   |% 0+-10.5i|\n", 42);
    printf("Or: %d\nFT: %d\n\n", original_return, ft_return);

    printf("\nTest : 8\n");
    original_return = printf("Or :   |%+10i|\n", INT_MAX);
    ft_return = ft_printf("Ft :   |%+10i|\n", INT_MAX);
    printf("Or: %d\nFT: %d\n\n", original_return, ft_return);

    printf("\nTest : 9\n");
    original_return = printf("Or :   |%-10i|\n", INT_MIN);
    ft_return = ft_printf("Ft :   |%-10i|\n", INT_MIN);
    printf("Or: %d\nFT: %d\n\n", original_return, ft_return);

    printf("\nTest : 140\n");
    original_return = printf("Or :   |% i|\n", 0);
    ft_return = ft_printf("Ft :   |% i|\n", 0);
    printf("Or: %d\nFT: %d\n\n", original_return, ft_return);

    printf("\nTest : 11\n");
    original_return = printf("Or :   |%+i|\n", -42);
    ft_return = ft_printf("Ft :   |%+i|\n", -42);
    printf("Or: %d\nFT: %d\n\n", original_return, ft_return);

    printf("\nTest : 12\n");
    original_return = printf("Or :   |% i|\n", -42);
    ft_return = ft_printf("Ft :   |% i|\n", -42);
    printf("Or: %d\nFT: %d\n\n", original_return, ft_return);

    printf("\nTest : 13\n");
    original_return = printf("Or :   |%010i|\n", -42);
    ft_return = ft_printf("Ft :   |%010i|\n", -42);
    printf("Or: %d\nFT: %d\n\n", original_return, ft_return);

    printf("\nTest : 14\n");
    original_return = printf("Or :   |%.5i|\n", -42);
    ft_return = ft_printf("Ft :   |%.5i|\n", -42);
    printf("Or: %d\nFT: %d\n\n", original_return, ft_return);

    printf("\nTest : 15\n");
    original_return = printf("Or :   |%10.5i|\n", 42);
    ft_return = ft_printf("Ft :   |%10.5i|\n", 42);
    printf("Or: %d\nFT: %d\n\n", original_return, ft_return);

    printf("\nTest : 16\n");
    original_return = printf("Or :   |%-10.5i|\n", 42);
    ft_return = ft_printf("Ft :   |%-10.5i|\n", 42);
    printf("Or: %d\nFT: %d\n\n", original_return, ft_return);

    printf("\n\nTest : 17\n");
    original_return = printf("Or :   |%i|\n", -2147483648 - 1);
    ft_return = ft_printf("Ft :   |%i|\n", -2147483648 - 1);
    printf("Or: %d\nFT: %d\n\n", original_return, ft_return);

    printf("\nTest : 18\n");
    original_return = printf("Or :   |%.10i|\n", 0);
    ft_return = ft_printf("Ft :   |%.10i|\n", 0);
    printf("Or: %d\nFT: %d\n\n", original_return, ft_return);

    printf("\nTest : 19\n");
    original_return = printf("Or :   |%10.0i|\n", 0);
    ft_return = ft_printf("Ft :   |%10.0i|\n", 0);
    printf("Or: %d\nFT: %d\n\n", original_return, ft_return);

    printf("\nTest : 150\n");
    original_return = printf("Or :   |%010.5i|\n", -42);
    ft_return = ft_printf("Ft :   |%010.5i|\n", -42);
    printf("Or: %d\nFT: %d\n\n", original_return, ft_return);

    printf("\nTest : 21\n");
    original_return = printf("Or :   |% +i|\n", 42);
    ft_return = ft_printf("Ft :   |% +i|\n", 42);
    printf("Or: %d\nFT: %d\n\n", original_return, ft_return);

    printf("\nTest : 22\n");
    original_return = printf("Or :   |% +i|\n", -42);
    ft_return = ft_printf("Ft :   |% +i|\n", -42);
    printf("Or: %d\nFT: %d\n\n", original_return, ft_return);

    printf("\nTest : 23\n");
    original_return = printf("Or :   |%-+10i|\n", 42);
    ft_return = ft_printf("Ft :   |%-+10i|\n", 42);
    printf("Or: %d\nFT: %d\n\n", original_return, ft_return);

    printf("\nTest : 24\n");
    original_return = printf("Or :   |%0+10i|\n", -42);
    ft_return = ft_printf("Ft :   |%0+10i|\n", -42);
    printf("Or: %d\nFT: %d\n\n", original_return, ft_return);

    printf("\nTest : 25\n");
    original_return = printf("Or :   |%-10.5i|\n", -42);
    ft_return = ft_printf("Ft :   |%-10.5i|\n", -42);
    printf("Or: %d\nFT: %d\n\n", original_return, ft_return);

    printf("\nTest : 26\n");
    original_return = printf("Or :   |%.0i|\n", 0);
    ft_return = ft_printf("Ft :   |%.0i|\n", 0);
    printf("Or: %d\nFT: %d\n\n", original_return, ft_return);

    printf("\nTest : 27\n");
    original_return = printf("Or :   |%-10i|\n", 42);
    ft_return = ft_printf("Ft :   |%-10i|\n", 42);
    printf("Or: %d\nFT: %d\n\n", original_return, ft_return);

    printf("\nTest : 28\n");
    original_return = printf("Or :   |%i|\n", 2147483647);
    ft_return = ft_printf("Ft :   |%i|\n", 2147483647);
    printf("Or: %d\nFT: %d\n\n", original_return, ft_return);

    printf("\nTest : 29\n");
    original_return = printf("Or :   |%i|\n", -2147483648);
    ft_return = ft_printf("Ft :   |%i|\n", -2147483648);
    printf("Or: %d\nFT: %d\n\n", original_return, ft_return);

    printf("\nTest : 160\n");
    original_return = printf("Or :   |%-0+10i|\n", 42);
    ft_return = ft_printf("Ft :   |%-0+10i|\n", 42);
    printf("Or: %d\nFT: %d\n\n", original_return, ft_return);

    printf("\nTest : 31\n");
    original_return = printf("Or :   |%0-+10.5i|\n", 42);
    ft_return = ft_printf("Ft :   |%0-+10.5i|\n", 42);
    printf("Or: %d\nFT: %d\n\n", original_return, ft_return);

    printf("\nTest : 32\n");
    original_return = printf("Or :   |%.10i|\n", 42);
    ft_return = ft_printf("Ft :   |%.10i|\n", 42);
    printf("Or: %d\nFT: %d\n\n", original_return, ft_return);

    // Assure-toi que tous les tests affichent à la fois le résultat de printf et de ft_printf, ainsi que le nombre de caractères retournés par chaque fonction pour faciliter la comparaison et le débogage.

    printf("\nTest : 33\n");
    original_return = printf("Or :   |%0- 10.5i|\n", 42);
    ft_return = ft_printf("Ft :   |%0- 10.5i|\n", 42);
    printf("Or: %d\nFT: %d\n\n", original_return, ft_return);

    printf("\nTest : 34\n");
    original_return = printf("Or :   |%+i|\n", 0);
    ft_return = ft_printf("Ft :   |%+i|\n", 0);
    printf("Or: %d\nFT: %d\n\n", original_return, ft_return);

    printf("\nTest : 35\n");
    original_return = printf("Or :   |%.20i|\n", 42);
    ft_return = ft_printf("Ft :   |%.20i|\n", 42);
    printf("Or: %d\nFT: %d\n\n", original_return, ft_return);

    printf("\nTest : 36\n");
    original_return = printf("Or :   |%0+- 20.10i|\n", -42);
    ft_return = ft_printf("Ft :   |%0+- 20.10i|\n", -42);
    printf("Or: %d\nFT: %d\n\n", original_return, ft_return);

    printf("\nTest : 37\n");
    original_return = printf("Or :   |%#i|\n", 42);
    ft_return = ft_printf("Ft :   |%#i|\n", 42);
    printf("Or: %d\nFT: %d\n\n", original_return, ft_return);

    printf("\nTest : 38\n");
    original_return = printf("Or :   |%i|\n", 2147483647);
    ft_return = ft_printf("Ft :   |%i|\n", 2147483647);
    printf("Or: %d\nFT: %d\n\n", original_return, ft_return);

    printf("\nTest : 39\n");
    original_return = printf("Or :   |%i|\n", -2147483648);
    ft_return = ft_printf("Ft :   |%i|\n", -2147483648);
    printf("Or: %d\nFT: %d\n\n", original_return, ft_return);

    printf("\nTest : 170\n");
    original_return = printf("Or :   |%.20i|\n", 42);
    ft_return = ft_printf("Ft :   |%.20i|\n", 42);
    printf("Or: %d\nFT: %d\n\n", original_return, ft_return);

     // Test des valeurs limites pour les conversions entières
    printf("\nTest : 56\n");
    printf("Or = INT_MAX: *%d*, INT_MIN: *%d*\n", INT_MAX, INT_MIN);
    ft_printf("Ft = INT_MAX: *%d*, INT_MIN: *%d*\n\n", INT_MAX, INT_MIN);
    printf("Or = UINT_MAX: *%u*\n", UINT_MAX);
    ft_printf("Ft = UINT_MAX: *%u*\n\n", UINT_MAX);

// Assure-toi de vérifier si ta fonction peut gérer correctement chaque cas.

    printf("\nTest : 41\n");
    original_return = printf("Or :   |% 0+-#10.5d|\n", 42);
    ft_return = ft_printf("Ft :   |% 0+-#10.5d|\n", 42);
    printf("Or: %d\nFT: %d\n\n", original_return, ft_return);

    printf("\nTest : 42\n");
    original_return = printf("Or :   |% 0+-#10.5d|\n", -42);
    ft_return = ft_printf("Ft :   |% 0+-#10.5d|\n", -42);
    printf("Or: %d\nFT: %d\n\n", original_return, ft_return);


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

    printf("\nTest : 180\n");
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

    printf("\nTest : 190\n");
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

    printf("\nTest : 200\n");
    printf("\n\nOr:     *%%p* = *%p*\n", 0);
    ft_printf("Ft:     *%%p* = *%p*\n\n", 0);

    printf("\nTest : 98\n");
    printf("Or:     *%%p* = *%p*\n", ptr_entier);
    ft_printf("Ft:     *%%p* = *%p*\n\n", ptr_entier);

    printf("\nTest : 110\n");
    printf("Or:     *%% p* = *% p*\n", ptr_entier);
    ft_printf("Ft:     *%% p* = *% p*\n\n", ptr_entier);

    printf("\nTest : 100\n");
    printf("Or:     *%% 20p* = *% 20p*\n", ptr_entier);
    ft_printf("Ft:     *%% 20p* = *% 20p*\n\n", ptr_entier);

    printf("\nTest : 101\n");
    printf("Or:    *%%-p* = *%-p*\n", ptr_entier);
    ft_printf("Ft:    *%%-p* = *%-p*\n\n", ptr_entier);
    
    printf("\nTest : 102\n");
    printf("Or:    *%%+p* = *%+p*\n", ptr_entier);
    ft_printf("Ft:    *%%+p* = *%+p*\n\n", ptr_entier);
    
    printf("\nTest : 103\n");
    printf("Or:    *%%#p* = *%#p*\n", ptr_entier);
    ft_printf("Ft:    *%%#p* = *%#p*\n\n", ptr_entier);

    printf("\nTest : 104\n");    
    printf("Or:   *%%20p* = *%20p*\n", ptr_entier);
    ft_printf("Ft:   *%%20p* = *%20p*\n\n", ptr_entier);
    
    printf("\nTest : 105\n");
    printf("Or:  *%%.20p* = *%.20p*\n", ptr_entier);
    ft_printf("Ft:  *%%.20p* = *%.20p*\n\n", ptr_entier);
    
    printf("\nTest : 106\n");
    printf("Or:*%%20.19p* = *%20.19p*\n", ptr_entier);
    ft_printf("Ft:*%%20.19p* = *%20.19p*\n\n", ptr_entier);

    printf("\nTest : 107\n");
    printf("Or:  *%%-20p* = *%-20p*\n", ptr_entier);
    ft_printf("Ft:  *%%-20p* = *%-20p*\n\n", ptr_entier);
    
    printf("\nTest : 108\n");
    printf("Or: *%%-.20p* = *%-.20p*\n", ptr_entier);
    ft_printf("Ft: *%%-.20p* = *%-.20p*\n\n", ptr_entier);
    
    printf("\nTest : 109\n");
    printf("Or: *%%0p* = *%0p*\n", ptr_entier);
    ft_printf("Ft: *%%0p* = *%0p*\n\n", ptr_entier);
   
    printf("\nTest : 110\n");
    printf("Or:  *%%020p* = *%020p*\n", ptr_entier);
    ft_printf("Ft:  *%%020p* = *%020p*\n\n", ptr_entier);

    printf("\nTest : 111\n");
    printf("Or: *%%0.20p* = *%0.20p*\n", ptr_entier);
    ft_printf("Ft: *%%0.20p* = *%0.20p*\n\n", ptr_entier);
    
    
    // Tests de base pour %p
    printf("\nTest : 112\n");
    printf("Or: '*%%p*' = *%p*\n", (void*)ptr_entier);
    ft_printf("Ft: '*%%p*' = *%p*\n\n", (void*)ptr_entier);

    printf("\nTest : 113\n");
    printf("Or: Entier '*%%p*', Caractere '*%%p*', Flottant '*%%p*', Tableau '*%%p*'\n",
           (void*)ptr_entier, (void*)ptr_caractere, (void*)ptr_flottant, (void*)ptr_tableau);
    ft_printf("Ft: Entier '*%%p*', Caractere '*%%p*', Flottant '*%%p*', Tableau '*%%p*'\n\n",
              (void*)ptr_entier, (void*)ptr_caractere, (void*)ptr_flottant, (void*)ptr_tableau);

    printf("\nTest : 114\n");
    printf("Or: '*%%p*' = *%p*\n", ptr_null);
    ft_printf("Ft: '*%%p*' = *%p*\n\n", ptr_null);

    // Tests avec largeur de champs
    printf("\nTest : 115\n");
    printf("Or: '*%%20p*' = *%20p*\n", (void*)ptr_entier);
    ft_printf("Ft: '*%%20p*' = *%20p*\n\n", (void*)ptr_entier);

    printf("\nTest : 116\n");
    printf("Or: '*%%-20p*' = *%-20p*\n", (void*)ptr_entier);
    ft_printf("Ft: '*%%-20p*' = *%-20p*\n\n", (void*)ptr_entier);
 
    printf("\nTest : 117\n");
    printf("Or: 'Texte avant %p et texte après'\n", (void*)ptr_entier);
    ft_printf("Ft: 'Texte avant %p et texte après'\n\n", (void*)ptr_entier);
    
    printf("\nTest : 118\n");
    void maFonction() {}
    printf("Or: Fonction '%p'\n", (void*)&maFonction);
    ft_printf("Ft: Fonction '%p'\n\n", (void*)&maFonction);
    
    printf("\nTest : 119\n");
    printf("Or: '%p %p %p'\n", (void*)ptr_entier, (void*)ptr_caractere, (void*)ptr_tableau);
    ft_printf("Ft: '%p %p %p'\n\n", (void*)ptr_entier, (void*)ptr_caractere, (void*)ptr_tableau);

    printf("\nTest : 120\n");
    printf("Or: Entier '%d', Pointeur '%p'\n", entier, (void*)ptr_entier);
    ft_printf("Ft: Entier '%d', Pointeur '%p'\n\n", entier, (void*)ptr_entier);
   
    printf("\nTest : 121\n");
    int **ptr_ptr_entier = &ptr_entier;
    printf("Or: Pointeur vers pointeur '%p'\n", (void*)ptr_ptr_entier);
    ft_printf("Ft: Pointeur vers pointeur '%p'\n\n", (void*)ptr_ptr_entier);
    
    void fonctionSansRetourNiArguments() {}
    int fonctionAvecRetourEtSansArguments() { return 0; }
    char *fonctionAvecRetourEtAvecArguments(int a, char b) { return NULL; }
    
    printf("\nTest : 122\n");
    printf("Or: Fonction sans retour ni arguments '%p'\n", (void*)&fonctionSansRetourNiArguments);
    ft_printf("Ft: Fonction sans retour ni arguments '%p'\n\n", (void*)&fonctionSansRetourNiArguments);
   
    printf("\nTest : 123\n");
    printf("Or: Fonction avec retour et sans arguments '%p'\n", (void*)&fonctionAvecRetourEtSansArguments);
    ft_printf("Ft: Fonction avec retour et sans arguments '%p'\n\n", (void*)&fonctionAvecRetourEtSansArguments);

    printf("\nTest : 124\n");    
    printf("Or: Fonction avec retour et avec arguments '%p'\n", (void*)&fonctionAvecRetourEtAvecArguments);
    ft_printf("Ft: Fonction avec retour et avec arguments '%p'\n\n", (void*)&fonctionAvecRetourEtAvecArguments);

    struct MaStructure { int entier; char caractere; };
    union MonUnion { int entier; char caractere; };
    
    struct MaStructure exempleStructure;
    union MonUnion exempleUnion;

    printf("\nTest : 125\n");
    printf("Or: Structure '%p'\n", (void*)&exempleStructure);
    ft_printf("Ft: Structure '%p'\n\n", (void*)&exempleStructure);

    printf("\nTest : 126\n");    
    printf("Or: Union '%p'\n", (void*)&exempleUnion);
    ft_printf("Ft: Union '%p'\n\n", (void*)&exempleUnion);
    
    int *tableauDePointeurs[3] = {&entier, ptr_tableau, NULL};

    printf("\nTest : 127\n");
    printf("Or: Tableau de pointeurs '%p %p %p'\n", (void*)tableauDePointeurs[0], (void*)tableauDePointeurs[1], (void*)tableauDePointeurs[2]);
    ft_printf("Ft: Tableau de pointeurs '%p %p %p'\n\n", (void*)tableauDePointeurs[0], (void*)tableauDePointeurs[1], (void*)tableauDePointeurs[2]);
    
    int ***ptr_ptr_ptr_entier = &ptr_ptr_entier;

    printf("\nTest : 128\n");   
    printf("Or: Pointeur vers pointeur de pointeur '%p'\n", (void*)ptr_ptr_ptr_entier);
    ft_printf("Ft: Pointeur vers pointeur de pointeur '%p'\n\n", (void*)ptr_ptr_ptr_entier);

    printf("\nTest : 129\n");    
    printf("Or: 'Texte %p texte %p texte'\n", (void*)ptr_entier, (void*)ptr_caractere);
    ft_printf("Ft: 'Texte %p texte %p texte'\n\n", (void*)ptr_entier, (void*)ptr_caractere);

    printf("\nTest : 130\n");    
    printf("Or: '%%p avec texte avant et après %p'\n", (void*)ptr_tableau);
    ft_printf("Ft: '%%p avec texte avant et après %p'\n\n", (void*)ptr_tableau);

    printf("\nTest : 131\n");    
    int locale = 10;
    printf("Or: Adresse d'une variable locale '%p'\n", (void*)&locale);
    ft_printf("Ft: Adresse d'une variable locale '%p'\n\n", (void*)&locale);
    
    struct Exemple {
        int valeur;
        int (*fonction)(int);
    };
    
    printf("\nTest : 132\n"); 
    struct Exemple exemple;
    printf("Or: Pointeur sur membre de structure '%p'\n", (void*)&exemple.valeur);
    ft_printf("Ft: Pointeur sur membre de structure '%p'\n\n", (void*)&exemple.valeur);

    printf("\nTest : 133\n");     
    int variableGlobale = 42;
    printf("Or: Adresse d'une variable globale '%p'\n", (void*)&variableGlobale);
    ft_printf("Ft: Adresse d'une variable globale '%p'\n\n", (void*)&variableGlobale);

    printf("\nTest : 134\n");     
    int *ptrDynamique = malloc(sizeof(int));
    printf("Or: Pointeur vers mémoire allouée dynamiquement '%p'\n", (void*)ptrDynamique);
    ft_printf("Ft: Pointeur vers mémoire allouée dynamiquement '%p'\n\n", (void*)ptrDynamique);
    free(ptrDynamique);

    printf("\nTest : 135\n");    
    printf("Or: Pointeur avec zero padding '%020p'\n", (void*)ptr_entier);
    ft_printf("Ft: Pointeur avec zero padding '%020p'\n\n", (void*)ptr_entier);

    printf("\nTest : 136\n");  
    double nombre = 42.42;
    printf("Or: Conversion explicite de type '%p'\n", (void*)&nombre);
    ft_printf("Ft: Conversion explicite de type '%p'\n\n", (void*)&nombre);
    
    struct ComplexeStruct {
        char id[10];
        int data[5];
    };
    
    union ComplexeUnion {
        struct ComplexeStruct cs;
        char nom[20];
    };
    
    struct ComplexeStruct cs;
    union ComplexeUnion cu;

    printf("\nTest : 137\n");     
    printf("Or: Structure complexe '%p'\n", (void*)&cs);
    ft_printf("Ft: Structure complexe '%p'\n\n", (void*)&cs);
    printf("\nTest : 138\n");     
    printf("Or: Union complexe '%p'\n", (void*)&cu);
    ft_printf("Ft: Union complexe '%p'\n\n", (void*)&cu);
    
    printf("\nTest : 139\n");
    printf("Or: Pointeur avec padding et alignement gauche '%-20p'\n", (void*)ptr_entier);
    ft_printf("Ft: Pointeur avec padding et alignement gauche '%-20p'\n\n", (void*)ptr_entier);
    
    printf("\nTest : 140\n");
    printf("Or: Pointeur avec padding de zéros '%020p'\n", (void*)ptr_entier);
    ft_printf("Ft: Pointeur avec padding de zéros '%020p'\n\n", (void*)ptr_entier);
 
    printf("\nTest : 141\n");
    char **ptr_ptr_char = &ptr_caractere;
    printf("Or: Pointeur vers pointeur de char '%p'\n", (void*)ptr_ptr_char);
    ft_printf("Ft: Pointeur vers pointeur de char '%p'\n\n", (void*)ptr_ptr_char);
  
    printf("\nTest : 142\n");  
    int (*ptr_fonction)(void) = fonctionAvecRetourEtSansArguments;
    printf("Or: Pointeur vers fonction '%p'\n", (void*)ptr_fonction);
    ft_printf("Ft: Pointeur vers fonction '%p'\n\n", (void*)ptr_fonction);
 
    printf("\nTest : 143\n");    
    volatile int vi = 10;
    printf("Or: Pointeur vers variable volatile '%p'\n", (void*)&vi);
    ft_printf("Ft: Pointeur vers variable volatile '%p'\n\n", (void*)&vi);
   
    printf("\nTest : 144\n");  
    printf("Or: Pointeur vers pointeur de char '%p'\n", (void*)ptr_ptr_char);
    ft_printf("Ft: Pointeur vers pointeur de char '%p'\n\n", (void*)ptr_ptr_char);
    
    printf("\nTest : 145\n"); 
    ptr_fonction = fonctionAvecRetourEtSansArguments;
    printf("Or: Pointeur vers fonction '%p'\n", (void*)ptr_fonction);
    ft_printf("Ft: Pointeur vers fonction '%p'\n\n", (void*)ptr_fonction);
   
    printf("\nTest : 146\n");  
    // Test avec un pointeur sur une fonction ayant plusieurs arguments
    void *ptr_fonction_multiple_args = (void*)malloc(sizeof(int));
    printf("Or: Pointeur vers fonction avec plusieurs arguments '%p'\n", ptr_fonction_multiple_args);
    ft_printf("Ft: Pointeur vers fonction avec plusieurs arguments '%p'\n\n", ptr_fonction_multiple_args);
  
    printf("\nTest : 147\n");
    // Test avec un pointeur sur une chaîne de caractères littérale
    const char *ptr_chaine = "Exemple de chaîne littérale";
    printf("Or: Pointeur vers chaîne littérale '%p'\n", (void*)ptr_chaine);
    ft_printf("Ft: Pointeur vers chaîne littérale '%p'\n\n", (void*)ptr_chaine);
    
    printf("\nTest : 148\n"); 
    // Test avec un pointeur sur un pointeur vers une variable statique
    static int var_statique = 42;
    int *ptr_var_statique = &var_statique;
    int **ptr_ptr_var_statique = &ptr_var_statique;
    printf("Or: Pointeur vers pointeur vers variable statique '%p'\n", (void*)ptr_ptr_var_statique);
    ft_printf("Ft: Pointeur vers pointeur vers variable statique '%p'\n\n", (void*)ptr_ptr_var_statique);
  
    printf("\nTest : 149\n");   
    // Test avec un pointeur sur un tableau de caractères statiques
    static char tableau_statique[10] = "Bonjour";
    printf("Or: Pointeur vers tableau statique '%p'\n", (void*)tableau_statique);
    ft_printf("Ft: Pointeur vers tableau statique '%p'\n\n", (void*)tableau_statique);
  
    printf("\nTest : 150\n");   
    // Test avec un pointeur vers un type volatile
    volatile int var_volatile = 10;
    printf("Or: Pointeur vers variable volatile '%p'\n", (void*)&var_volatile);
    ft_printf("Ft: Pointeur vers variable volatile '%p'\n\n", (void*)&var_volatile);
  
    printf("\nTest : 151\n");   
    // Test avec un pointeur vers un type const
    const int var_const = 100;
    printf("Or: Pointeur vers variable const '%p'\n", (void*)&var_const);
    ft_printf("Ft: Pointeur vers variable const '%p'\n\n", (void*)&var_const);
   
    printf("\nTest : 152\n");    
    // Test d'affichage de l'adresse d'une variable automatique (locale) d'une autre fonction
    int (*fonction_locale)(void) = fonctionAvecRetourEtSansArguments;
    printf("Or: Pointeur vers fonction locale '%p'\n", (void*)fonction_locale);
    ft_printf("Ft: Pointeur vers fonction locale '%p'\n\n", (void*)fonction_locale);
  
    printf("\nTest : 153\n"); 
    // Test avec un formatage complexe incluant des pointeurs
    printf("Or: '%-20p*%020p*%p'\n", (void*)ptr_chaine, (void*)&var_const, 10, (void*)&var_volatile);
    ft_printf("Ft: '%-20p*%020p*%p'\n\n", (void*)ptr_chaine, (void*)&var_const, 10, (void*)&var_volatile);

    free(ptr_fonction_multiple_args);

original_return = printf("Or :   |%p|\n", null_p);
    ft_return = ft_printf("Ft :   |%p|\n", null_p);
    printf("Or: %d\nFT: %d\n\n", original_return, ft_return); 

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

//------------------------------------------------------------------------------------------------------------------------------------------------------------------------
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


}

    void fonctionSansRetourNiArguments() {}
    int fonctionAvecRetourEtSansArguments() { return 0; }
    char *fonctionAvecRetourEtAvecArguments(int a, char b) { return NULL; }
    

    