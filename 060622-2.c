#include <stdio.h>

int contadordeletras (char palavra[], int n){
	if (palavra[n] =='\0')
		return 0;
	else return 1+contadordeletras (palavra, n+1);
}


main(){
	
	char palavra[100];
	
	printf("Digite uma palavra:\n");
	gets (palavra);
	//scanf("%s", &palavra);
	printf("\nNumeros de caracteres da palavra digitada: %d", contadordeletras(palavra,0));
}
