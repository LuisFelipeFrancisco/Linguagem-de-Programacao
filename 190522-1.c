#include <stdio.h>

int calculaAr (int n)
{
	if (n==1)
		return 1;
	else return n*calculaAr(n-1);
}

main (){
	int n, p;
	
	do{
		printf("Valor do N: ");
		scanf ("%d", &n);
	} while (n<1);
	
	do {
		printf("\nValor de P: ");
		scanf ("%d", &p);
	} while ((p<1) || (p>=n));
	
	printf("\n\nArranjo (%d;%d) = %.2f", n,p,(float) calculaAr(n)/calculaAr(n-p));
}
