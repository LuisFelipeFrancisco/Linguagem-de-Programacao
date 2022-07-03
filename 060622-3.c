#include<stdio.h>

int qtdletras (char texto[],char l , int n){
	if (texto[n] =='\0')
		return 0;
	else if (texto[n] == l)
		return 1+qtdletras(texto,l,n+1);
	else return 0+qtdletras(texto,l,n+1);
}

main (){
	char texto[80], letra;
	printf("TEXTO: ");
	gets (texto);
	printf("\nLETRA: ");
	scanf("%c", &letra);
	printf("\n\nO TEXTO POSSUI %d LETRAS %c", qtdletras(texto,letra,0),letra);
	
}
