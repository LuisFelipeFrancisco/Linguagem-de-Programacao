#include <stdio.h>

int contadordeletras(char palavra[], int n) // conta o numero de letras de uma palavra.
{
    if (palavra[n] == '\0') // se a palavra acabar, retorna 0.
        return 0;
    else
        return 1 + contadordeletras(palavra, n + 1); // se ainda nao acabou, retorna 1 mais o numero de letras da palavra.
}

main()
{
    char palavra[100]; // cria uma variavel para armazenar a palavra.

    printf("Digite uma palavra:\n"); // pede para o usuario digitar uma palavra.
        gets(palavra); // armazena a palavra no vetor.
    printf("\nNumeros de caracteres da palavra digitada: %d", contadordeletras(palavra, 0)); // imprime o numero de letras da palavra.
}
