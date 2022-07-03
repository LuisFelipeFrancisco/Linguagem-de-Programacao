#include <stdio.h>
#include <stdlib.h>
void ler_mat (int mat[3][3])
{
	int i,j;
	for (i=0;i<3;i++)
		for (j=0;j<3;j++)
		{
			printf ("Digite o elemento da matriz [%d][%d]: ", i,j);
			scanf ("%d", &mat[i][j]);
		}
return;	
}
void exb_mat (int mat[3][3])
{
	int i,j;
	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
			printf("%4d", mat[i][j]);
			printf("\n");			
	}
	return;	
}
void soma_matriz(int mat1[3][3], int mat2[3][3], int matsoma[3][3])
{
int i, j;

for(i=0; i<3; i++)
for(j=0;j<3;j++)
matsoma[i][j]= mat1[i][j]+mat2[i][j];

return;
}
void mult_mat (int mat1[3][3], int mat2[3][3], int mmulti[3][3])
{
	int i,j,k;
	for (i=0; i<3; i++)
		for (j=0; j<3; j++)
			mmulti[i][j]=0;

	for (i=0; i<3; i++)
		for (j=0; j<3; j++)
			for (k=0; k<3; k++)
				mmulti[i][j]=mmulti[i][j]+mat1[i][k]*mat2[k][j];
	return;
}

main ()
{
	int m1[3][3],m2[3][3],m3[3][3];
	
	printf("Primeira matriz:\n");
		ler_mat (m1);
			printf("\n");
	//exb_mat (m1);
	printf("Segunda matriz:\n");
		ler_mat (m2);
			printf("\n");
	//exb_mat (m2);
	soma_matriz(m1,m2,m3);
		printf("Matriz soma:\n");
			exb_mat (m3);		
	mult_mat(m1,m2,m3);
		printf("Multiplicacao da matriz:\n");
			exb_mat (m3);
	system("pause");
}
