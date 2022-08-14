#include <stdio.h>

main()
{
/* A program that reads a matrix and prints its inverse. */
    int i, j, mat1[5][5], mat2[5][5];

/* Asking the user to input the elements of the matrix. */
    for (i = 0; i < 5; i++)
        for (j = 0; j < 5; j++)
        {
            printf("Digite o elemento da matriz [%d][%d]: ", i, j);
            scanf("%d", &mat1[i][j]);
        }

/* Transposing the matrix. */
    for (i = 0; i < 5; i++)
        for (j = 0; j < 5; j++)
            mat2[i][j] = mat1[j][i];

/* Printing the matrix. */
    printf("\n\nMatriz Lida: \n");
    for (i = 0; i < 5; i++)
    {

        for (j = 0; j < 5; j++)

            printf("%4d", mat1[i][j]);
        printf("\n");
    }
/* Printing the transposed matrix. */
    printf("\n\nMatriz Inversa Gerada: \n");
    for (i = 0; i < 5; i++)
    {

        for (j = 0; j < 5; j++)

            printf("%4d", mat2[i][j]);
        printf("\n");
    }
}
