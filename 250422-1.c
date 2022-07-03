#include <stdio.h>
#include <string.h>

main ()
{
	char nome[50];
	fflush (stdin); // zera buffer
	printf("Nome: ");
	//scanf("%s", &nome);
	gets (nome);
	printf("\n\nNome Digitado: ");
	puts (nome);
	printf ("Tamanho: %d\n", strlen (nome));
	printf (strupr (nome));
	printf("\n");
	printf (strlwr (nome));
	
}
