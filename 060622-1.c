#include<stdio.h>

int mult (int num, int qtd)
{
	if (qtd == 1)
	return num;
	else return num + mult (num, qtd-1);
}


main(){
	int a, b;
	
	printf("NUMERO BASE: ");
	scanf ("%d", &a);
	
	do 
	{ 
		printf("\nVEZES: ");
		scanf("%d", &b);
	} while (b<1);
	
	printf("%d X %d = %d", a,b, mult(a,b));
}
