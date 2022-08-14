// Escrever um programa que leia uma matriz 5x5 leia um numero de uma linha (entre 0 e 4). calcular e exibir a soma da linha digitada. exibir a matriz.
#include <stdio.h>

main()
{
/* Summing the elements of a row of a matrix. */
    int mat[5][5], n, i, j, k, soma = 0;

/* Asking the user to input the elements of the matrix. */
    for (i = 0; i < 5; i++)
        for (j = 0; j < 5; j++)
        {
            printf("Digite o elemento da matriz [%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }

/* Asking the user to input a number between 0 and 4. */
    printf("Digite um numero referente a linha (entre 0 e 4): ");
    scanf("%d", &n);

/* Summing the elements of the row `n` of the matrix. */
    for (j = 0; j < 5; j++)
        soma = soma + mat[n][j];

/* Printing the matrix. */
    printf("\n\nMatriz: \n");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)

            printf("%4d", mat[i][j]);
        printf("\n");
    }

/* Printing the sum of the row `n` of the matrix. */
    printf("\n\nSoma da linha %d: %d", n, soma);
}
