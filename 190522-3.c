#include <stdio.h>

void correpondente (int n)
{
	if (n==0)
		return;
	else correpondente (n/2);
	printf ("%d", n%2);
}

main (){
	int num;
	
	printf("Numero Inteiro Positivo: ");
	scanf ("%d", &num);
	printf("\nCorrepondente Binario: \n");
	correpondente(num);
}
	
