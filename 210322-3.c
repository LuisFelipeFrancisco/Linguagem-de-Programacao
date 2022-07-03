//Escrever um programa que leia uma matriz 5x5 leia um numero de uma linha (entre 0 e 4). calcular e exibir a soma da linha digitada. exibir a matriz.
#include <stdio.h>

main ()
{
	int mat[5][5], n, i, j, k, soma=0;
	
	for (i=0;i<5;i++)
		for (j=0;j<5;j++)
		{
			printf ("Digite o elemento da matriz [%d][%d]: ", i,j);
			scanf ("%d", &mat[i][j]);
		}

	printf ("Digite um numero referente a linha (entre 0 e 4): ");
	scanf ("%d", &n);
	
	for (j=0; j<5; j++)
	soma = soma+mat[n][j];
	
	
	
	printf ("\n\nMatriz: \n");
	for (i=0;i<5;i++)
	{
		for (j=0;j<5;j++)
			
			printf("%4d", mat[i][j]);
			printf("\n");			
			
	}
	
	printf ("\n\nSoma da linha %d: %d", n, soma);
	

	
}
