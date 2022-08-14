#include <stdio.h>
#include <stdlib.h>

/* It calculates the power of a number */

int potencia(int base, int expoente)
{
/* Checking if the exponent is 0, if it is, it will print the result ("1"). */
    int result, aux;
    if (expoente == 0)
        printf("\n%d elevado a %d = 1\n", base, expoente);
/* Calculating the power of a number. */
    else
    {
        result = 1;
        aux = 0;
/* Checking if the value of `aux` is different from `expoente`. */
        while (aux != expoente)
        {
/* Multiplying the result by the base. */
            result *= base;
/* Incrementing the value of `aux` by 1. */
            aux++;
        }
/* Printing the result of the power of a number. */
        printf("\n%d elevado a %d = %d\n", base, expoente, result);
    }
    return 0;
}

main()
{
    int a, b, res;
    printf("Digite a base:\n");
    scanf("%d", &a);
    printf("Digite o expoente:\n");
    scanf("%d", &b);
    res = potencia(a, b);

    system("pause");
}
