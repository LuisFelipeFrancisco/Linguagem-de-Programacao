#include <stdio.h>

main()
{
/* The above code is multiplying two matrices. */
    int mat1[3][3], mat2[3][3], mat3[3][3], i, j, k;

    /* Asking the user to input the elements of the matrix. */
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
        {
            printf("Digite o elemento da matriz 1 [%d][%d]: ", i, j);
            scanf("%d", &mat1[i][j]);
        }
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
        {
            printf("Digite o elemento da matriz 2 [%d][%d]: ", i, j);
            scanf("%d", &mat2[i][j]);
        }

    /* Initializing the matrix to 0. */
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            mat3[i][j] = 0;

    /* Multiplying the two matrices. */
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            for (k = 0; k < 3; k++)
                mat3[i][j] = mat3[i][j] + mat1[i][k] * mat2[k][j];

    printf("\n\nMatriz 1: \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)

            printf("%4d", mat1[i][j]);
        printf("\n");
    }
    printf("\n\nMatriz 2: \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)

            printf("%4d", mat2[i][j]);
        printf("\n");
    }
    printf("\n\nMatriz gerada pela multiplicacao das matrizes: \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)

            printf("%4d", mat3[i][j]);
        printf("\n");
    }
}
