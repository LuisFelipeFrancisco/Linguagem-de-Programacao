#include<stdio.h>

int retorno (int num){
	if (num == 0 )
		return 0;
else return 1+retorno(num/10);	
}


main (){
	int x;
	
	do{
		printf ("NUMERO: ");
		scanf ("%d", &x);
	} while (x<0);
	
	printf ("QTD DE DIGITOS DE %d: %d", x, retorno(x));
	
}
