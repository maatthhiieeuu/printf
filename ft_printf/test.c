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
    result_Ft = ft_printf("Ft = Combi complexe avec largeur et précision: *%+-10.5d*, *%#08X*\n", 12345, 255);
    result_Or = printf("Or = Combi complexe avec largeur et précision: *%+-10.5d*, *%#08X*\n", 12345, 255);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    // Précision et largeur pour les chaînes de caractères et les nombres
    printf("\nTest : 002\n");
    result_Or = printf("Or = Précision avec chaîne: *%.5s*, Largeur avec entier: *%10d*\n", "abcdefg", 123);
    result_Ft = ft_printf("Ft = Précision avec chaîne: *%.5s*, Largeur avec entier: *%10d*\n", "abcdefg", 123);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");
    result_Or = printf("Or = Combiné précision et largeur: *%10.5d*\n", 123);
    result_Ft = ft_printf("Ft = Combiné précision et largeur: *%10.5d*\n", 123);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    // Comportement des flags '+' et ' ' avec des nombres
    printf("\nTest : 003\n");
    result_Or = printf("Or = Nombre positif avec '+': *%+d*, avec ' ': *% d*\n", 123, 123);
    result_Ft = ft_printf("Ft = Nombre positif avec '+': *%+d*, avec ' ': *% d*\n", 123, 123);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");
    result_Or = printf("Or = Nombre négatif avec '+': *%+d*, avec ' ': *% d*\n", -123, -123);
    result_Ft = ft_printf("Ft = Nombre négatif avec '+': *%+d*, avec ' ': *% d*\n", -123, -123);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 004\n");
    result_Or = printf("Or = INT_MAX: *%d*, INT_MIN: *%d*, UINT_MAX: *%u*\n", INT_MAX, INT_MIN, UINT_MAX);
    result_Ft = ft_printf("Ft = INT_MAX: *%d*, INT_MIN: *%d*, UINT_MAX: *%u*\n", INT_MAX, INT_MIN, UINT_MAX);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");
    result_Or = printf("Or = Hexa max unsigned int: *%#x*, *%#X*\n", UINT_MAX, UINT_MAX);
    result_Ft = ft_printf("Ft = Hexa max unsigned int: *%#x*, *%#X*\n", UINT_MAX, UINT_MAX);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 005\n");
    result_Or = printf("Or = Nombre avec flag '+': *%+d* au milieu d'une phrase.\n", 42);
    result_Ft = ft_printf("Ft = Nombre avec flag '+': *%+d* au milieu d'une phrase.\n", 42);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");
    result_Or = printf("Or = Nombre hexadécimal avec flag '#': *%#x* entouré de texte.\n", 170);
    result_Ft = ft_printf("Ft = Nombre hexadécimal avec flag '#': *%#x* entouré de texte.\n", 170);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 006\n");
    result_Ft = ft_printf("Ft = Test retour: *%d*, *%s*, *%p*\n", 123, "abc", &result_Ft);
    result_Or = printf("Or = Test retour: *%d*, *%s*, *%p*\n", 123, "abc", &result_Or);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 007\n");
    result_Or = printf("Or = Mix: *%d*, *%s*, *%+d*, *%#x*, *%10s*\n", INT_MIN, "test", 42, 255, "right");
    result_Ft = ft_printf("Ft = Mix: *%d*, *%s*, *%+d*, *%#x*, *%10s*\n", INT_MIN, "test", 42, 255, "right");
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 008\n");
    result_Or = printf("Or = Longue chaîne: *%s*\n", "Ceci est une très très longue chaîne de caractères destinée à tester la capacité de ft_printf à gérer de grands volumes de données.");
    result_Ft = ft_printf("Ft = Longue chaîne: *%s*\n", "Ceci est une très très longue chaîne de caractères destinée à tester la capacité de ft_printf à gérer de grands volumes de données.");
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    // Test combiné de différents types avec flags
    printf("\nTest : 009\n");
    result_Or = printf("Or = Mix: *%+d*, *%u*, *%#x*, *%s*, *%c*, *%p*, *%%*\n", INT_MIN, UINT_MAX, 0xDEADBEEF, "test", 'A', str);
    result_Ft = ft_printf("Ft = Mix: *%+d*, *%u*, *%#x*, *%s*, *%c*, *%p*, *%%*\n", INT_MIN, UINT_MAX, 0xDEADBEEF, "test", 'A', str);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    // Test des bordures pour les entiers non signés
    printf("\nTest : 010\n");
    result_Or = printf("Or = UINT_MAX: *%u*, 0: *%u*\n", UINT_MAX, 0);
    result_Ft = ft_printf("Ft = UINT_MAX: *%u*, 0: *%u*\n", UINT_MAX, 0);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    // Test des combinaisons de flags sur un même type de donnée
    printf("\nTest : 011\n");
    result_Or = printf("Or = Combi flags: *%+d*, *% d*, *%0d*, *%-d*, *%.5d*\n", INT_MIN, INT_MIN, INT_MIN, INT_MIN, INT_MIN);
    result_Ft = ft_printf("Ft = Combi flags: *%+d*, *% d*, *%0d*, *%-d*, *%.5d*\n", INT_MIN, INT_MIN, INT_MIN, INT_MIN, INT_MIN);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    // Test des combinaisons de flags avec différentes conversions dans une phrase
    printf("\nTest : 012\n");
    result_Or = printf("Or = Hexa *%#x* avec zero *%05d* et signe *%+d* dans une phrase.\n", 255, 42, -42);
    result_Ft = ft_printf("Ft = Hexa *%#x* avec zero *%05d* et signe *%+d* dans une phrase.\n", 255, 42, -42);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    // Test avec de très longues chaînes de caractères
    printf("\nTest : 013\n");
    result_Or = printf("Or = Longue chaîne: *%s*\n", "Ceci est une très longue chaîne de caractères pour tester la capacité de ft_printf à gérer de grands volumes de données sans problème.");
    result_Ft = ft_printf("Ft = Longue chaîne: *%s*\n", "Ceci est une très longue chaîne de caractères pour tester la capacité de ft_printf à gérer de grands volumes de données sans problème.");
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    // Combinaisons complexes de flags pour les entiers
    printf("\nTest : 014\n");
    result_Or = printf("Or = Mix: *%+08d*, *%%-#10x*: *%-#10x*, *%+ .5i*\n", INT_MIN, 255, 42);
    result_Ft = ft_printf("Ft = Mix: *%+08d*, *%%-#10x*: *%-#10x*, *%+ .5i*\n", INT_MIN, 255, 42);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 015\n");
    result_Or = printf("Or = Mix: *%+ .5i*\n", 42);
    result_Ft = ft_printf("Ft = Mix: *%+ .5i*\n", 42);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 016\n");
    result_Or = printf("Or = Pointeur avec flags: *%#p*\n", &ret_ft_printf);
    result_Ft = ft_printf("Ft = Pointeur avec flags: *%#p*\n", &ret_ft_printf);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");
    
    // Combinaisons complexes de flags pour les chaînes et les pointeurs
    printf("\nTest : 017\n");
    result_Or = printf("Or = Chaîne avec précision et largeur: *%-.10s*, Pointeur avec flags: *%#p*\n", "test", &ret_ft_printf);
    result_Ft = ft_printf("Ft = Chaîne avec précision et largeur: *%-.10s*, Pointeur avec flags: *%#p*\n", "test", &ret_ft_printf);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    // Longue chaîne de caractères
    printf("\nTest : 018\n");
    result_Or = printf("Or = Longue chaîne: *%s*\n", "Ceci est une très longue chaîne de caractères pour tester la capacité de ft_printf à gérer des données importantes.");
    result_Ft = ft_printf("Ft = Longue chaîne: *%s*\n", "Ceci est une très longue chaîne de caractères pour tester la capacité de ft_printf à gérer des données importantes.");
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 019\n");
    result_Or = printf("Or = Mix: *%+08d*, *%-#10x*, *%+ .5i*, *% 10.5u*\n", INT_MIN, 255, -42, UINT_MAX);
    result_Ft = ft_printf("Ft = Mix: *%+08d*, *%-#10x*, *%+ .5i*, *% 10.5u*\n", INT_MIN, 255, -42, UINT_MAX);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 020\n");
    result_Or = printf("Or = Longue chaîne: *%s*\n", "Ceci est une très longue chaîne de caractères destinée à tester la capacité de ft_printf à gérer de grands volumes de données.");
    result_Ft = ft_printf("Ft = Longue chaîne: *%s*\n", "Ceci est une très longue chaîne de caractères destinée à tester la capacité de ft_printf à gérer de grands volumes de données.");
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    // Test de combinaisons complexes de flags
    printf("\nTest : 021\n");
    result_Or = printf("Or = Mix: *%+08d*, *%-#10x*, *% 10.5u*, *%+-10.5s*\n", INT_MIN, 255, UINT_MAX, "test");
    result_Ft = ft_printf("Ft = Mix: *%+08d*, *%-#10x*, *% 10.5u*, *%+-10.5s*\n", INT_MIN, 255, UINT_MAX, "test");
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");



	 // Tests simples sans flags
    printf("\nTest : 022\n");
    result_Or = printf("Char : *%c*, Chaine : *%s*, Pointeur : *%p*, Entier : *%d*, Non signé : *%u*, Hex minuscule : *%x*, Hex majuscule : *%X*, Pourcentage : *%%*\n", 'A', "test", str, 42, 42, 42, 42);
    result_Ft = ft_printf("Char : *%c*, Chaine : *%s*, Pointeur : *%p*, Entier : *%d*, Non signé : *%u*, Hex minuscule : *%x*, Hex majuscule : *%X*, Pourcentage : *%%*\n", 'A', "test", str, 42, 42, 42, 42);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    // Tests des cas spéciaux
    printf("\nTest : 023\n");
    result_Or = printf("0 : *%d*, INT_MIN : *%d*, Chaine vide : *%s*, Pointeur NULL : *%p*\n", 0, INT_MIN, "", null_ptr);
    result_Ft = ft_printf("0 : *%d*, INT_MIN : *%d*, Chaine vide : *%s*, Pointeur NULL : *%p*\n", 0, INT_MIN, "", null_ptr);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    // Test avec plusieurs arguments et conversions
    printf("\nTest : 024\n");
    result_Or = printf("Valeurs multiples : *%d* *%s* *%x* *%X* *%%*\n", 123, "abcd", 456, 789);
    result_Ft = ft_printf("Valeurs multiples : *%d* *%s* *%x* *%X* *%%*\n", 123, "abcd", 456, 789);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    // Tests des flags dans une phrase

    printf("\nTest : 025\n");
    result_Or = printf("Texte avec des flags, comme -123 et zéro *%05d*, au milieu.\n", 456);
    result_Ft = ft_printf("Texte avec des flags, comme -123 et zéro *%05d*, au milieu.\n", 456);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    // Tests fous avec vérification des valeurs de retour
    printf("\nTest : 026\n");
    result_Or = printf("Combinaison : *%d* *%s* *%p* *%x* *%X* *%%*\n", INT_MAX, "combi", str, 255, 255);
    result_Ft = ft_printf("Combinaison : *%d* *%s* *%p* *%x* *%X* *%%*\n", INT_MAX, "combi", str, 255, 255);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    // Tests des conversions identiques à la suite
    printf("\nTest : 027\n");
    result_Or = printf("Identiques : *%d%d%d*\n", 42, 42, 42);
    result_Ft = ft_printf("Identiques : *%d%d%d*\n", 42, 42, 42);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    // Partie bonus : gestion simple des flags
    printf("\nTest : 028\n");
    result_Or = printf("Test flag '.' avec précision variable : *%.5d*, *%.3s*\n", 42, "abcdef");
    result_Ft = ft_printf("Test flag '.' avec précision variable : *%.5d*, *%.3s*\n", 42, "abcdef");
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");
    result_Or = printf("Test flag '-' pour aligner à gauche : *%-5d*\n", 42);
    result_Ft = ft_printf("Test flag '-' pour aligner à gauche : *%-5d*\n", 42);    
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");
    result_Or = printf("Test flag '0' pour padding : *%05d*, *%010d*\n", 42, -42);
    result_Ft = ft_printf("Test flag '0' pour padding : *%05d*, *%010d*\n", 42, -42);    
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    // Tests avancés des flags et combinaisons
    printf("\nTest : 029\n");
    result_Or = printf("Combi avancée : *%+-5d*, *%#x*, *% .5s*\n", 42, 255, "abcdef");
    result_Ft = ft_printf("Combi avancée : *%+-5d*, *%#x*, *% .5s*\n", 42, 255, "abcdef");    
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    // #, +, espace
    printf("\nTest : 030\n");
    result_Or = printf("Flag '#' avec hexa : *%#x*, *%#X*\n", 255, 255);
    result_Ft = ft_printf("Flag '#' avec hexa : *%#x*, *%#X*\n", 255, 255);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");
    result_Or = printf("Flag '+' avec signe : *%+d*, *%+d*\n", 42, -42);
    result_Ft = ft_printf("Flag '+' avec signe : *%+d*, *%+d*\n", 42, -42);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");
    result_Or = printf("Flag ' ' avec espace : *% d*, *% d*\n", 42, -42);
    result_Ft = ft_printf("Flag ' ' avec espace : *% d*, *% d*\n", 42, -42);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");



    // Tests supplémentaires pour les flags au milieu d'une phrase
    printf("\nTest : 031\n");
    result_Or = printf("Ceci est un test avec un entier : *%d*, et un hexa : *%#x*.\n", INT_MAX, 255);
    result_Ft = ft_printf("Ceci est un test avec un entier : *%d*, et un hexa : *%#x*.\n", INT_MAX, 255);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    // Tests pour des combinaisons de flags et de conversions
    printf("\nTest : 032\n");
    result_Or = printf("Or = Combi complexe: *%+d*, *% 10d*, *%-10d*, *%.5s*, *%-.5s*, *%05d*\n", 42, -42, 42, "abcdef", "ghijkl", -42);
    result_Ft = ft_printf("Ft = Combi complexe: *%+d*, *% 10d*, *%-10d*, *%.5s*, *%-.5s*, *%05d*\n", 42, -42, 42, "abcdef", "ghijkl", -42);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    // Tests pour vérifier le comportement des flags '+' et ' ' avec des entiers positifs et négatifs
    printf("\nTest : 033\n");
    result_Or = printf("Positif avec '+': *%+d*, Positif avec ' ': *% d*. Negatif avec '+': *%+d*, Negatif avec ' ': *% d*\n", 42, 42, -42, -42);
    result_Ft = ft_printf("Positif avec '+': *%+d*, Positif avec ' ': *% d*. Negatif avec '+': *%+d*, Negatif avec ' ': *% d*\n", 42, 42, -42, -42);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");



	printf("   _     _     _     _ \n  |-|   |-|   |-|   |-|\n  |-|   |-|   |-|   |-|\n ----- ----- ----- -----\n  ---   ---   ---   ---\n   -     -     -     -\n\n");
	printf("*   |||---   BONUS : %%X   ---|||   *\n\n\n");

    printf("\nTest : 034\n");
    for (int i = 0; i < test_count; i++) {
        result_Or = printf("Or: '*%%x*' =                *%x*\n", test_vals[i], test_vals[i]);
        result_Ft = ft_printf("Ft: '*%%x*' =                *%x*\n", test_vals[i], test_vals[i]);
        printf("result Or = %d\n", result_Or);
        printf("result Ft = %d\n\n", result_Ft);
        if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
        else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");
    }


    // Test avec flag '#'
    printf("\nTest : 035\n");
    for (int i = 0; i < test_count; i++) {
        result_Or = printf("Or: '*%%#x*' =                *%#x*\n", test_vals[i], test_vals[i]);
        result_Ft = ft_printf("Ft: '*%%#x*' =                *%#x*\n", test_vals[i], test_vals[i]);
        printf("result Or = %d\n", result_Or);
        printf("result Ft = %d\n\n", result_Ft);
        if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
        else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");
    }

    // Test avec flag '0'
    printf("\nTest : 036\n");
    for (int i = 0; i < test_count; i++) {
        result_Or = printf("Or: '*%%08x*' =                *%#08x*\n", test_vals[i], test_vals[i]);
        result_Ft = ft_printf("Ft: '*%%08x*' =                *%#08x*\n", test_vals[i], test_vals[i]);
        printf("result Or = %d\n", result_Or);
        printf("result Ft = %d\n\n", result_Ft);
        if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
        else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");
    }

    // Test avec flag '-'
    printf("\nTest : 037\n");
    for (int i = 0; i < test_count; i++) {
        result_Or = printf("Or: '*%%-8x*' =                *%#-8x*\n", test_vals[i], test_vals[i]);
        result_Ft = ft_printf("Ft: '*%%-8x*' =                *%#-8x*\n", test_vals[i], test_vals[i]);
        printf("result Or = %d\n", result_Or);
        printf("result Ft = %d\n\n", result_Ft);
        if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
        else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");
        result_Or = printf("Or: '*%%-08x*' =                *%#-08x*\n", test_vals[i], test_vals[i]);
        result_Ft = ft_printf("Ft: '*%%-08x*' =                *%#-08x*\n", test_vals[i], test_vals[i]);
        printf("result Or = %d\n", result_Or);
        printf("result Ft = %d\n\n", result_Ft);
        if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
        else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");
        result_Or = printf("Or: '*%%8x*' =                *%#8x*\n", test_vals[i], test_vals[i]);
        result_Ft = ft_printf("Ft: '*%%8x*' =                *%#8x*\n", test_vals[i], test_vals[i]);
        printf("result Or = %d\n", result_Or);
        printf("result Ft = %d\n\n", result_Ft);
        if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
        else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");
        result_Or = printf("Or: '*%%08x*' =                *%#08x*\n", test_vals[i], test_vals[i]);
        result_Ft = ft_printf("Ft: '*%%08x*' =                *%#08x*\n", test_vals[i], test_vals[i]);
        printf("result Or = %d\n", result_Or);
        printf("result Ft = %d\n\n", result_Ft);
        if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
        else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");
    }

    // Test avec flag '.' (précision)
    printf("\nTest : 038\n");
    for (int i = 0; i < test_count; i++) {
        result_Or = printf("Or: '*%%.25x*' =                 *%#.25x*\n", test_vals[i], test_vals[i]);
        result_Ft = ft_printf("Ft: '*%%.25x*' =                 *%#.25x*\n", test_vals[i], test_vals[i]);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");
    }
    printf("\nTest : 039\n");
    for (int i = 0; i < test_count; i++) {
        result_Or = printf("Or: '*%%25x*' =                 *%25x*\n", test_vals[i], test_vals[i]);
        result_Ft = ft_printf("Ft: '*%%25x*' =                 *%25x*\n", test_vals[i], test_vals[i]);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");
        result_Or = printf("Or: '*%%025x*' =                 *%025x*\n", test_vals[i], test_vals[i]);
        result_Ft = ft_printf("Ft: '*%%025x*' =                 *%025x*\n", test_vals[i], test_vals[i]);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");
        result_Or = printf("Or: '*%%-25x*' =                 *%-25x*\n", test_vals[i], test_vals[i]);
        result_Ft = ft_printf("Ft: '*%%-25x*' =                 *%-25x*\n", test_vals[i], test_vals[i]);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");
        result_Or = printf("Or: '*%%-025x*' =                 *%-025x*\n", test_vals[i], test_vals[i]);
        result_Ft = ft_printf("Ft: '*%%-025x*' =                 *%-025x*\n", test_vals[i], test_vals[i]);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");
        result_Or = printf("Or: '*%%#25x*' =                 *%#25x*\n", test_vals[i], test_vals[i]);
        result_Ft = ft_printf("Ft: '*%%#25x*' =                 *%#25x*\n", test_vals[i], test_vals[i]);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");
        result_Or = printf("Or: '*%%#025x*' =                 *%#025x*\n", test_vals[i], test_vals[i]);
        result_Ft = ft_printf("Ft: '*%%#025x*' =                 *%#025x*\n", test_vals[i], test_vals[i]);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");
        result_Or = printf("Or: '*%%-#25x*' =                 *%-#25x*\n", test_vals[i], test_vals[i]);
        result_Ft = ft_printf("Ft: '*%%-#25x*' =                 *%-#25x*\n", test_vals[i], test_vals[i]);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");
        result_Or = printf("Or: '*%%-#025x*' =                 *%-#025x*\n", test_vals[i], test_vals[i]);
        result_Ft = ft_printf("Ft: '*%%-#025x*' =                 *%-#025x*\n", test_vals[i], test_vals[i]);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");
        
    }

    // Test avec flag 'xx.xx' (Largeur de champs et précision)
    printf("\nTest : 40\n");
    for (int i = 0; i < test_count; i++) {
        result_Or = printf("Or: '*%%#25.15x*' =          *%#25.15x*\n", test_vals[i], test_vals[i]);
        result_Ft = ft_printf("Ft: '*%%#25.15x*' =          *%#25.15x*\n", test_vals[i], test_vals[i]);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");
        result_Or = printf("Or: '*%%#-25.15x*' =          *%#-25.15x*\n", test_vals[i], test_vals[i]);
        result_Ft = ft_printf("Ft: '*%%#-25.15x*' =          *%#-25.15x*\n", test_vals[i], test_vals[i]);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");
    }
    // Tests supplémentaires pour observer le comportement avec flags ' ' et '+'
    // Remarque: Ces flags ne modifient pas la sortie pour '%x', mais sont inclus pour la complétude

    // Test avec flag ' ' (espace)
    printf("\nTest : 041\n");
    for (int i = 0; i < test_count; i++) {
        result_Or = printf("Or: '*%%# 0x*' =          *%# 0x*\n", test_vals[i], test_vals[i]);
        result_Ft = ft_printf("Ft: '*%%# 0x*' =          *%# 0x*\n", test_vals[i], test_vals[i]);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");
    }

    printf("\nTest : 042\n");
    for (int i = 0; i < test_count; i++) {
        result_Or = printf("Or: '*%%# 4x*' =          *%# 4x*\n", test_vals[i], test_vals[i]);
        result_Ft = ft_printf("Ft: '*%%# 4x*' =          *%# 4x*\n", test_vals[i], test_vals[i]);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");
    }
    printf("\nTest : 043\n");
    for (int i = 0; i < test_count; i++) {
        result_Or = printf("Or: '*%%X*' =          *%X*\n", test_vals[i], test_vals[i]);
        result_Ft = ft_printf("Ft: '*%%X*' =          *%X*\n", test_vals[i], test_vals[i]);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");
    }

    // Test avec flag '#'
    printf("\nTest : 044\n");
    for (int i = 0; i < test_count; i++) {
        result_Or = printf("Or: '*%%#X*' =              *%#X*\n", test_vals[i], test_vals[i]);
        result_Ft = ft_printf("Ft: '*%%#X*' =              *%#X*\n", test_vals[i], test_vals[i]);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");
    }

    // Test avec flag '0'
    printf("\nTest : 045\n");
    for (int i = 0; i < test_count; i++) {
        result_Or = printf("Or: '*%%08X*' =              *%#08X*\n", test_vals[i], test_vals[i]);
        result_Ft = ft_printf("Ft: '*%%08X*' =              *%#08X*\n", test_vals[i], test_vals[i]);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");
    }

    // Test avec flag '-'
    printf("\nTest : 046\n");
    for (int i = 0; i < test_count; i++) {
        result_Or = printf("Or: '*%%-8X*' =              *%#-8X*\n", test_vals[i], test_vals[i]);
        result_Ft = ft_printf("Ft: '*%%-8X*' =              *%#-8X*\n", test_vals[i], test_vals[i]);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");
        result_Or = printf("Or: '*%%-08X*' =             *%#-08X*\n", test_vals[i], test_vals[i]);
        result_Ft = ft_printf("Ft: '*%%-08X*' =             *%#-08X*\n", test_vals[i], test_vals[i]);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");
        result_Or = printf("Or: '*%%8X*' =               *%#8X*\n", test_vals[i], test_vals[i]);
        result_Ft = ft_printf("Ft: '*%%8X*' =               *%#8X*\n", test_vals[i], test_vals[i]);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");
        result_Or = printf("Or: '*%%08X*' =              *%#08X*\n", test_vals[i], test_vals[i]);
        result_Ft = ft_printf("Ft: '*%%08X*' =              *%#08X*\n", test_vals[i], test_vals[i]);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");
   }
 
    // Test avec flag '.' (précision)
    printf("\nTest : 047\n");
    for (int i = 0; i < test_count; i++) {
        result_Or = printf("Or: '*%%.25X*' =                *%#.25X*\n", test_vals[i], test_vals[i]);
        result_Ft = ft_printf("Ft: '*%%.25X*' =                *%#.25X*\n", test_vals[i], test_vals[i]);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");
    }
    printf("\nTest : 048\n");
    for (int i = 0; i < test_count; i++) {
        result_Or = printf("Or: '*%%25X*' =          *%25X*\n", test_vals[i], test_vals[i]);
        result_Ft = ft_printf("Ft: '*%%25X*' =          *%25X*\n", test_vals[i], test_vals[i]);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");
        result_Or = printf("Or: '*%%025X*' =         *%025X*\n", test_vals[i], test_vals[i]);
        result_Ft = ft_printf("Ft: '*%%025X*' =         *%025X*\n", test_vals[i], test_vals[i]);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");
        result_Or = printf("Or: '*%%-25X*' =         *%-25X*\n", test_vals[i], test_vals[i]);
        result_Ft = ft_printf("Ft: '*%%-25X*' =         *%-25X*\n", test_vals[i], test_vals[i]);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");
        result_Or = printf("Or: '*%%-025X*' =        *%-025X*\n", test_vals[i], test_vals[i]);
        result_Ft = ft_printf("Ft: '*%%-025X*' =        *%-025X*\n", test_vals[i], test_vals[i]);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");
        result_Or = printf("Or: '*%%#25X*' =         *%#25X*\n", test_vals[i], test_vals[i]);
        result_Ft = ft_printf("Ft: '*%%#25X*' =         *%#25X*\n", test_vals[i], test_vals[i]);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");
        result_Or = printf("Or: '*%%#025X*' =        *%#025X*\n", test_vals[i], test_vals[i]);
        result_Ft = ft_printf("Ft: '*%%#025X*' =        *%#025X*\n", test_vals[i], test_vals[i]);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");
        result_Or = printf("Or: '*%%-#25X*' =        *%-#25X*\n", test_vals[i], test_vals[i]);
        result_Ft = ft_printf("Ft: '*%%-#25X*' =        *%-#25X*\n", test_vals[i], test_vals[i]);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");
        result_Or = printf("Or: '*%%-#025X*' =       *%-#025X*\n", test_vals[i], test_vals[i]);
        result_Ft = ft_printf("Ft: '*%%-#025X*' =       *%-#025X*\n", test_vals[i], test_vals[i]);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");
    }

    // Test avec flag 'xx.xx' (Largeur de champs et précision)
    printf("\nTest : 049\n");
    for (int i = 0; i < test_count; i++) {
        result_Or = printf("Or: '*%%#25.15X*' =             *%#25.15X*\n", test_vals[i], test_vals[i]);
        result_Ft = ft_printf("Ft: '*%%#25.15X*' =             *%#25.15X*\n", test_vals[i], test_vals[i]);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");
        result_Or = printf("Or: '*%%#-25.15X*' =            *%#-25.15X*\n", test_vals[i], test_vals[i]);
        result_Ft = ft_printf("Ft: '*%%#-25.15X*' =            *%#-25.15X*\n", test_vals[i], test_vals[i]);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");
    }
    // Tests supplémentaires pour observer le comportement avec flags ' ' et '+'
    // Remarque: Ces flags ne modifient pas la sortie pour '%x', mais sont inclus pour la complétude

    // Test avec flag ' ' (espace)
    printf("\nTest : 050\n");
    for (int i = 0; i < test_count; i++) {
        result_Or = printf("Or: '*%%# 0X*' =                *%# 0X*\n", test_vals[i], test_vals[i]);
        result_Ft = ft_printf("Ft: '*%%# 0X*' =                *%# 0X*\n", test_vals[i], test_vals[i]);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");
    }

    printf("\nTest : 051\n");
    for (int i = 0; i < test_count; i++) {
        result_Or = printf("Or: '*%%# 4X*' =                *%# 4X*\n", test_vals[i], test_vals[i]);
        result_Ft = ft_printf("Ft: '*%%# 4X*' =                *%# 4X*\n", test_vals[i], test_vals[i]);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");
    }// Exemples de variables pour les tests

    // Test des valeurs limites pour les conversions en hexadécimal
    printf("\nTest : 052\n");
    result_Or = printf("Or = UINT_MAX en hexa: *%x*, en HEXA: *%X*\n", UINT_MAX, UINT_MAX);
    result_Ft = ft_printf("Ft = UINT_MAX en hexa: *%x*, en HEXA: *%X*\n", UINT_MAX, UINT_MAX);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 053\n");
	result_Or = printf("OR :%%X = *%X*\n", x);
	result_Ft = ft_printf("FT :%%X = *%X*\n", x);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 054\n");
	result_Or = printf("OR :%%-X = *%-X*\n", x);
	result_Ft = ft_printf("FT :%%-X = *%-X*\n", x);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 055\n");
	result_Or = printf("OR :%%#X = *%#X*\n", x);
	result_Ft = ft_printf("FT :%%#X = *%#X*\n", x);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 056\n");
	result_Or = printf("OR :%%.X = *%.X*\n", x);
	result_Ft = ft_printf("FT :%%.X = *%.X*\n", x);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 056.b\n");
    result_Or = printf("OR :%%.X = *%.X*\n", 352);
    result_Ft = ft_printf("FT :%%.X = *%.X*\n", 352);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 057\n");
	result_Or = printf("OR :%%0X = *%0X*\n", x);
	result_Ft = ft_printf("FT :%%0X = *%0X*\n", x);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 058\n");
	result_Or = printf("OR :%%5X = *%5X*\n", x);
	result_Ft = ft_printf("FT :%%5X = *%5X*\n", x);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 059\n");
	result_Or = printf("OR :%%-5X = *%-5X*\n", x);
	result_Ft = ft_printf("FT :%%-5X = *%-5X*\n", x);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 060\n");
	result_Or = printf("OR :%%.5X = *%.5X*\n", x);
	result_Ft = ft_printf("FT :%%.5X = *%.5X*\n", x);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 061\n");
	result_Or = printf("OR :%%-.5X = *%.5X*\n", x);
	result_Ft = ft_printf("FT :%%-.5X = *%.5X*\n", x);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 062\n");
	result_Or = printf("OR :%%.-5X = *%.5X*\n", x);
	result_Ft = ft_printf("FT :%%.-5X = *%.5X*\n", x);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 063\n");
	result_Or = printf("OR :%%+.5X = *%.5X*\n", x);
	result_Ft = ft_printf("FT :%%+.5X = *%.5X*\n", x);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 064\n");
	result_Or = printf("OR :%%.+5X = *%.5X*\n", x);
	result_Ft = ft_printf("FT :%%.+5X = *%.5X*\n", x);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 065\n");
	result_Or = printf("OR :%%#5X = *%#5X*\n", x);
	result_Ft = ft_printf("FT :%%#5X = *%#5X*\n", x);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 066\n");
	result_Or = printf("OR :%%05X = *%05X*\n", x);
	result_Ft = ft_printf("FT :%%05X = *%05X*\n", x);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 067\n");
	result_Or = printf("OR :%%#05X = *%#05X*\n", x);
	result_Ft = ft_printf("FT :%%#05X = *%#05X*\n", x);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 068\n");
	result_Or = printf("OR :%%8.5X = *%8.5X*\n", x);
	result_Ft = ft_printf("FT :%%8.5X = *%8.5X*\n", x);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 069\n");
	result_Or = printf("OR :%%-8.5X = *%-8.5X*\n", x);
	result_Ft = ft_printf("FT :%%-8.5X = *%-8.5X*\n", x);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 070\n");
	result_Or = printf("OR :%%#8.5X = *%#8.5X*\n", x);
	result_Ft = ft_printf("FT :%%#8.5X = *%#8.5X*\n", x);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 071\n");
	result_Or = printf("OR :%%#8.5X, %%-8.5X, %%8.5X = *%#8.5X*, *%-8.5X*, *%8.5X*\n", x, NULL, 9000);
	result_Ft = ft_printf("FT :%%#8.5X, %%-8.5X, %%8.5X = *%#8.5X*, *%-8.5X*, *%8.5X*\n", x, NULL, 9000);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");


	printf("  ---   ---   ---   ---\n  |-|   |-|   |-|   |-|\n  |-|   |-|   |-|   |-|\n ----- ----- ----- -----\n  ---   ---   ---   ---\n   -     -     -     -\n\n");
	printf("*   |||---   BONUS : %%x   ---|||   *\n\n\n");

    printf("\nTest : 072\n");
	result_Or = printf("OR :%%x = *%x*\n", x);
	result_Ft = ft_printf("FT :%%x = *%x*\n", x);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 073\n");
	result_Or = printf("OR :%%-x = *%-x*\n", x);
	result_Ft = ft_printf("FT :%%-x = *%-x*\n", x);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 074\n");
	result_Or = printf("OR :%%#x = *%#x*\n", x);
	result_Ft = ft_printf("FT :%%#x = *%#x*\n", x);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 075\n");
	result_Or = printf("OR :%%.x = *%.x*\n", x);
	result_Ft = ft_printf("FT :%%.x = *%.x*\n", x);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 076\n");
	result_Or = printf("OR :%%0x = *%0x*\n", x);
	result_Ft = ft_printf("FT :%%0x = *%0x*\n", x);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 077\n");
	result_Or = printf("OR :%%5x = *%5x*\n", x);
	result_Ft = ft_printf("FT :%%5x = *%5x*\n", x);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 078\n");
	result_Or = printf("OR :%%-5x = *%-5x*\n", x);
	result_Ft = ft_printf("FT :%%-5x = *%-5x*\n", x);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 079\n");
	result_Or = printf("OR :%%.5x = *%.5x*\n", x);
	result_Ft = ft_printf("FT :%%.5x = *%.5x*\n", x);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 080\n");
	result_Or = printf("OR :%%-.5x = *%.5x*\n", x);
	result_Ft = ft_printf("FT :%%-.5x = *%.5x*\n", x);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 081\n");
	result_Or = printf("OR :%%.-5x = *%.5x*\n", x);
	result_Ft = ft_printf("FT :%%.-5x = *%.5x*\n", x);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 082\n");
	result_Or = printf("OR :%%+.5x = *%.5x*\n", x);
	result_Ft = ft_printf("FT :%%+.5x = *%.5x*\n", x);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 083\n");
	result_Or = printf("OR :%%.+5x = *%.5x*\n", x);
	result_Ft = ft_printf("FT :%%.+5x = *%.5x*\n", x);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 084\n");
	result_Or = printf("OR :%%#5x = *%#5x*\n", x);
	result_Ft = ft_printf("FT :%%#5x = *%#5x*\n", x);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 085\n");
	result_Or = printf("OR :%%05x = *%05x*\n", x);
	result_Ft = ft_printf("FT :%%05x = *%05x*\n", x);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 086\n");
	result_Or = printf("OR :%%#05x = *%#05x*\n", x);
	result_Ft = ft_printf("FT :%%#05x = *%#05x*\n", x);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 087\n");
	result_Or = printf("OR :%%8.5x = *%8.5x*\n", x);
	result_Ft = ft_printf("FT :%%8.5x = *%8.5x*\n", x);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 088\n");
	result_Or = printf("OR :%%-8.5x = *%-8.5x*\n", x);
	result_Ft = ft_printf("FT :%%-8.5x = *%-8.5x*\n", x);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 089\n");
	result_Or = printf("OR :%%#8.5x = *%#8.5x*\n", x);
	result_Ft = ft_printf("FT :%%#8.5x = *%#8.5x*\n", x);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 090\n");
	result_Or = printf("OR :%%#8.5x, %%-8.5x, %%8.5x = *%#8.5x*, *%-8.5x*, *%8.5x*\n", x, NULL, 9000);
	result_Ft = ft_printf("FT :%%#8.5x, %%-8.5x, %%8.5x = *%#8.5x*, *%-8.5x*, *%8.5x*\n", x, NULL, 9000);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

	printf("  ---   ---   ---   ---\n  |-|   |-|   |-|   |-|\n  |-|   |-|   |-|   |-|\n ----- ----- ----- -----\n  ---   ---   ---   ---\n   -     -     -     -\n\n");
	printf("*   |||---   BONUS : %%u   ---|||   *\n\n\n");

    printf("\nTest : 091\n");
	result_Or = printf("OR :%%u = *%u*\n", u);
	result_Ft = ft_printf("FT :%%u = *%u*\n", u);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 092\n");
	result_Or = printf("OR :%%-u = *%-u*\n", u);
	result_Ft = ft_printf("FT :%%-u = *%-u*\n", u);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 093\n");
	result_Or = printf("OR :%%.u = *%.u*\n", u);
	result_Ft = ft_printf("FT :%%.u = *%.u*\n", u);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 094\n");
	result_Or = printf("OR :%%0u = *%0u*\n", u);
	result_Ft = ft_printf("FT :%%0u = *%0u*\n", u);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 095\n");
	result_Or = printf("OR :%%5u = *%5u*\n", u);
	result_Ft = ft_printf("FT :%%5u = *%5u*\n", u);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 096\n");
	result_Or = printf("OR :%%-5u = *%-5u*\n", u);
	result_Ft = ft_printf("FT :%%-5u = *%-5u*\n", u);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 097\n");
	result_Or = printf("OR :%%.5u = *%.5u*\n", u);
	result_Ft = ft_printf("FT :%%.5u = *%.5u*\n", u);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 098\n");
	result_Or = printf("OR :%%-.5u = *%.5u*\n", u);
	result_Ft = ft_printf("FT :%%-.5u = *%.5u*\n", u);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 099\n");
	result_Or = printf("OR :%%.-5u = *%.5u*\n", u);
	result_Ft = ft_printf("FT :%%.-5u = *%.5u*\n", u);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 100\n");
	result_Or = printf("OR :%%+.5u = *%.5u*\n", u);
	result_Ft = ft_printf("FT :%%+.5u = *%.5u*\n", u);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 101\n");
	result_Or = printf("OR :%%.+5u = *%.5u*\n", u);
	result_Ft = ft_printf("FT :%%.+5u = *%.5u*\n", u);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 102\n");
	result_Or = printf("OR :%%05u = *%05u*\n", u);
	result_Ft = ft_printf("FT :%%05u = *%05u*\n", u);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 103\n");
	result_Or = printf("OR :%%8.5u = *%8.5u*\n", u);
	result_Ft = ft_printf("FT :%%8.5u = *%8.5u*\n", u);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 104\n");
	result_Or = printf("OR :%%-8.5u = *%-8.5u*\n", u);
	result_Ft = ft_printf("FT :%%-8.5u = *%-8.5u*\n", u);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 105\n");
	result_Or = printf("OR :%%u, %%-8.5u, %%8.5u = *%u*, *%-8.5u*, *%8.5u*\n", u, u, u);
	result_Ft = ft_printf("FT :%%u, %%-8.5u, %%8.5u = *%u*, *%-8.5u*, *%8.5u*\n", u, u, u);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

	printf("  ---   ---   ---   ---\n  |-|   |-|   |-|   |-|\n  |-|   |-|   |-|   |-|\n ----- ----- ----- -----\n  ---   ---   ---   ---\n   -     -     -     -\n\n");
	printf("*   |||---   BONUS : %%d   ---|||   *\n\n\n");

    printf("\nTest : 106\n");
	result_Or = printf("OR :%%d = *%d*\n", n);
	result_Ft = ft_printf("FT :%%d = *%d*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 107\n");
	result_Or = printf("OR :%%d = *%d*\n", n);
	result_Ft = ft_printf("FT :%%d = *%d*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 108\n");
	result_Or = printf("OR :%%+d = *%+d*\n", n);
	result_Ft = ft_printf("FT :%%+d = *%+d*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 109\n");
	result_Or = printf("OR :%%-d = *%-d*\n", n);
	result_Ft = ft_printf("FT :%%-d = *%-d*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 110\n");
	result_Or = printf("OR :%% d = *% d*\n", n);
	result_Ft = ft_printf("FT :%% d = *% d*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 111\n");
	result_Or = printf("OR :%%.d = *%.d*\n", n);
	result_Ft = ft_printf("FT :%%.d = *%.d*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 112\n");
	result_Or = printf("OR :%%0d = *%0d*\n", n);
	result_Ft = ft_printf("FT :%%0d = *%0d*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 113\n");
	result_Or = printf("OR :%%5d = *%5d*\n", n);
	result_Ft = ft_printf("FT :%%5d = *%5d*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 114\n");
	result_Or = printf("OR :%%+5d = *%+5d*\n", n);
	result_Ft = ft_printf("FT :%%+5d = *%+5d*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 115\n");
	result_Or = printf("OR :%%-5d = *%-5d*\n", n);
	result_Ft = ft_printf("FT :%%-5d = *%-5d*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 116\n");
	result_Or = printf("OR :%%.5d = *%.5d*\n", n);
	result_Ft = ft_printf("FT :%%.5d = *%.5d*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 117\n");
	result_Or = printf("OR :%%-.5d = *%.5d*\n", n);
	result_Ft = ft_printf("FT :%%-.5d = *%.5d*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 118\n");
	result_Or = printf("OR :%%.-5d = *%.5d*\n", n);
	result_Ft = ft_printf("FT :%%.-5d = *%.5d*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 119\n");
	result_Or = printf("OR :%%+.5d = *%.5d*\n", n);
	result_Ft = ft_printf("FT :%%+.5d = *%.5d*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 120\n");
	result_Or = printf("OR :%%.+5d = *%.5d*\n", n);
	result_Ft = ft_printf("FT :%%.+5d = *%.5d*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 121\n");
	result_Or = printf("OR :%% 5d = *% 5d*\n", n);
	result_Ft = ft_printf("FT :%% 5d = *% 5d*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 122\n");
	result_Or = printf("OR :%%05d = *%05d*\n", n);
	result_Ft = ft_printf("FT :%%05d = *%05d*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 123\n");
	result_Or = printf("OR :%%+05d = *%+05d*\n", n);
	result_Ft = ft_printf("FT :%%+05d = *%+05d*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 124\n");
	result_Or = printf("OR :%%8.5d = *%8.5d*\n", n);
	result_Ft = ft_printf("FT :%%8.5d = *%8.5d*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 125\n");
	result_Or = printf("OR :%%-8.5d = *%-8.5d*\n", n);
	result_Ft = ft_printf("FT :%%-8.5d = *%-8.5d*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 126\n");
	result_Or = printf("OR :%%+8.5d = *%+8.5d*\n", n);
	result_Ft = ft_printf("FT :%%+8.5d = *%+8.5d*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 127\n");
	result_Or = printf("OR :%% 8.5d = *% 8.5d*\n", n);
	result_Ft = ft_printf("FT :%% 8.5d = *% 8.5d*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 128\n");
	result_Or = printf("OR :%%+-8.5d = *%+-8.5d*\n", n);
	result_Ft = ft_printf("FT :%%+-8.5d = *%+-8.5d*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 129\n");
	result_Or = printf("OR :%%-+8.5d = *%-+8.5d*\n", n);
	result_Ft = ft_printf("FT :%%-+8.5d = *%-+8.5d*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 130\n");
	result_Or = printf("OR :%%d, %%+d, %%-d, %% d, %%.d, %%0d, %%15d, %%+15d, %%-15d, %%.15d,  = *%d*, *%+d*, *%-d*, *% d*, *%.d*, *%0d*, *%15d*, *%+15d, *%-15d*, %.15d\n", n, n, n, n, n, n, n, n, n, n);
	result_Ft = ft_printf("FT :%%d, %%+d, %%-d, %% d, %%.d, %%0d, %%15d, %%+15d, %%-15d, %%.15d,  = *%d*, *%+d*, *%-d*, *% d*, *%.d*, *%0d*, *%15d*, *%+15d, *%-15d*, %.15d\n", n, n, n, n, n, n, n, n, n, n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 131\n");
    result_Or = printf("Or :   |% i|\n", 42);
    result_Ft = ft_printf("Ft :   |% i|\n", 42);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");


    printf("\nTest : 132\n");
    result_Or = printf("Or :   |%+i|\n", 42);
    result_Ft = ft_printf("Ft :   |%+i|\n", 42);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");


    printf("\nTest : 133\n");
    result_Or = printf("Or :   |%-10i|\n", 42);
    result_Ft = ft_printf("Ft :   |%-10i|\n", 42);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");


    printf("\nTest : 134\n");
    result_Or = printf("Or :   |%010i|\n", 42);
    result_Ft = ft_printf("Ft :   |%010i|\n", 42);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 135\n");
    result_Or = printf("Or :   |%10i|\n", 42);
    result_Ft = ft_printf("Ft :   |%10i|\n", 42);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 136\n");
    result_Or = printf("Or :   |%.5i|\n", 42);
    result_Ft = ft_printf("Ft :   |%.5i|\n", 42);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 137\n");
    result_Or = printf("Or :   |% 0+-10.5i|\n", 42);
    result_Ft = ft_printf("Ft :   |% 0+-10.5i|\n", 42);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 138\n");
    result_Or = printf("Or :   |%+10i|\n", INT_MAX);
    result_Ft = ft_printf("Ft :   |%+10i|\n", INT_MAX);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 139\n");
    result_Or = printf("Or :   |%-10i|\n", INT_MIN);
    result_Ft = ft_printf("Ft :   |%-10i|\n", INT_MIN);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 140\n");
    result_Or = printf("Or :   |% i|\n", 0);
    result_Ft = ft_printf("Ft :   |% i|\n", 0);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 141\n");
    result_Or = printf("Or :   |%+i|\n", -42);
    result_Ft = ft_printf("Ft :   |%+i|\n", -42);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 142\n");
    result_Or = printf("Or :   |% i|\n", -42);
    result_Ft = ft_printf("Ft :   |% i|\n", -42);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 143\n");
    result_Or = printf("Or :   |%010i|\n", -42);
    result_Ft = ft_printf("Ft :   |%010i|\n", -42);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 144\n");
    result_Or = printf("Or :   |%.5i|\n", -42);
    result_Ft = ft_printf("Ft :   |%.5i|\n", -42);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 145\n");
    result_Or = printf("Or :   |%10.5i|\n", 42);
    result_Ft = ft_printf("Ft :   |%10.5i|\n", 42);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 146\n");
    result_Or = printf("Or :   |%-10.5i|\n", 42);
    result_Ft = ft_printf("Ft :   |%-10.5i|\n", 42);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 147\n");
    result_Or = printf("Or :   |%i|\n", -2147483648 - 1);
    result_Ft = ft_printf("Ft :   |%i|\n", -2147483648 - 1);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 148\n");
    result_Or = printf("Or :   |%.10i|\n", 0);
    result_Ft = ft_printf("Ft :   |%.10i|\n", 0);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 149\n");
    result_Or = printf("Or :   |%10.0i|\n", 0);
    result_Ft = ft_printf("Ft :   |%10.0i|\n", 0);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 150\n");
    result_Or = printf("Or :   |%010.5i|\n", -42);
    result_Ft = ft_printf("Ft :   |%010.5i|\n", -42);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 151\n");
    result_Or = printf("Or :   |% +i|\n", 42);
    result_Ft = ft_printf("Ft :   |% +i|\n", 42);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 152\n");
    result_Or = printf("Or :   |% +i|\n", -42);
    result_Ft = ft_printf("Ft :   |% +i|\n", -42);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 153\n");
    result_Or = printf("Or :   |%-+10i|\n", 42);
    result_Ft = ft_printf("Ft :   |%-+10i|\n", 42);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 154\n");
    result_Or = printf("Or :   |%0+10i|\n", -42);
    result_Ft = ft_printf("Ft :   |%0+10i|\n", -42);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 155\n");
    result_Or = printf("Or :   |%-10.5i|\n", -42);
    result_Ft = ft_printf("Ft :   |%-10.5i|\n", -42);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 156\n");
    result_Or = printf("Or :   |%.0i|\n", 0);
    result_Ft = ft_printf("Ft :   |%.0i|\n", 0);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 157\n");
    result_Or = printf("Or :   |%-10i|\n", 42);
    result_Ft = ft_printf("Ft :   |%-10i|\n", 42);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 158\n");
    result_Or = printf("Or :   |%i|\n", 2147483647);
    result_Ft = ft_printf("Ft :   |%i|\n", 2147483647);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 159\n");
    result_Or = printf("Or :   |%i|\n", -2147483648);
    result_Ft = ft_printf("Ft :   |%i|\n", -2147483648);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 160\n");
    result_Or = printf("Or :   |%-0+10i|\n", 42);
    result_Ft = ft_printf("Ft :   |%-0+10i|\n", 42);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 161\n");
    result_Or = printf("Or :   |%0-+10.5i|\n", 42);
    result_Ft = ft_printf("Ft :   |%0-+10.5i|\n", 42);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 162\n");
    result_Or = printf("Or :   |%.10i|\n", 42);
    result_Ft = ft_printf("Ft :   |%.10i|\n", 42);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    // Assure-toi que tous les tests affichent à la fois le résultat de printf et de ft_printf, ainsi que le nombre de caractères retournés par chaque fonction pour faciliter la comparaison et le débogage.

    printf("\nTest : 163\n");
    result_Or = printf("Or :   |%0- 10.5i|\n", 42);
    result_Ft = ft_printf("Ft :   |%0- 10.5i|\n", 42);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 164\n");
    result_Or = printf("Or :   |%+i|\n", 0);
    result_Ft = ft_printf("Ft :   |%+i|\n", 0);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 165\n");
    result_Or = printf("Or :   |%.20i|\n", 42);
    result_Ft = ft_printf("Ft :   |%.20i|\n", 42);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 166\n");
    result_Or = printf("Or :   |%0+- 20.10i|\n", -42);
    result_Ft = ft_printf("Ft :   |%0+- 20.10i|\n", -42);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 167\n");
    result_Or = printf("Or :   |%#i|\n", 42);
    result_Ft = ft_printf("Ft :   |%#i|\n", 42);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 168\n");
    result_Or = printf("Or :   |%i|\n", 2147483647);
    result_Ft = ft_printf("Ft :   |%i|\n", 2147483647);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 169\n");
    result_Or = printf("Or :   |%i|\n", -2147483648);
    result_Ft = ft_printf("Ft :   |%i|\n", -2147483648);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 170\n");
    result_Or = printf("Or :   |%.20i|\n", 42);
    result_Ft = ft_printf("Ft :   |%.20i|\n", 42);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

     // Test des valeurs limites pour les conversions entières
    printf("\nTest : 171\n");
    result_Or = printf("Or = INT_MAX: *%d*, INT_MIN: *%d*\n", INT_MAX, INT_MIN);
    result_Ft = ft_printf("Ft = INT_MAX: *%d*, INT_MIN: *%d*\n", INT_MAX, INT_MIN);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    result_Or = printf("Or = UINT_MAX: *%u*\n", UINT_MAX);
    result_Ft = ft_printf("Ft = UINT_MAX: *%u*\n", UINT_MAX);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

// Assure-toi de vérifier si ta fonction peut gérer correctement chaque cas.

    printf("\nTest : 172\n");
    result_Or = printf("Or :   |% 0+-#10.5d|\n", 42);
    result_Ft = ft_printf("Ft :   |% 0+-#10.5d|\n", 42);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 173\n");
    result_Or = printf("Or :   |% 0+-#10.5d|\n", -42);
    result_Ft = ft_printf("Ft :   |% 0+-#10.5d|\n", -42);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 174\n");
	result_Or = printf("OR :%%i = *%i*\n", n);
	result_Ft = ft_printf("FT :%%i = *%i*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 175\n");
	result_Or = printf("OR :%%+i = *%+i*\n", n);
	result_Ft = ft_printf("FT :%%+i = *%+i*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 176\n");
	result_Or = printf("OR :%%-i = *%-i*\n", n);
	result_Ft = ft_printf("FT :%%-i = *%-i*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 177\n");
	result_Or = printf("OR :%% i = *% i*\n", n);
	result_Ft = ft_printf("FT :%% i = *% i*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 178\n");
	result_Or = printf("OR :%%.i = *%.i*\n", n);
	result_Ft = ft_printf("FT :%%.i = *%.i*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 179\n");
	result_Or = printf("OR :%%0d = *%0i*\n", n);
	result_Ft = ft_printf("FT :%%0i = *%0i*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 180\n");
	result_Or = printf("OR :%%15i = *%15i*\n", n);
	result_Ft = ft_printf("FT :%%15i = *%15i*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 181\n");
	result_Or = printf("OR :%%+15i = *%+15i*\n", n);
	result_Ft = ft_printf("FT :%%+15i = *%+15i*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 182\n");
	result_Or = printf("OR :%%-15i = *%-15i*\n", n);
	result_Ft = ft_printf("FT :%%-15i = *%-15i*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 183\n");
	result_Or = printf("OR :%%.15i = *%.15i*\n", n);
	result_Ft = ft_printf("FT :%%.15i = *%.15i*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 184\n");
	result_Or = printf("OR :%%-.15i = *%.15i*\n", n);
	result_Ft = ft_printf("FT :%%-.15i = *%.15i*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 185\n");
	result_Or = printf("OR :%%.-15i = *%.15i*\n", n);
	result_Ft = ft_printf("FT :%%.-15i = *%.15i*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 186\n");
	result_Or = printf("OR :%%+.15i = *%.15i*\n", n);
	result_Ft = ft_printf("FT :%%+.15i = *%.15i*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 187\n");
	result_Or = printf("OR :%%.+15i = *%.15i*\n", n);
	result_Ft = ft_printf("FT :%%.+15i = *%.15i*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 188\n");
	result_Or = printf("OR :%% 15i = *% 15i*\n", n);
	result_Ft = ft_printf("FT :%% 15i = *% 15i*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 189\n");
	result_Or = printf("OR :%%015i = *%015i*\n", n);
	result_Ft = ft_printf("FT :%%015i = *%015i*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 190\n");
	result_Or = printf("OR :%%+015i = *%+015i*\n", n);
	result_Ft = ft_printf("FT :%%+015i = *%+015i*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 191\n");
	result_Or = printf("OR :%%18.5i = *%18.5i*\n", n);
	result_Ft = ft_printf("FT :%%18.5i = *%18.5i*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 192\n");
	result_Or = printf("OR :%%-18.5i = *%-18.5i*\n", n);
	result_Ft = ft_printf("FT :%%-18.5i = *%-18.5i*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 193\n");
	result_Or = printf("OR :%%+18.5i = *%+18.5i*\n", n);
	result_Ft = ft_printf("FT :%%+18.5i = *%+18.5i*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 194\n");
	result_Or = printf("OR :%% 18.5i = *% 18.5i*\n", n);
	result_Ft = ft_printf("FT :%% 18.5i = *% 18.5i*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 195\n");
	result_Or = printf("OR :%%+-18.5i = *%+-18.5i*\n", n);
	result_Ft = ft_printf("FT :%%+-18.5i = *%+-18.5i*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 196\n");
	result_Or = printf("OR :%%-+18.5i = *%-+18.5i*\n", n);
	result_Ft = ft_printf("FT :%%-+18.5i = *%-+18.5i*\n", n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 197\n");
	result_Or = printf("OR :%%i, %%+i, %%-i, %% i, %%.i, %%0i, %%15i, %%+15i, %%-15i, %%.15i,  = *%i*, *%+i*, *%-i*, *% i*, *%.i*, *%0i*, *%15i*, *%+15i, *%-15i*, %.15i\n", n, n, n, n, n, n, n, n, n, n);
	result_Ft = ft_printf("FT :%%i, %%+i, %%-i, %% i, %%.i, %%0i, %%15i, %%+15i, %%-15i, %%.15i,  = *%i*, *%+i*, *%-i*, *% i*, *%.i*, *%0i*, *%15i*, *%+15i, *%-15i*, %.15i\n", n, n, n, n, n, n, n, n, n, n);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");


	printf("  ---   ---   ---   ---\n  |-|   |-|   |-|   |-|\n  |-|   |-|   |-|   |-|\n ----- ----- ----- -----\n  ---   ---   ---   ---\n   -     -     -     -\n\n");
	printf("*   |||---   BONUS : %%p   ---|||   *\n\n\n");

    printf("\nTest : 198\n");
    result_Or = printf("Or:     *%%p* = *%p*\n", 0);
    result_Ft = ft_printf("Ft:     *%%p* = *%p*\n", 0);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 199\n");
    result_Or = printf("Or:     *%%p* = *%p*\n", ptr_entier);
    result_Ft = ft_printf("Ft:     *%%p* = *%p*\n", ptr_entier);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 200\n");
    result_Or = printf("Or:     *%% p* = *% p*\n", ptr_entier);
    result_Ft = ft_printf("Ft:     *%% p* = *% p*\n", ptr_entier);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 201\n");
    result_Or = printf("Or:     *%% 20p* = *% 20p*\n", ptr_entier);
    result_Ft = ft_printf("Ft:     *%% 20p* = *% 20p*\n", ptr_entier);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 202\n");
    result_Or = printf("Or:    *%%-p* = *%-p*\n", ptr_entier);
    result_Ft = ft_printf("Ft:    *%%-p* = *%-p*\n", ptr_entier);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");
    
    printf("\nTest : 203\n");
    result_Or = printf("Or:    *%%+p* = *%+p*\n", ptr_entier);
    result_Ft = ft_printf("Ft:    *%%+p* = *%+p*\n", ptr_entier);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");
    
    printf("\nTest : 204\n");
    result_Or = printf("Or:    *%%#p* = *%#p*\n", ptr_entier);
    result_Ft = ft_printf("Ft:    *%%#p* = *%#p*\n", ptr_entier);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 205\n");    
    result_Or = printf("Or:   *%%20p* = *%20p*\n", ptr_entier);
    result_Ft = ft_printf("Ft:   *%%20p* = *%20p*\n", ptr_entier);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");
    
    printf("\nTest : 206\n");
    result_Or = printf("Or:  *%%.20p* = *%.20p*\n", ptr_entier);
    result_Ft = ft_printf("Ft:  *%%.20p* = *%.20p*\n", ptr_entier);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");
    
    printf("\nTest : 207\n");
    result_Or = printf("Or:*%%20.19p* = *%20.19p*\n", ptr_entier);
    result_Ft = ft_printf("Ft:*%%20.19p* = *%20.19p*\n", ptr_entier);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 208\n");
    result_Or = printf("Or:  *%%-20p* = *%-20p*\n", ptr_entier);
    result_Ft = ft_printf("Ft:  *%%-20p* = *%-20p*\n", ptr_entier);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");
    
    printf("\nTest : 209\n");
    result_Or = printf("Or: *%%-.20p* = *%-.20p*\n", ptr_entier);
    result_Ft = ft_printf("Ft: *%%-.20p* = *%-.20p*\n", ptr_entier);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");
    
    printf("\nTest : 210\n");
    result_Or = printf("Or: *%%0p* = *%0p*\n", ptr_entier);
    result_Ft = ft_printf("Ft: *%%0p* = *%0p*\n", ptr_entier);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");
   
    printf("\nTest : 211\n");
    result_Or = printf("Or:  *%%020p* = *%020p*\n", ptr_entier);
    result_Ft = ft_printf("Ft:  *%%020p* = *%020p*\n", ptr_entier);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 212\n");
    result_Or = printf("Or: *%%0.20p* = *%0.20p*\n", ptr_entier);
    result_Ft = ft_printf("Ft: *%%0.20p* = *%0.20p*\n", ptr_entier);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");
    
    
    // Tests de base pour %p
    printf("\nTest : 213\n");
    result_Or = printf("Or: '*%%p*' = *%p*\n", (void*)ptr_entier);
    result_Ft = ft_printf("Ft: '*%%p*' = *%p*\n", (void*)ptr_entier);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 214\n");
    result_Or = printf("Or: Entier '*%%p*', Caractere '*%%p*', Flottant '*%%p*', Tableau '*%%p*'\n",
           (void*)ptr_entier, (void*)ptr_caractere, (void*)ptr_flottant, (void*)ptr_tableau);
    result_Ft = ft_printf("Ft: Entier '*%%p*', Caractere '*%%p*', Flottant '*%%p*', Tableau '*%%p*'\n",
              (void*)ptr_entier, (void*)ptr_caractere, (void*)ptr_flottant, (void*)ptr_tableau);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 215\n");
    result_Or = printf("Or: '*%%p*' = *%p*\n", ptr_null);
    result_Ft = ft_printf("Ft: '*%%p*' = *%p*\n", ptr_null);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    // Tests avec largeur de champs
    printf("\nTest : 216\n");
    result_Or = printf("Or: '*%%20p*' = *%20p*\n", (void*)ptr_entier);
    result_Ft = ft_printf("Ft: '*%%20p*' = *%20p*\n", (void*)ptr_entier);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 217\n");
    result_Or = printf("Or: '*%%-20p*' = *%-20p*\n", (void*)ptr_entier);
    result_Ft = ft_printf("Ft: '*%%-20p*' = *%-20p*\n", (void*)ptr_entier);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");
 
    printf("\nTest : 218\n");
    result_Or = printf("Or: 'Texte avant %p et texte après'\n", (void*)ptr_entier);
    result_Ft = ft_printf("Ft: 'Texte avant %p et texte après'\n", (void*)ptr_entier);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");
    
    printf("\nTest : 219\n");
    void maFonction() {}
    result_Or = printf("Or: Fonction '%p'\n", (void*)&maFonction);
    result_Ft = ft_printf("Ft: Fonction '%p'\n", (void*)&maFonction);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");
    
    printf("\nTest : 220\n");
    result_Or = printf("Or: '%p %p %p'\n", (void*)ptr_entier, (void*)ptr_caractere, (void*)ptr_tableau);
    result_Ft = ft_printf("Ft: '%p %p %p'\n", (void*)ptr_entier, (void*)ptr_caractere, (void*)ptr_tableau);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 221\n");
    result_Or = printf("Or: Entier '%d', Pointeur '%p'\n", entier, (void*)ptr_entier);
    result_Ft = ft_printf("Ft: Entier '%d', Pointeur '%p'\n", entier, (void*)ptr_entier);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");
   
    printf("\nTest : 222\n");
    int **ptr_ptr_entier = &ptr_entier;
    result_Or = printf("Or: Pointeur vers pointeur '%p'\n", (void*)ptr_ptr_entier);
    result_Ft = ft_printf("Ft: Pointeur vers pointeur '%p'\n", (void*)ptr_ptr_entier);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");
    
    void fonctionSansRetourNiArguments() {}
    int fonctionAvecRetourEtSansArguments() { return 0; }
    char *fonctionAvecRetourEtAvecArguments(int a, char b) { return NULL; }
    
    printf("\nTest : 223\n");
    result_Or = printf("Or: Fonction sans retour ni arguments '%p'\n", (void*)&fonctionSansRetourNiArguments);
    result_Ft = ft_printf("Ft: Fonction sans retour ni arguments '%p'\n", (void*)&fonctionSansRetourNiArguments);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");
   
    printf("\nTest : 224\n");
    result_Or = printf("Or: Fonction avec retour et sans arguments '%p'\n", (void*)&fonctionAvecRetourEtSansArguments);
    result_Ft = ft_printf("Ft: Fonction avec retour et sans arguments '%p'\n", (void*)&fonctionAvecRetourEtSansArguments);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 225\n");  
    result_Or = printf("Or: Fonction avec retour et avec arguments '%p'\n", (void*)&fonctionAvecRetourEtAvecArguments);
    result_Ft = ft_printf("Ft: Fonction avec retour et avec arguments '%p'\n", (void*)&fonctionAvecRetourEtAvecArguments);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    struct MaStructure { int entier; char caractere; };
    union MonUnion { int entier; char caractere; };
    
    struct MaStructure exempleStructure;
    union MonUnion exempleUnion;

    printf("\nTest : 226\n");
    result_Or = printf("Or: Structure '%p'\n", (void*)&exempleStructure);
    result_Ft = ft_printf("Ft: Structure '%p'\n", (void*)&exempleStructure);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 227\n");    
    result_Or = printf("Or: Union '%p'\n", (void*)&exempleUnion);
    result_Ft = ft_printf("Ft: Union '%p'\n", (void*)&exempleUnion);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");
    
    int *tableauDePointeurs[3] = {&entier, ptr_tableau, NULL};

    printf("\nTest : 228\n");
    result_Or = printf("Or: Tableau de pointeurs '%p %p %p'\n", (void*)tableauDePointeurs[0], (void*)tableauDePointeurs[1], (void*)tableauDePointeurs[2]);
    result_Ft = ft_printf("Ft: Tableau de pointeurs '%p %p %p'\n", (void*)tableauDePointeurs[0], (void*)tableauDePointeurs[1], (void*)tableauDePointeurs[2]);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");
    
    int ***ptr_ptr_ptr_entier = &ptr_ptr_entier;

    printf("\nTest : 229\n"); 
    result_Or = printf("Or: Pointeur vers pointeur de pointeur '%p'\n", (void*)ptr_ptr_ptr_entier);
    result_Ft = ft_printf("Ft: Pointeur vers pointeur de pointeur '%p'\n", (void*)ptr_ptr_ptr_entier);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 230\n");   
    result_Or = printf("Or: 'Texte %p texte %p texte'\n", (void*)ptr_entier, (void*)ptr_caractere);
    result_Ft = ft_printf("Ft: 'Texte %p texte %p texte'\n", (void*)ptr_entier, (void*)ptr_caractere);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 231\n");   
    result_Or = printf("Or: '%%p avec texte avant et après %p'\n", (void*)ptr_tableau);
    result_Ft = ft_printf("Ft: '%%p avec texte avant et après %p'\n", (void*)ptr_tableau);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 232\n");     
    int locale = 10;
    result_Or = printf("Or: Adresse d'une variable locale '%p'\n", (void*)&locale);
    result_Ft = ft_printf("Ft: Adresse d'une variable locale '%p'\n", (void*)&locale);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");
    
    struct Exemple {
        int valeur;
        int (*fonction)(int);
    };
    
    printf("\nTest : 233\n");  
    struct Exemple exemple;
    result_Or = printf("Or: Pointeur sur membre de structure '%p'\n", (void*)&exemple.valeur);
    result_Ft = ft_printf("Ft: Pointeur sur membre de structure '%p'\n", (void*)&exemple.valeur);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 234\n");     
    int variableGlobale = 42;
    result_Or = printf("Or: Adresse d'une variable globale '%p'\n", (void*)&variableGlobale);
    result_Ft = ft_printf("Ft: Adresse d'une variable globale '%p'\n", (void*)&variableGlobale);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 235\n");     
    int *ptrDynamique = malloc(sizeof(int));
    result_Or = printf("Or: Pointeur vers mémoire allouée dynamiquement '%p'\n", (void*)ptrDynamique);
    result_Ft = ft_printf("Ft: Pointeur vers mémoire allouée dynamiquement '%p'\n", (void*)ptrDynamique);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");
    free(ptrDynamique);

    printf("\nTest : 236\n");     
    result_Or = printf("Or: Pointeur avec zero padding '%020p'\n", (void*)ptr_entier);
    result_Ft = ft_printf("Ft: Pointeur avec zero padding '%020p'\n", (void*)ptr_entier);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 237\n");    
    double nombre = 42.42;
    result_Or = printf("Or: Conversion explicite de type '%p'\n", (void*)&nombre);
    result_Ft = ft_printf("Ft: Conversion explicite de type '%p'\n", (void*)&nombre);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");
    
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

    printf("\nTest : 238\n");      
    result_Or = printf("Or: Structure complexe '%p'\n", (void*)&cs);
    result_Ft = ft_printf("Ft: Structure complexe '%p'\n", (void*)&cs);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 138\n");     
    result_Or = printf("Or: Union complexe '%p'\n", (void*)&cu);
    result_Ft = ft_printf("Ft: Union complexe '%p'\n", (void*)&cu);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");
    
    printf("\nTest : 239\n");  
    result_Or = printf("Or: Pointeur avec padding et alignement gauche '%-20p'\n", (void*)ptr_entier);
    result_Ft = ft_printf("Ft: Pointeur avec padding et alignement gauche '%-20p'\n", (void*)ptr_entier);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");
 
    printf("\nTest : 241\n");
    char **ptr_ptr_char = &ptr_caractere;
    result_Or = printf("Or: Pointeur vers pointeur de char '%p'\n", (void*)ptr_ptr_char);
    result_Ft = ft_printf("Ft: Pointeur vers pointeur de char '%p'\n", (void*)ptr_ptr_char);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");
  
    printf("\nTest : 242\n");  
    int (*ptr_fonction)(void) = fonctionAvecRetourEtSansArguments;
    result_Or = printf("Or: Pointeur vers fonction '%p'\n", (void*)ptr_fonction);
    result_Ft = ft_printf("Ft: Pointeur vers fonction '%p'\n", (void*)ptr_fonction);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");
 
    printf("\nTest : 243\n");    
    volatile int vi = 10;
    result_Or = printf("Or: Pointeur vers variable volatile '%p'\n", (void*)&vi);
    result_Ft = ft_printf("Ft: Pointeur vers variable volatile '%p'\n", (void*)&vi);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");
   
    printf("\nTest : 244\n");  
    result_Or = printf("Or: Pointeur vers pointeur de char '%p'\n", (void*)ptr_ptr_char);
    result_Ft = ft_printf("Ft: Pointeur vers pointeur de char '%p'\n", (void*)ptr_ptr_char);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");
    
    printf("\nTest : 245\n"); 
    ptr_fonction = fonctionAvecRetourEtSansArguments;
    result_Or = printf("Or: Pointeur vers fonction '%p'\n", (void*)ptr_fonction);
    result_Ft = ft_printf("Ft: Pointeur vers fonction '%p'\n", (void*)ptr_fonction);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");
   
    printf("\nTest : 246\n");  
    // Test avec un pointeur sur une fonction ayant plusieurs arguments
    void *ptr_fonction_multiple_args = (void*)malloc(sizeof(int));
    result_Or = printf("Or: Pointeur vers fonction avec plusieurs arguments '%p'\n", ptr_fonction_multiple_args);
    result_Ft = ft_printf("Ft: Pointeur vers fonction avec plusieurs arguments '%p'\n", ptr_fonction_multiple_args);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");
  
    printf("\nTest : 247\n");
    // Test avec un pointeur sur une chaîne de caractères littérale
    const char *ptr_chaine = "Exemple de chaîne littérale";
    result_Or = printf("Or: Pointeur vers chaîne littérale '%p'\n", (void*)ptr_chaine);
    result_Ft = ft_printf("Ft: Pointeur vers chaîne littérale '%p'\n", (void*)ptr_chaine);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");
    
    printf("\nTest : 248\n"); 
    // Test avec un pointeur sur un pointeur vers une variable statique
    static int var_statique = 42;
    int *ptr_var_statique = &var_statique;
    int **ptr_ptr_var_statique = &ptr_var_statique;
    result_Or = printf("Or: Pointeur vers pointeur vers variable statique '%p'\n", (void*)ptr_ptr_var_statique);
    result_Ft = ft_printf("Ft: Pointeur vers pointeur vers variable statique '%p'\n", (void*)ptr_ptr_var_statique);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");
  
    printf("\nTest : 249\n");   
    // Test avec un pointeur sur un tableau de caractères statiques
    static char tableau_statique[10] = "Bonjour";
    result_Or = printf("Or: Pointeur vers tableau statique '%p'\n", (void*)tableau_statique);
    result_Ft = ft_printf("Ft: Pointeur vers tableau statique '%p'\n", (void*)tableau_statique);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");
  
    printf("\nTest : 250\n");   
    // Test avec un pointeur vers un type volatile
    volatile int var_volatile = 10;
    result_Or = printf("Or: Pointeur vers variable volatile '%p'\n", (void*)&var_volatile);
    result_Ft = ft_printf("Ft: Pointeur vers variable volatile '%p'\n", (void*)&var_volatile);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");
  
    printf("\nTest : 251\n");   
    // Test avec un pointeur vers un type const
    const int var_const = 100;
    result_Or = printf("Or: Pointeur vers variable const '%p'\n", (void*)&var_const);
    result_Ft = ft_printf("Ft: Pointeur vers variable const '%p'\n", (void*)&var_const);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");
   
    printf("\nTest : 252\n");    
    // Test d'affichage de l'adresse d'une variable automatique (locale) d'une autre fonction
    int (*fonction_locale)(void) = fonctionAvecRetourEtSansArguments;
    result_Or = printf("Or: Pointeur vers fonction locale '%p'\n", (void*)fonction_locale);
    result_Ft = ft_printf("Ft: Pointeur vers fonction locale '%p'\n", (void*)fonction_locale);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    free(ptr_fonction_multiple_args);

    printf("\nTest : 254\n"); 
    result_Or = printf("Or :   |%p|\n", null_p);
    result_Ft = ft_printf("Ft :   |%p|\n", null_p);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 255\n"); 
	result_Or = printf("OR :%%16p = *%16p*\n", ptr);
	result_Ft = ft_printf("FT :%%16p = *%16p*\n", ptr);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 256\n"); 
	result_Or = printf("OR :%%-16p = *%-16p*\n", ptr);
	result_Ft = ft_printf("FT :%%-16p = *%-16p*\n", ptr);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 257\n"); 
	result_Or = printf("OR :%%16p, %%-16p = *%16p*, *%-16p*\n", ptr, ptr);
	result_Ft = ft_printf("FT :%%16p, %%-16p = *%16p*, *%-16p*\n", ptr, ptr);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

	for (int i = 0; i < num_pointers; i++) 
	{

        printf("\nTest : %d\n", 254 + i); 
		result_Or = printf("OR :%%p = *%p*\n", pointers[i]);
		result_Ft = ft_printf("FT :%%p = *%p*\n", pointers[i]);
		printf("result Or = %d\n", result_Or);
		printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");
	}


	printf("  ---   ---   ---   ---\n  |-|   |-|   |-|   |-|\n  |-|   |-|   |-|   |-|\n ----- ----- ----- -----\n  ---   ---   ---   ---\n   -     -     -     -\n\n");
	printf("*   |||---   BONUS : %%s   ---|||   *\n\n\n");

    printf("\nTest : 263\n"); 
	result_Or = printf("Or :%%s: *%s*\n", str);
	result_Ft = ft_printf("Ft :%%s: *%s*\n", str);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 264\n"); 
	result_Or = printf("Or :%%23s: *%23s*\n", "La petite fleur bleue.");
	result_Ft = ft_printf("Ft :%%23s: *%23s*\n", "La petite fleur bleue.");
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 265\n"); 
	result_Or = printf("Or :%%.5s: *%.5s*\n", str);
	result_Ft = ft_printf("Ft :%%.5s: *%.5s*\n", str);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 266\n");
	result_Or = printf("Or :%%10.5s: *%10.5s*\n", str);
	result_Ft = ft_printf("Ft :%%10.5s: *%10.5s*\n", str);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 267\n");
	result_Or = printf("Or :%%-19s: *%-19s*\n", str);
	result_Ft = ft_printf("Ft :%%-19s: *%-19s*\n", str);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 268\n");
	result_Or = printf("Or :%%-10.5s: *%-10.5s*\n", str);
	result_Ft = ft_printf("Ft :%%-10.5s: *%-10.5s*\n", str);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 269\n");
	result_Or = printf("Or :%%s = *%s*, %%23s = *%23s*, %%.5s = *%.5s*, %%10.5s = *%10.5s*, %%-23s = *%-23s*, %%-10.5s = *%-10.5s*\n", "La petite fleur bleue.", "La petite fleur bleue.", "La petite fleur bleue.", "La petite fleur bleue.", "La petite fleur bleue.", "La petite fleur bleue.");
	result_Ft = ft_printf("Ft :%%s = *%s*, %%23s = *%23s*, %%.5s = *%.5s*, %%10.5s = *%10.5s*, %%-23s = *%-23s*, %%-10.5s = *%-10.5s*\n", "La petite fleur bleue.", "La petite fleur bleue.", "La petite fleur bleue.", "La petite fleur bleue.", "La petite fleur bleue.", "La petite fleur bleue.");
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

	printf("  ---   ---   ---   ---\n  |-|   |-|   |-|   |-|\n  |-|   |-|   |-|   |-|\n ----- ----- ----- -----\n  ---   ---   ---   ---\n   -     -     -     -\n\n");
	printf("*   |||---   BONUS : %%c   ---|||   *\n\n\n");

    printf("\nTest : 270\n");
	result_Ft = ft_printf("FT :%%c = *%c*\n", lettre);
	result_Or = printf("OR :%%c = *%c*\n", lettre);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 271\n");
	result_Ft = ft_printf("FT :%%5c = *%5c*\n", lettre);
	result_Or = printf("OR :%%5c = *%5c*\n", lettre);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 272\n");
	result_Ft = ft_printf("FT :%%-5c = *%-5c*\n", lettre);
	result_Or = printf("OR :%%-5c = *%-5c*\n", lettre);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 273\n");
	result_Ft = ft_printf("FT :%%c, %%5c, %%-5c = *%c*, *%5c*, *%-5c*\n", ' ', lettre, 'A');
	result_Or = printf("OR :%%c, %%5c, %%-5c = *%c*, *%5c*, *%-5c*\n", ' ', lettre, 'A');
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");
	 

	printf("\n\n  ---   ---   ---   ---\n  |-|   |-|   |-|   |-|\n  |-|   |-|   |-|   |-|\n ----- ----- ----- -----\n  ---   ---   ---   ---\n   -     -     -     -\n\n");
	printf("*   |||---   OBLIGATOIRE   ---|||   *\n\n\n");

    printf("\nTest : 274\n");
	result_Or = printf("OR :%%p = *%p*\n", null_ptr);
	result_Ft = ft_printf("FT :%%p = *%p*\n", null_ptr);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 275\n");
	result_Or = printf("OR :%%c = *%c*\n", lettre);
	result_Ft = ft_printf("FT :%%c = *%c*\n", lettre);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 276\n");
	result_Or = printf("OR :%%s = *%s*\n", str);
	result_Ft = ft_printf("FT :%%s = *%s*\n", str);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 277\n");
	result_Or = printf("OR :%%p = *%p*\n", ptr);
	result_Ft = ft_printf("FT :%%p = *%p*\n", ptr);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 278\n");
	result_Or = printf("OR :%%d = *%d*\n", 42);
	result_Ft = ft_printf("FT :%%d = *%d*\n", 42);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 279\n");
	result_Or = printf("OR :%%i = *%i*\n", -42);
	result_Ft = ft_printf("FT :%%i = *%i*\n", -42);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 280\n");
	result_Or = printf("OR :%%u = *%u*\n", 42u);
	result_Ft = ft_printf("FT :%%u = *%u*\n", 42u);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 281\n");
	result_Or = printf("OR :%%u = *%u*\n", 4294967295u);
	result_Ft = ft_printf("FT :%%u = *%u*\n", 4294967295u);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 282\n");
	result_Or = printf("OR :%%x = *%x*\n", 42);
	result_Ft = ft_printf("FT :%%x = *%x*\n", 42);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 283\n");
	result_Or = printf("OR :%%X = *%X*\n", 42);
	result_Ft = ft_printf("FT :%%X = *%X*\n", 42);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 284\n");
	result_Or = printf("OR :%%%% = *%%*\n");
	result_Ft = ft_printf("FT :%%%% = *%%*\n");
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

	printf("\n\n  ---   ---   ---   ---\n  |-|   |-|   |-|   |-|\n  |-|   |-|   |-|   |-|\n ----- ----- ----- -----\n  ---   ---   ---   ---\n   -     -     -     -\n\n");
	printf("*   |||---   OBLIGATOIRE correction  ---|||   *\n\n\n");

//------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	
    printf("\nTest : 285\n");
    result_Or = printf("OR :%%d = *%d*\n", 0);
	result_Ft = ft_printf("FT :%%d = *%d*\n", 0);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 286\n");
	result_Or = printf("OR :%%i = *%i*\n", 0);
	result_Ft = ft_printf("FT :%%i = *%i*\n", 0);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 287\n");
	result_Or = printf("OR :%%u = *%u*\n", 0u);
	result_Ft = ft_printf("FT :%%u = *%u*\n", 0u);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 288\n");
	result_Or = printf("OR :%%X = *%X*\n", 0);
	result_Ft = ft_printf("FT :%%X = *%X*\n", 0);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 289\n");
	result_Or = printf("OR :%%s = *%s*\n", "");
	result_Ft = ft_printf("FT :%%s = *%s*\n", "");
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 290\n");
	result_Or = printf("OR :%%p = *%p*\n", NULL);
	result_Ft = ft_printf("FT :%%p = *%p*\n", NULL);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 291\n");
	result_Or = printf("OR :%%d, %%i, %%u, %%X, %%s, %%p = *%d*, *%i*, *%u*, *%X*, *%s*, *%p*\n", 0, 0, 0u, 0, "", NULL);
	result_Ft = ft_printf("FT :%%d, %%i, %%u, %%X, %%s, %%p = *%d*, *%i*, *%u*, *%X*, *%s*, *%p*\n", 0, 0, 0u, 0, "", NULL);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 292\n");
	result_Or = printf("OR :%%d, %%d, %%d, %%d, %%d, %%d = *%d*, *%d*, *%d*, *%d*, *%d*, *%d*\n", 0, 0, 0, 0, 0, 0);
	result_Ft = ft_printf("FT :%%d, %%d, %%d, %%d, %%d, %%d = *%d*, *%d*, *%d*, *%d*, *%d*, *%d*\n", 0, 0, 0, 0, 0, 0);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 293\n");
	result_Or = printf("OR :%%i, %%i, %%i, %%i, %%i, %%i = *%i*, *%i*, *%i*, *%i*, *%i*, *%i*\n", 0, 0, 0, 0, 0, 0);
	result_Ft = ft_printf("FT :%%i, %%i, %%i, %%i, %%i, %%i = *%i*, *%i*, *%i*, *%i*, *%i*, *%i*\n", 0, 0, 0, 0, 0, 0);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 294\n");
	result_Or = printf("OR :%%u, %%u, %%u, %%u, %%u, %%u = *%u*, *%u*, *%u*, *%u*, *%u*, *%u*\n", 0u, 0u, 0u, 0u, 0u, 0u);
	result_Ft = ft_printf("FT :%%u, %%u, %%u, %%u, %%u, %%u = *%u*, *%u*, *%u*, *%u*, *%u*, *%u*\n", 0u, 0u, 0u, 0u, 0u, 0u);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 295\n");
	result_Or = printf("OR :%%x, %%x, %%x, %%x, %%x, %%x = *%x*, *%x*, *%x*, *%x*, *%x*, *%x*\n", 0, 0, 0, 0, 0, 0);
	result_Ft = ft_printf("FT :%%x, %%x, %%x, %%x, %%x, %%x = *%x*, *%x*, *%x*, *%x*, *%x*, *%x*\n", 0, 0, 0, 0, 0, 0);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 296\n");
	result_Or = printf("OR :%%X, %%X, %%X, %%X, %%X, %%X = *%X*, *%X*, *%X*, *%X*, *%X*, *%X*\n", 0, 0, 0, 0, 0, 0);
	result_Ft = ft_printf("FT :%%X, %%X, %%X, %%X, %%X, %%X = *%X*, *%X*, *%X*, *%X*, *%X*, *%X*\n", 0, 0, 0, 0, 0, 0);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 297\n");
	result_Or = printf("OR :%%p, %%p, %%p, %%p, %%p, %%p = *%p*, *%p*, *%p*, *%p*, *%p*, *%p*\n", NULL, NULL, NULL, NULL, NULL, NULL);
	result_Ft = ft_printf("FT :%%p, %%p, %%p, %%p, %%p, %%p = *%p*, *%p*, *%p*, *%p*, *%p*, *%p*\n", NULL, NULL, NULL, NULL, NULL, NULL);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 298\n");
	result_Or = printf("OR :%%s, %%s, %%s, %%s, %%s, %%s = *%s*, *%s*, *%s*, *%s*, *%s*, *%s*\n", "", "", "", "", "", "");
	result_Ft = ft_printf("FT :%%s, %%s, %%s, %%s, %%s, %%s = *%s*, *%s*, *%s*, *%s*, *%s*, *%s*\n", "", "", "", "", "", "");
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 299\n");
	result_Or = printf("OR :%%d = *%d*\n", INT_MIN);
	result_Ft = ft_printf("FT :%%d = *%d*\n", INT_MIN);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 300\n");
	result_Or = printf("OR :%%i = *%i*\n", INT_MIN);
	result_Ft = ft_printf("FT :%%i = *%i*\n", INT_MIN);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 301\n");
	result_Or = printf("OR :%%u = *%u*\n", UINT_MAX);
	result_Ft = ft_printf("FT :%%u = *%u*\n", UINT_MAX);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 302\n");
	result_Or = printf("OR :%%X = *%X*\n", INT_MIN);
	result_Ft = ft_printf("FT :%%X = *%X*\n", INT_MIN);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 303\n");
	result_Or = printf("OR :%%x = *%x*\n", INT_MAX);
	result_Ft = ft_printf("FT :%%x = *%x*\n", INT_MAX);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 304\n");
	result_Or = printf("OR :%%s = *%s*\n", "JVBFJADVBFJDAVBPJFDAPBVJFDKAVBJFDKBVJFDKBVJFDKBVFJDBVJFDBVJFDBVJFDBVJFDBVJFDVBJFDBVJFDBVJFDBVJFDABVUJREIPGHUREGHTBVHGFBVJFKDNAVJDPHFURHBVFDJKVJFDAHPUFRIPEHGFBNVJKFDNZJHEUGHFSBVJFKDNVJDO[HAGURFHBFVJSDVNJDKAVNIOEPHGUFBVJKBVNDZJKVNDKASHGURIEBGHVFSD NK;NCZJKV;NDKHGJFDBSVJNKFDV;FMDKSOJGIRSPHGJBLSFNVKDNEWJPNJEWBFJDKSNBJVDPSBJF");
	result_Ft = ft_printf("FT :%%s = *%s*\n", "JVBFJADVBFJDAVBPJFDAPBVJFDKAVBJFDKBVJFDKBVJFDKBVFJDBVJFDBVJFDBVJFDBVJFDBVJFDVBJFDBVJFDBVJFDBVJFDABVUJREIPGHUREGHTBVHGFBVJFKDNAVJDPHFURHBVFDJKVJFDAHPUFRIPEHGFBNVJKFDNZJHEUGHFSBVJFKDNVJDO[HAGURFHBFVJSDVNJDKAVNIOEPHGUFBVJKBVNDZJKVNDKASHGURIEBGHVFSD NK;NCZJKV;NDKHGJFDBSVJNKFDV;FMDKSOJGIRSPHGJBLSFNVKDNEWJPNJEWBFJDKSNBJVDPSBJF");
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 306\n");
	result_Or = printf("OR :%%d, %%i, %%u, %%X, %%s, %%p = *%d*, *%i*, *%u*, *%X*, *%s*, *%p*\n", 0, 0, 0u, 0, "", NULL);
	result_Ft = ft_printf("FT :%%d, %%i, %%u, %%X, %%s, %%p = *%d*, *%i*, *%u*, *%X*, *%s*, *%p*\n", 0, 0, 0u, 0, "", NULL);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 307\n");
	result_Or = printf("OR :%%d, %%d, %%d, %%d, %%d, %%d = *%d*, *%d*, *%d*, *%d*, *%d*, *%d*\n", 0, 0, 0, 0, 0, 0);
	result_Ft = ft_printf("FT :%%d, %%d, %%d, %%d, %%d, %%d = *%d*, *%d*, *%d*, *%d*, *%d*, *%d*\n", 0, 0, 0, 0, 0, 0);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 308\n");
	result_Or = printf("OR :%%i, %%i, %%i, %%i, %%i, %%i = *%i*, *%i*, *%i*, *%i*, *%i*, *%i*\n", 0, 0, 0, 0, 0, 0);
	result_Ft = ft_printf("FT :%%i, %%i, %%i, %%i, %%i, %%i = *%i*, *%i*, *%i*, *%i*, *%i*, *%i*\n", 0, 0, 0, 0, 0, 0);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 309\n");
	result_Or = printf("OR :%%u, %%u, %%u, %%u, %%u, %%u = *%u*, *%u*, *%u*, *%u*, *%u*, *%u*\n", 0u, 0u, 0u, 0u, 0u, 0u);
	result_Ft = ft_printf("FT :%%u, %%u, %%u, %%u, %%u, %%u = *%u*, *%u*, *%u*, *%u*, *%u*, *%u*\n", 0u, 0u, 0u, 0u, 0u, 0u);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 310\n");
	result_Or = printf("OR :%%x, %%x, %%x, %%x, %%x, %%x = *%x*, *%x*, *%x*, *%x*, *%x*, *%x*\n", 0, 0, 0, 0, 0, 0);
	result_Ft = ft_printf("FT :%%x, %%x, %%x, %%x, %%x, %%x = *%x*, *%x*, *%x*, *%x*, *%x*, *%x*\n", 0, 0, 0, 0, 0, 0);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 311\n");
	result_Or = printf("OR :%%X, %%X, %%X, %%X, %%X, %%X = *%X*, *%X*, *%X*, *%X*, *%X*, *%X*\n", 0, 0, 0, 0, 0, 0);
	result_Ft = ft_printf("FT :%%X, %%X, %%X, %%X, %%X, %%X = *%X*, *%X*, *%X*, *%X*, *%X*, *%X*\n", 0, 0, 0, 0, 0, 0);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 312\n");
	result_Or = printf("OR :%%p, %%p, %%p, %%p, %%p, %%p = *%p*, *%p*, *%p*, *%p*, *%p*, *%p*\n", NULL, NULL, NULL, NULL, NULL, NULL);
	result_Ft = ft_printf("FT :%%p, %%p, %%p, %%p, %%p, %%p = *%p*, *%p*, *%p*, *%p*, *%p*, *%p*\n", NULL, NULL, NULL, NULL, NULL, NULL);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 313\n");
	result_Or = printf("OR :%%s, %%s, %%s, %%s, %%s, %%s = *%s*, *%s*, *%s*, *%s*, *%s*, *%s*\n", "", "", "", "", "", "");
	result_Ft = ft_printf("FT :%%s, %%s, %%s, %%s, %%s, %%s = *%s*, *%s*, *%s*, *%s*, *%s*, *%s*\n", "", "", "", "", "", "");
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");


    printf("\nTest : 314\n");
    result_Or = printf("OR :%%0+-25.23.78s, %%.0s, %%#+25-s, %%0-s, %%+.s, %%25+s = *%s*, *%s*, *%s*, *%s*, *%s*, *%s*\n", str, str, str, str, str, str);
    result_Ft = ft_printf("FT :%%0+-25.23.78s, %%.0s, %%#+25-s, %%0-s, %%+.s, %%25+s = *%s*, *%s*, *%s*, *%s*, *%s*, *%s*\n", str, str, str, str, str, str);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 315\n");
    result_Or = printf("OR :%%p, %%.p, %%+20p, %%#.-52p, %%+#025.p, %%-.#p = *%p*, *%p*, *%p*, *%p*, *%p*, *%p*\n", ptr_entier, ptr_entier, ptr_entier, ptr_entier, ptr_entier, ptr_entier);
    result_Ft = ft_printf("FT :%%p, %%.p, %%+20p, %%#.-52p, %%+#025.p, %%-.#p = *%p*, *%p*, *%p*, *%p*, *%p*, *%p*\n", ptr_entier, ptr_entier, ptr_entier, ptr_entier, ptr_entier, ptr_entier);
    printf("result Or = %d\n", result_Or);
    printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    printf("\nTest : 316\n");
	char *str_var = NULL; 
	result_Or = printf("OR :%%s = *%s*\n", str_var);
	result_Ft = ft_printf("FT :%%s = *%s*\n", str_var);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

	printf("\nTest : 317\n");
	result_Or = printf("OR :%%p = *%p*\n", str_var);
	result_Ft = ft_printf("FT :%%p = *%p*\n", str_var);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

	printf("\nTest : 318\n");
	result_Or = printf("OR :%%u = *%u*\n", str_var);
	result_Ft = ft_printf("FT :%%u = *%u*\n", str_var);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

	printf("\nTest : 319\n");
	result_Or = printf("OR :%%d = *%d*\n", str_var);
	result_Ft = ft_printf("FT :%%d = *%d*\n", str_var);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

	printf("\nTest : 320\n");
	result_Or = printf("OR :NULL %s NULL\n", str_var);
	result_Ft = ft_printf("FT :NULL %s NULL\n", str_var);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

	printf("\nTest : 321\n");
	result_Or = printf("OR :NULL %p NULL\n", str_var);
	result_Ft = ft_printf("FT :NULL %p NULL\n", str_var);
	printf("result Or = %d\n", result_Or);
	printf("result Ft = %d\n\n", result_Ft);
    if (result_Or != result_Ft)
        printf("\033[1m\033[31m-----------------------------------------------------Erreur -----------------------------------------------------------------------------------------------------.\n\n\n\n\n\033[0m");
    else if (result_Or == result_Ft)
        printf("\033[1m\033[32mOK.\n\n\033[0m");

    ft_printf("%d\n", ft_printf("%s\n", NULL));
    printf("%d\n", ft_printf("%s\n", NULL));

    ft_printf("%d\n", ft_printf("%p\n", NULL));
    printf("%d\n", printf("%p\n", NULL));

    ft_printf("%d\n", ft_printf("%p%%%X\n", NULL));
    printf("%d\n", printf("%p%%%X\n", NULL));

    ft_printf("%d\n", ft_printf("%p%%%X\n", NULL, 789));
    printf("%d\n", printf("%p%%%X\n", NULL, 789));

