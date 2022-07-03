#include <stdio.h>
#include <string.h>

main ()
{
	char srt1[20], srt2[20];
	printf ("Palavra 1: ");
	gets (srt1);
	printf ("Palavra 2: ");
	gets (srt2);
	printf ("\n\nPalavra 1: ");
	puts (srt1);
	printf ("\n\nPalavra 2: ");
	puts (srt2);
	if (strcmp(srt1, srt2)==0)
		printf("\n\nPalavras iguais.");
	else 
		printf("\n\nPalavras diferentes.");
	strcpy (srt1,srt2);
	printf ("\n\nPalavra 1: ");
	puts (srt1);
	printf ("\n\nPalavra 2: ");
	puts (srt2);
	
	printf (strcat(srt1,srt2));
	
	
}
