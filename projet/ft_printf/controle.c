#include <stdio.h>

int main() {
    int number = 123;
    int numberNeg = -123;
    unsigned int unumber = 123;
    char c = 'A';

    // Tests pour %d et %i
    printf("%%d : %d\n", number);
    printf("%%5d : %5d\n", number);
    printf("%%-5d : %-5d\n", number);
    printf("%%05d : %05d\n", number);
    printf("%%+5d : %+5d\n", number);
    printf("%%-05d (priorité à '-') : %-05d\n", number);
    printf("%% 5d (espace pour positif) : % 5d\n", number);
    printf("%%-+5d (priorité à '-') : %-+5d\n", number);
    printf("%%+-5d (priorité à '-') : %+-5d\n", number);
    printf("%%05d avec négatif : %05d\n", numberNeg);

    // Tests pour %u
    printf("%%u : %u\n", unumber);
    printf("%%5u : %5u\n", unumber);
    printf("%%-5u : %-5u\n", unumber);
    printf("%%05u : %05u\n\n", unumber);

    // Tests pour %x et %X
    printf("%%x : %x\n", unumber);
    printf("%%#x : %#x\n", unumber);
    printf("%%X : %X\n", unumber);
    printf("%%#X : %#X\n\n", unumber);

    // Tests pour %f
    double fnumber = 123.456;
    printf("%%f : %f\n", fnumber);
    printf("%%.2f : %.2f\n", fnumber);
    printf("%%9.2f : %9.2f\n", fnumber);
    printf("%%-9.2f : %-9.2f\n", fnumber);
    printf("%%+9.2f : %+9.2f\n", fnumber);
    printf("%% 9.2f (espace pour positif) : % 9.2f\n\n", fnumber);

    // Tests de base pour %c
    printf("%%c : *%c*\n", c);
    printf("%%3c : *%3c*\n", c);  // Avec largeur de champ
    printf("%%-3c : *%-3c*\n", c); // Alignement à gauche
    printf("%%.c : *%.c*\n", c); // Non pris en compte
    printf("%%.3c : *%.3c*\n\n", c); // Non pris en compte

    return 0;
}