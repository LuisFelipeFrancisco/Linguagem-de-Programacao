#include <stdio.h>

int fatorial (int n)
{
	if ((n == 0) || (n == 0))/* condição de parada da recursão */
 		return 1;
 	/*else if (n < 0) 
 		printf ("Erro: fatorial de número negativo!\n");*/
	else 
		return n*fatorial(n-1);
}

main (){
	int num, fat;
	
	do 
	{
	
	printf("Digite um numero: ");
	scanf ("%d", &num);
	if (num < 0) 
 	printf ("Erro: Nao e possivel calcular fatorial de numero negativo!\n");
	else
	{
	fat = fatorial (num);
	printf("Fatorial de %d: %d\n", num, fat);
	}
	} while (1);
}

