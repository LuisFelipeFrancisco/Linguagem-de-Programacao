#include <stdio.h>
#include <string.h>

main ()
{
    char nome[50];
/* Clearing the buffer. */
    fflush(stdin); // zera buffer
    printf("Nome: ");
    gets(nome);
    printf("\n\nNome Digitado: ");
    puts(nome);
    printf("Tamanho: %d\n", strlen(nome));
/* It's converting the string to uppercase. */
    printf(strupr(nome));
    printf("\n");
/* It's converting the string to lowercase. */ 
    printf(strlwr(nome));
}
