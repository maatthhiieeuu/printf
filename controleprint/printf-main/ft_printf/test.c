#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <limits.h>
#include "libft/libft.h"
#include "../obligatory/printf/ft_printf.h"

int main(void) {
    int ret_printf, ret_ft_printf;
    char *str = "Test";
    char *null_ptr = NULL;
/*
    // Tests simples sans flags
    printf("=== Tests 1 ===\n");
    ret_printf = printf("Char : *%c*, Chaine : *%s*, Pointeur : *%p*, Entier : *%d*, Non signé : *%u*, Hex minuscule : *%x*, Hex majuscule : *%X*, Pourcentage : *%%*\n", 'A', "test", str, 42, 42, 42, 42);
    ret_ft_printf = ft_printf("Char : *%c*, Chaine : *%s*, Pointeur : *%p*, Entier : *%d*, Non signé : *%u*, Hex minuscule : *%x*, Hex majuscule : *%X*, Pourcentage : *%%*\n", 'A', "test", str, 42, 42, 42, 42);
    if (ret_printf != ret_ft_printf) printf("Erreur de correspondance des valeurs de retour pour le test simple sans flags.\n\n");

    // Tests des cas spéciaux
    printf("\n=== Tests 2 ===\n");
    ret_printf = printf("0 : *%d*, INT_MIN : *%d*, Chaine vide : *%s*, Pointeur NULL : *%p*\n", 0, INT_MIN, "", null_ptr);
    ret_ft_printf = ft_printf("0 : *%d*, INT_MIN : *%d*, Chaine vide : *%s*, Pointeur NULL : *%p*\n\n", 0, INT_MIN, "", null_ptr);

    // Test avec plusieurs arguments et conversions
    printf("\n=== Test 3 ===\n");
    ret_printf = printf("Valeurs multiples : *%d* *%s* *%x* *%X* *%%*\n", 123, "abcd", 456, 789);
    ret_ft_printf = ft_printf("Valeurs multiples : *%d* *%s* *%x* *%X* *%%*\n\n", 123, "abcd", 456, 789);

    // Tests des flags dans une phrase
    printf("\n=== Tests 4 ===\n");
    ret_printf = printf("Texte avec des flags, comme -123 et zéro *%05d*, au milieu.\n", 456);
    ret_ft_printf = ft_printf("Texte avec des flags, comme -123 et zéro *%05d*, au milieu.\n\n", 456);

    // Tests fous avec vérification des valeurs de retour
    printf("\n=== Tests 5 ===\n");
    ret_printf = printf("Combinaison : *%d* *%s* *%p* *%x* *%X* *%%*\n", INT_MAX, "combi", str, 255, 255);
    ret_ft_printf = ft_printf("Combinaison : *%d* *%s* *%p* *%x* *%X* *%%*\n", INT_MAX, "combi", str, 255, 255);
    if (ret_printf != ret_ft_printf) printf("Erreur de correspondance des valeurs de retour pour le test combinaison.\n\n");

    // Tests des conversions identiques à la suite
    printf("\n=== Tests des 6 ===\n");
    ret_printf = printf("Identiques : *%d%d%d*\n", 42, 42, 42);
    ret_ft_printf = ft_printf("Identiques : *%d%d%d*\n\n", 42, 42, 42);

    // Partie bonus : gestion simple des flags
    printf("\n=== Partie bonus : Tests 7 ===\n");
    ret_printf = printf("Test flag '.' avec précision variable : *%.5d*, *%.3s*\n", 42, "abcdef");
    ret_ft_printf = ft_printf("Test flag '.' avec précision variable : *%.5d*, *%.3s*\n\n", 42, "abcdef");
    ret_printf = printf("Test flag '-' pour aligner à gauche : *%-5d*\n", 42);
    ret_ft_printf = ft_printf("Test flag '-' pour aligner à gauche : *%-5d*\n\n", 42);
    ret_printf = printf("Test flag '0' pour padding : *%05d*, *%010d*\n", 42, -42);
    ret_ft_printf = ft_printf("Test flag '0' pour padding : *%05d*, *%010d*\n\n", 42, -42);

    // Tests avancés des flags et combinaisons
    printf("\n=== Tests 8 ===\n");
    ret_printf = printf("Combi avancée : *%+-5d*, *%#x*, *% .5s*\n", 42, 255, "abcdef");
    ret_ft_printf = ft_printf("Combi avancée : *%+-5d*, *%#x*, *% .5s*\n\n", 42, 255, "abcdef");

    // #, +, espace
    printf("\n=== Tests 9 ===\n");
    ret_printf = printf("Flag '#' avec hexa : *%#x*, *%#X*\n", 255, 255);
    ret_ft_printf = ft_printf("Flag '#' avec hexa : *%#x*, *%#X*\n\n", 255, 255);
    ret_printf = printf("Flag '+' avec signe : *%+d*, *%+d*\n", 42, -42);
    ret_ft_printf = ft_printf("Flag '+' avec signe : *%+d*, *%+d*\n\n", 42, -42);
    ret_printf = printf("Flag ' ' avec espace : *% d*, *% d*\n", 42, -42);
    ret_ft_printf = ft_printf("Flag ' ' avec espace : *% d*, *% d*\n\n", 42, -42);

    // Tests supplémentaires pour les flags au milieu d'une phrase
    printf("\n=== Tests 10 ===\n");
    ret_printf = printf("Ceci est un test avec un entier : *%d*, et un hexa : *%#x*.\n", INT_MAX, 255);
    ret_ft_printf = ft_printf("Ceci est un test avec un entier : *%d*, et un hexa : *%#x*.\n", INT_MAX, 255);
    if (ret_printf != ret_ft_printf) printf("Erreur de correspondance des valeurs de retour pour les flags au milieu d'une phrase.\n\n");

    // Tests pour des combinaisons de flags et de conversions
    printf("\n=== Tests 11 ===\n");
    ret_printf = printf("Or = Combi complexe: *%+d*, *% 10d*, *%-10d*, *%.5s*, *%-.5s*, *%05d*\n", 42, -42, 42, "abcdef", "ghijkl", -42);
    ret_ft_printf = ft_printf("Ft = Combi complexe: *%+d*, *% 10d*, *%-10d*, *%.5s*, *%-.5s*, *%05d*\n", 42, -42, 42, "abcdef", "ghijkl", -42);
    if (ret_printf != ret_ft_printf) printf("Erreur de correspondance des valeurs de retour pour les combinaisons complexes de flags et de conversions.\n\n");

    // Tests pour vérifier le comportement des flags '+' et ' ' avec des entiers positifs et négatifs
    printf("\n=== Tests 12 ===\n");
    ret_printf = printf("Positif avec '+': *%+d*, Positif avec ' ': *% d*. Negatif avec '+': *%+d*, Negatif avec ' ': *% d*\n", 42, 42, -42, -42);
    ret_ft_printf = ft_printf("Positif avec '+': *%+d*, Positif avec ' ': *% d*. Negatif avec '+': *%+d*, Negatif avec ' ': *% d*\n", 42, 42, -42, -42);
    if (ret_printf != ret_ft_printf) printf("Erreur de correspondance des valeurs de retour pour les flags '+' et ' '.\n\n");

    // Assurer que tous les tests vérifient la valeur de retour correspond à celle du printf original
    // Cette vérification est illustrée dans les exemples ci-dessus et devrait être appliquée à tous les tests pour une évaluation complète.
    
    // Test des valeurs limites pour les conversions entières
    printf("\n=== Tests 13 ===\n");
    printf("Or = INT_MAX: *%d*, INT_MIN: *%d*\n", INT_MAX, INT_MIN);
    ft_printf("Ft = INT_MAX: *%d*, INT_MIN: *%d*\n\n", INT_MAX, INT_MIN);
    printf("Or = UINT_MAX: *%u*\n", UINT_MAX);
    ft_printf("Ft = UINT_MAX: *%u*\n\n", UINT_MAX);

    // Test des valeurs limites pour les conversions en hexadécimal
    printf("Or = UINT_MAX en hexa: *%x*, en HEXA: *%X*\n", UINT_MAX, UINT_MAX);
    ft_printf("Ft = UINT_MAX en hexa: *%x*, en HEXA: *%X*\n\n", UINT_MAX, UINT_MAX);

    // Combinaisons complexes de flags
    printf("\n=== Tests 14 ===\n");
    ft_printf("Ft = Combi complexe avec largeur et précision: *%+-10.5d*, *%#08X*\n", 12345, 255);
    printf("Or = Combi complexe avec largeur et précision: *%+-10.5d*, *%#08X*\n\n", 12345, 255);

    // Précision et largeur pour les chaînes de caractères et les nombres
    printf("\n=== Tests 15 ===\n");
    printf("Or = Précision avec chaîne: *%.5s*, Largeur avec entier: *%10d*\n", "abcdefg", 123);
    ft_printf("Ft = Précision avec chaîne: *%.5s*, Largeur avec entier: *%10d*\n\n", "abcdefg", 123);
    printf("Or = Combiné précision et largeur: *%10.5d*\n", 123);
    ft_printf("Ft = Combiné précision et largeur: *%10.5d*\n\n", 123);

    // Comportement des flags '+' et ' ' avec des nombres
    printf("\n=== Tests 16 ===\n");
    printf("Or = Nombre positif avec '+': *%+d*, avec ' ': *% d*\n", 123, 123);
    ft_printf("Ft = Nombre positif avec '+': *%+d*, avec ' ': *% d*\n\n", 123, 123);
    printf("Or = Nombre négatif avec '+': *%+d*, avec ' ': *% d*\n", -123, -123);
    ft_printf("Ft = Nombre négatif avec '+': *%+d*, avec ' ': *% d*\n\n", -123, -123);

    printf("\n=== Test 17 ===\n");
    printf("Or = INT_MAX: *%d*, INT_MIN: *%d*, UINT_MAX: *%u*\n", INT_MAX, INT_MIN, UINT_MAX);
    ft_printf("Ft = INT_MAX: *%d*, INT_MIN: *%d*, UINT_MAX: *%u*\n\n", INT_MAX, INT_MIN, UINT_MAX);
    printf("Or = Hexa max unsigned int: *%#x*, *%#X*\n", UINT_MAX, UINT_MAX);
    ft_printf("Ft = Hexa max unsigned int: *%#x*, *%#X*\n\n", UINT_MAX, UINT_MAX);

    printf("\n=== Test 18 ===\n");
    printf("Or = Nombre avec flag '+': *%+d* au milieu d'une phrase.\n", 42);
    ft_printf("Ft = Nombre avec flag '+': *%+d* au milieu d'une phrase.\n\n", 42);
    printf("Or = Nombre hexadécimal avec flag '#': *%#x* entouré de texte.\n", 170);
    ft_printf("Ft = Nombre hexadécimal avec flag '#': *%#x* entouré de texte.\n\n", 170);

    printf("\n=== Vérification des valeurs de retour ===\n");
    int len1 = ft_printf("Ft = Test retour: *%d*, *%s*, *%p*\n", 123, "abc", &len1);
    int len2 = printf("Or = Test retour: *%d*, *%s*, *%p*\n", 123, "abc", &len2);
    printf("Ft = printf a retourné %d caractères.\nOr = printf a retourné %d caractères.\n\n", len1, len2);

    printf("\n=== Tests 19 ===\n");
    printf("Or = Mix: *%d*, *%s*, *%+d*, *%#x*, *%10s*\n", INT_MIN, "test", 42, 255, "right");
    ft_printf("Ft = Mix: *%d*, *%s*, *%+d*, *%#x*, *%10s*\n\n", INT_MIN, "test", 42, 255, "right");

    printf("\n=== Tests 20 ===\n");
    printf("Or = Longue chaîne: *%s*\n", "Ceci est une très très longue chaîne de caractères destinée à tester la capacité de ft_printf à gérer de grands volumes de données.");
    ft_printf("Ft = Longue chaîne: *%s*\n\n", "Ceci est une très très longue chaîne de caractères destinée à tester la capacité de ft_printf à gérer de grands volumes de données.");

    // Test combiné de différents types avec flags
    printf("\n=== Test 24 ===\n");
    printf("Or = Mix: *%+d*, *%u*, *%#x*, *%s*, *%c*, *%p*, *%%*\n", INT_MIN, UINT_MAX, 0xDEADBEEF, "test", 'A', str);
    ft_printf("Ft = Mix: *%+d*, *%u*, *%#x*, *%s*, *%c*, *%p*, *%%*\n\n", INT_MIN, UINT_MAX, 0xDEADBEEF, "test", 'A', str);

    // Test des bordures pour les entiers non signés
	printf("\n=== Test 25 ===\n");
	printf("Or = UINT_MAX: *%u*, 0: *%u*\n", UINT_MAX, 0);
	ft_printf("Ft = UINT_MAX: *%u*, 0: *%u*\n\n", UINT_MAX, 0);

    // Test des combinaisons de flags sur un même type de donnée
	printf("\n=== Test 28 ===\n");
	printf("Or = Combi flags: *%+d*, *% d*, *%0d*, *%-d*, *%.5d*\n", INT_MIN, INT_MIN, INT_MIN, INT_MIN, INT_MIN);
	ft_printf("Ft = Combi flags: *%+d*, *% d*, *%0d*, *%-d*, *%.5d*\n\n", INT_MIN, INT_MIN, INT_MIN, INT_MIN, INT_MIN);

	// Test des combinaisons de flags avec différentes conversions dans une phrase
	printf("\n=== Test 29 ===\n");
	printf("Or = Hexa *%#x* avec zero *%05d* et signe *%+d* dans une phrase.\n", 255, 42, -42);
	ft_printf("Ft = Hexa *%#x* avec zero *%05d* et signe *%+d* dans une phrase.\n\n", 255, 42, -42);

    // Test avec de très longues chaînes de caractères
	printf("\n=== Test 30 ===\n");
	printf("Or = Longue chaîne: *%s*\n", "Ceci est une très longue chaîne de caractères pour tester la capacité de ft_printf à gérer de grands volumes de données sans problème.");
	ft_printf("Ft = Longue chaîne: *%s*\n\n", "Ceci est une très longue chaîne de caractères pour tester la capacité de ft_printf à gérer de grands volumes de données sans problème.");
*/
	// Combinaisons complexes de flags pour les entiers
	printf("Or = Mix: *%+08d*, *%-#10x*, *%+ .5i*\n", INT_MIN, 255, 42);
	ft_printf("Ft = Mix: *%+08d*, *%-#10x*, *%+ .5i*\n\n", INT_MIN, 255, 42);

	// Combinaisons complexes de flags pour les chaînes et les pointeurs
	printf("Or = Chaîne avec précision et largeur: *%-.10s*, Pointeur avec flags: *%#p*\n", "test", &ret_ft_printf);
	ft_printf("Ft = Chaîne avec précision et largeur: *%-.10s*, Pointeur avec flags: *%#p*\n\n", "test", &ret_ft_printf);
/*
	// Longue chaîne de caractères
	printf("Or = Longue chaîne: *%s*\n", "Ceci est une très longue chaîne de caractères pour tester la capacité de ft_printf à gérer des données importantes.");
	ft_printf("Ft = Longue chaîne: *%s*\n\n", "Ceci est une très longue chaîne de caractères pour tester la capacité de ft_printf à gérer des données importantes.");
*/
	printf("\n=== Tests 31 ===\n");
	printf("Or = Mix: *%+08d*, *%-#10x*, *%+ .5i*, *% 10.5u*\n", INT_MIN, 255, -42, UINT_MAX);
	ft_printf("Ft = Mix: *%+08d*, *%-#10x*, *%+ .5i*, *% 10.5u*\n\n", INT_MIN, 255, -42, UINT_MAX);
/*
	printf("\n=== Test 32 ===\n");
	printf("Or = Longue chaîne: *%s*\n", "Ceci est une très longue chaîne de caractères destinée à tester la capacité de ft_printf à gérer de grands volumes de données.");
	ft_printf("Ft = Longue chaîne: *%s*\n\n", "Ceci est une très longue chaîne de caractères destinée à tester la capacité de ft_printf à gérer de grands volumes de données.");
*/
	// Test de combinaisons complexes de flags
	printf("\n=== Test 34 ===\n");
	printf("Or = Mix: *%+08d*, *%-#10x*, *% 10.5u*, *%+-10.5s*\n", INT_MIN, 255, UINT_MAX, "test");
	ft_printf("Ft = Mix: *%+08d*, *%-#10x*, *% 10.5u*, *%+-10.5s*\n\n", INT_MIN, 255, UINT_MAX, "test");

    return 0;
}










/*
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
*/