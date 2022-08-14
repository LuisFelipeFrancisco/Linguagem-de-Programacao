#include <stdio.h>
/* A recursive function that calculates the sum of the series 1 + (n * n) / n, where n is the number of terms in the series. */

float calculaS(int n)
{
/* Checking if the number is 1, if it is, it returns 1. */
    if (n == 1)
        return 1;
/* Returning the sum of the series 1 + (n * n) / n, where n is the number of terms in the series. */
    else
        return (float)(1 + (n * n)) / n + calculaS(n - 1);
}

main()
{
    int num;
    do
    {
        printf("Numero: \n");
        scanf("%d", &num);
    } while (num < 1);
        printf("Serie S: %.3f", calculaS(num));
}
