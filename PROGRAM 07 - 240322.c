// ESCREVER UM PROGRAMA QUE LEIA UMA MATRIZ DE ORDEM L1 X C1 E UMA OUTRA MATRIZ DE ORDEM L2 X C2.
// EXIBA AS DUAS MATRIZES. CALCULE E EXIBA A MATRIZ SOMA, SE POSSÍVEL, CALCULE E EXIBA A MATRIZ MULTIPLICAÇÃO, SE POSSÍVEL.
// OBS: L1, C1, L2, C2 DEVEM ESTAR ENTRE 2 E 10.

#include <stdio.h>

main()
{
/* The above code is a program that allows the user to input two matrices and then the program will
output the sum and product of the two matrices. */
    int m1[10][10], m2[10][10], msoma[10][10], mmulti[10][10], i, j, k, l1, l2, c1, c2;

/* Asking the user to input the number of rows for the first matrix. */
    do
    {
        printf("Defina o numero de linhas da primeira matriz (entre 2 e 10): ");
        scanf("%d", &l1);
    } while (l1 < 2 || l1 > 10);

/* Asking the user to input the number of columns for the first matrix. */
    do
    {
        printf("\nDefina o numero de colunas da primeira matriz (entre 2 e 10): ");
        scanf("%d", &c1);
    } while (c1 < 2 || c1 > 10);

/* Asking the user to input the elements of the first matrix. */
    for (i = 0; i < l1; i++)
        for (j = 0; j < c1; j++)
        {
            printf("\nDigite o elemento da matriz 1 [%d][%d]: ", i, j);
            scanf("%d", &m1[i][j]);
        }
    do
    {
        printf("\nDefina o numero de linhas da segunda matriz (entre 2 e 10): ");
        scanf("%d", &l2);
    } while (l2 < 2 || l2 > 10);

    do
    {
        printf("\nDefina o numero de colunas da segunda matriz (entre 2 e 10): ");
        scanf("%d", &c2);
    } while (c2 < 2 || c2 > 10);

    for (i = 0; i < l2; i++)
        for (j = 0; j < c2; j++)
        {
            printf("\nDigite o elemento da matriz 2 [%d][%d]: ", i, j);
            scanf("%d", &m2[i][j]);
        }

    printf("\n\nPrimeira Matriz: \n");
    for (i = 0; i < l1; i++)
    {
        for (j = 0; j < c1; j++)

            printf("%4d", m1[i][j]);
        printf("\n");
    }

    printf("\n\nSegunda Matriz: \n");
    for (i = 0; i < l2; i++)
    {
        for (j = 0; j < c2; j++)

            printf("%4d", m2[i][j]);
        printf("\n");
    }

/* This is the code that is responsible for adding the two matrices together. */
    if (((l1 == l2) && (c1 == c2)))
    {
        for (i = 0; i < l1; i++)
        {
            for (j = 0; j < c1; j++)
                msoma[i][j] = m1[i][j] + m2[i][j];
        }
        printf("\nMatriz Soma: \n");
        for (i = 0; i < l1; i++)
        {
            for (j = 0; j < c1; j++)

                printf("%4d", msoma[i][j]);
            printf("\n");
        }
    }
/* This is a conditional statement that checks if the two matrices are of the same order. If they are
not, then the program will print out the message "Nao e possivel somar matrizes de ordens
diferentes!!" */
    else
        printf("\nNao e possivel somar matrizes de ordens diferentes!!\n\n");

/* This is the code that is responsible for multiplying the two matrices together. */
    if (c1 == l2)
    {
        for (i = 0; i < l1; i++)
            for (j = 0; j < c2; j++)
                mmulti[i][j] = 0;

        for (i = 0; i < l1; i++)
            for (j = 0; j < c2; j++)
                for (k = 0; k < c1; k++)
                    mmulti[i][j] = mmulti[i][j] + m1[i][k] * m2[k][j];

        printf("\nMatriz Multiplicacao: \n");
        for (i = 0; i < l1; i++)
        {
            for (j = 0; j < c2; j++)

                printf("%4d", mmulti[i][j]);
            printf("\n");
        }
    }
/* Printing out the message "Nao e possivel multiplicar as matrizes!!" if the two matrices are not of
the same order. */
    else
        printf("\nNao e possivel multiplicar as matrizes!!");
}
