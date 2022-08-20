#include <stdio.h>
/* It counts the number of times a letter appears in a string */

int qtdletras(char texto[], char l, int n) // Quantidade de letras.
{
    if (texto[n] == '\0') // Se o texto for nulo, retorna 0.
        return 0;
    else if (texto[n] == l) // Se o texto for igual a letra, retorna 1 mais a quantidade de letras.
        return 1 + qtdletras(texto, l, n + 1); // Retorna a quantidade de letras.
    else
        return 0 + qtdletras(texto, l, n + 1); // Retorna 0.
}

main()
{
/* Asking for a string and a letter, and then it prints the number of times the letter appears in the string. */
    char texto[80], letra;
    
    printf("TEXTO: ");
        fgets(texto, 80, stdin);
    printf("\nLETRA: ");
        scanf("%c", &letra);
    printf("\n\nO TEXTO POSSUI %d LETRAS %c", qtdletras(texto, letra, 0), letra);
}
