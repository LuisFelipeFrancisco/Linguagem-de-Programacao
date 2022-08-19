#include <stdio.h>
#include <string.h>

int main ()
{
    char nome[50];
    fflush(stdin); // zera buffer
    printf("Nome: ");
    fgets(nome, 50, stdin); // pega o nome
    printf("\n\nNome Digitado: ");
    puts(nome);
    printf("Tamanho: %d\n", strlen(nome)); // tamanho do nome
    printf(strupr(nome));  // converte para maiusculo
    printf("\n");
    printf(strlwr(nome)); // converte para minusculo
}
