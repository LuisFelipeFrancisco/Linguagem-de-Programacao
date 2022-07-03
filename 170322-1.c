//Escrever um programa que leia uma matriz 4x4. Calcule e exiba a soma dos elementos da Diagonal Principal. Exibir a Matriz.
#include <stdio.h>

main ()
{
	int i, j, soma, mat[4][4];
	
	for (i=0;i<4;i++)
		for (j=0;j<4;j++)
		{
			printf ("Digite o elemento da matriz [%d][%d]: ", i,j);
			scanf ("%d", &mat[i][j]);
		}
	for (i=0;i<4;i++)
		soma=soma+mat[i][i];
	
	printf ("\n\nMatriz Lida: \n");
	for (i=0;i<4;i++)
	{
		
		for (j=0;j<4;j++)
		
			printf("%4d", mat[i][j]);
			printf("\n");			
	}
	printf("\n\nSoma da Diagonal Principal: %d", soma);
	
}
