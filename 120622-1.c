#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main ()
{
	char str1[80], str2[80], str3[80], strmaisculo[80];
	int i, j=0;
	fflush (stdin);
	printf ("Frase: ");
	gets(str1);
	//tirar espaço frase 1
	for (i=0;i<strlen(str1);i++)
		if (str1[i] != ' ')
		{
			str2[j]=str1[i];
			j++;
		}
	str2[j]='\0';
	printf ("\n\nFrase sem espaco: ");
	puts (str2);
	//inverter frase sem espaço	
	for (i=0;i<strlen(str2);i++) 
	str3[i]=str2[(strlen(str2)-1-i)];
	str3[i]='\0';
	printf("\n\nInversa: ");
	puts (str3);
	//comparar 2 com a 3	
	if (strcmp(str2, str3)==0)
		printf("\n\nSao palindromos");
	else 
		printf("\n\nNao sao palindromos");
	//converter para maiuscula
	
	printf ("\n\nFrase em Maiusculo: ");
	strupr(str1);
	puts (str1); 
	printf ("\n\nFrase em minusculo: ");
	strlwr(str1);
	puts (str1); 
}
