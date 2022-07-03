#include<stdio.h>

main ()
{
	int i, j, mat[4][4], id=1;
	
	for (i=0;i<4;i++)
		for (j=0;j<4;j++)
		{
			printf ("Digite o elemento da matriz [%d][%d]: ", i,j);
			scanf ("%d", &mat[i][j]);
		}
	for (i=0;i<4;i++)
		for (j=0;j<4;j++)
			if (i=j)
			{
				if (mat[i][j] !=1)
					id=0;
			}
		else if (mat[i][j]!=0)
			id=0;

	printf ("\n\nMatriz: \n");
	for (i=0;i<4;i++)
	{
		for (j=0;j<4;j++)
			
			printf("%4d", mat[i][j]);
			printf("\n");			
			
	}
	if (id)
	printf("\n\n Matriz Identidade!!");
	else 
	printf ("\n\n Nao e matriz identidade");
	
}
