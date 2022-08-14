#include <stdio.h>
/* It counts the number of times a letter appears in a string */

int qtdletras(char texto[], char l, int n)
{
/* Checking if the string is empty. */
    if (texto[n] == '\0')
        return 0;
/* Checking if the letter is equal to the letter in the string. If it is, it returns 1 + the number of times the letter appears in the string. */
    else if (texto[n] == l)
        return 1 + qtdletras(texto, l, n + 1);
/* Returning the number of times the letter appears in the string. */
    else
        return 0 + qtdletras(texto, l, n + 1);
}

main()
{
/* Asking for a string and a letter, and then it prints the number of times the letter appears in the string. */
    char texto[80], letra;
    
    printf("TEXTO: ");
        gets(texto);
    printf("\nLETRA: ");
        scanf("%c", &letra);
    printf("\n\nO TEXTO POSSUI %d LETRAS %c", qtdletras(texto, letra, 0), letra);
}
