#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
/* A program that converts a string to uppercase and lowercase. */
    int i;
    char frase[80], convertido;

    printf("Digite uma frase: ");
/* Flushing the input buffer. */
    fflush(stdin); 
    fgets (frase, 80, stdin);
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
