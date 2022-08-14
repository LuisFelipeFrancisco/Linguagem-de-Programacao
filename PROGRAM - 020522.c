#include <stdio.h>
#include <string.h>
#include <ctype.h>

main()
{
/* A program that converts a string to uppercase and lowercase. */
    int i;
    char frase[40], convertido;

    printf("Digite uma frase: ");
/* Flushing the input buffer. */
    fflush(stdin);
    gets(frase);
    printf("Frase em Maiusculo: ");
    while (frase[i])
    {
        convertido = frase[i];
/* Converting the character to uppercase and printing it. */
        putchar(toupper(convertido));
        i++;
    }
    i = 0;
    printf("\nFrase em Minisculo: ");
    while (frase[i])
    {
        convertido = frase[i];
/* Converting the character to lowercase and printing it. */
        putchar(tolower(convertido));
        i++;
    }
}
