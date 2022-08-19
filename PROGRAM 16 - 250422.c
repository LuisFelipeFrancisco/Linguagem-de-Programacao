#include <stdio.h>
#include <string.h>

int main ()
{
    char nome[50];
/* Clearing the buffer. */
    fflush(stdin); // zera buffer
    printf("Nome: ");
    fgets(nome, 50, stdin); // pega o nome
    printf("\n\nNome Digitado: ");
    puts(nome);
    printf("Tamanho: %d\n", strlen(nome));
/* It's converting the string to uppercase. */
    printf(strupr(nome)); 
    printf("\n");
/* It's converting the string to lowercase. */ 
    printf(strlwr(nome)); 
}
